#include <bits/stdc++.h>
using namespace std;

int m, n;
int order[405];         // 加工顺序（1-indexed 工件号）
int machine[105][105];  // machine[i][j]: 工件i的第j道工序用的机器(0-indexed)
int duration[105][105]; // duration[i][j]: 工件i的第j道工序耗时
int curProc[105];       // curProc[i]: 工件i当前已完成的工序数(0表示还没开始)
int lastFinish[105];    // lastFinish[i]: 工件i上一道工序完成的时间点
bool busy[105][100005]; // busy[machine][time]: 该机器在该时刻是否被占用

int main() {
    cin >> m >> n;
    
    // 读入加工顺序（注意：题目给的是1~n的工件编号）
    for (int i = 0; i < n * m; i++) {
        cin >> order[i];
        order[i]--; // 转为0-indexed方便数组访问
    }
    
    // 读入每道工序对应的机器号（转为0-indexed）
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> machine[i][j];
            machine[i][j]--;
        }
    
    // 读入每道工序所需时间
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> duration[i][j];
    
    int ans = 0;
    
    // 按给定顺序依次安排每个操作
    for (int idx = 0; idx < n * m; idx++) {
        int job = order[idx];           // 当前要加工的工件(0-indexed)
        int proc = curProc[job];        // 当前是该工件的第proc道工序(0-indexed)
        int mac = machine[job][proc];   // 所需机器
        int dur = duration[job][proc];  // 所需时间
        
        // 最早开始时间 = max(该工件上道工序完成时间, 0)
        int start = lastFinish[job];
        
        // 寻找第一个连续dur个空闲时刻的起始位置
        while (true) {
            bool canPlace = true;
            for (int t = start; t < start + dur; t++) {
                if (busy[mac][t]) {
                    // 从冲突点的下一个时刻重新尝试
                    start = t + 1;
                    canPlace = false;
                    break;
                }
            }
            if (canPlace) break;
        }
        
        // 标记这段时间为占用
        for (int t = start; t < start + dur; t++)
            busy[mac][t] = true;
        
        // 更新该工件的完成时间和工序进度
        lastFinish[job] = start + dur;
        curProc[job]++;
        
        ans = max(ans, start + dur);
    }
    
    cout << ans << endl;
    return 0;
}
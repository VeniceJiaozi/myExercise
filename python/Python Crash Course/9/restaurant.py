class Reastaurant():
    '''创建一个名为Restaurant 的类'''
    def __init__(self,restaurant_name,cuisine_type):
        '''初始化'''
        self.reastaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_reastaurant(self):
        '''打印餐馆信息'''
        print("餐馆名称是：\n",self.reastaurant_name)
        print("餐馆类型是：\n",self.cuisine_type)

    def open_reastaurant(self):
        '''打印餐馆正在营业'''
        print("餐馆正在营业\n")

restaurant = Reastaurant("老李家","川菜")
restaurant.describe_reastaurant()
restaurant.open_reastaurant()
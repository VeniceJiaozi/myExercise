from random import randint

class Die():
    def __init__(self,sides=6):
        self.sides=sides

    def roll_die(self):
        x=randint(1,self.sides)
        print(x)

six_sides_die=Die();
twenty_sides_die=Die(20);

for i in range(10):
    six_sides_die.roll_die()

for i in range(10):
    twenty_sides_die.roll_die()
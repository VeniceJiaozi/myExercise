'''9-4 就就餐餐人人数数 ：在为完成练习9-1而编写的程序中，添加一个名为number_served
 的属性，并将其默认值设置为0。根据这个类创建一个名为restaurant 的实
例；打印有多少人在这家餐馆就餐过，然后修改这个值并再次打印它。
添加一个名为set_number_served() 的方法，它让你能够设置就餐人数。调用这个方法并向它
传递一个值，然后再次打印这个值。
添加一个名为increment_number_served() 的方法，它让你能够将就餐人数递增。调用这个方
法并向它传递一个这样的值：你认为这家餐馆每天可能接待的就
餐人数。'''
class Restaurant():
    def __init__(self,restaurantName,cuisineType,numberServed):
        self.restaurantName = restaurantName
        self.cuisineType = cuisineType
        self.numberServed = numberServed

    def set_number_served(self,numberServed):
        self.numberServed = numberServed

    def increment_number_served(self,increment):
        self.numberServed += increment

    def describe_restaurant(self):
        print(f"Restaurant name is {self.restaurantName}")
        print(f"Restaurant cuisine type is {self.cuisineType}")
        print(f"Restaurant number served is {self.numberServed}")

restaurant = Restaurant('KFC','chicken',0)
restaurant.describe_restaurant()
restaurant.set_number_served(100)
restaurant.describe_restaurant()
restaurant.increment_number_served(200)
restaurant.describe_restaurant()
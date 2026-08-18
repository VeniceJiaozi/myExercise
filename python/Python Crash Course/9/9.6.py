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

class IceCreamStand(Reastaurant):
    '''创建一个子类'''
    def __init__(self,restaurant_name,cuisine_type,flavor):
        '''初始化'''
        super().__init__(restaurant_name,cuisine_type)
        self.flavor = flavor

    def display_flavor(self):
        '''打印口味'''
        print("口味是：\n",self.flavor)

iceCreamStand=IceCreamStand('KFC','chicken','chocolate')
iceCreamStand.display_flavor()
iceCreamStand.describe_reastaurant()

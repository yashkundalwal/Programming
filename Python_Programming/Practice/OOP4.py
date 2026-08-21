class Demo:
    #class variable
    Value1 = 10
    Value2 = 20

    def __init__(self):
        self.No1 = 11
        self.No2 = 21

    # instance method
    def fun(self):
        print("Inside Instance method named as fun")
        print(self.No1)
        print(self.No2)

        print(Demo.Value1)
        print(Demo.Value2)

    @classmethod
    def gun(cls):
        print("Inside Class method named as gun")
        # print(Demo.No1)  Not Allowed
        # print(Demo.No2)  Not Allowed

        print(Demo.Value1)
        print(Demo.Value2)


# Call with object

dobj = Demo()
dobj.gun()
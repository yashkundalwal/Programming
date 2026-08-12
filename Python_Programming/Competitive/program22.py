# Accepts radius of Circle and print its Area

def AreaCircle(Radius, PI):
    
    Area = PI * Radius * Radius

    return Area
        

def main():

    Value = int(input("Enter the Radius: "))

    Ret = AreaCircle(Value, PI = 3.14)

    print("The Area of Circle is: ", Ret)

if __name__ == "__main__":
    main()
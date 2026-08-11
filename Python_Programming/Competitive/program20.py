# Accept one Number and print all Odd Number till that number

def PrintEven(No):
    
    for i in range(1,(No + 1)):
        if(i % 2 != 0):
        
            print(i)
        

def main():

    Value = int(input("Enter the Number: "))

    PrintEven(Value)

if __name__ == "__main__":
    main()
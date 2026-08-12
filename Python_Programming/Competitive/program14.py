# Accept Number from user and display its Digits

def DigitDisplay(No):

    while(No != 0):
    
        Digit = No % 10

        print(Digit)

        No = No // 10
    
def main():

    Value = int(input("Enter the Number: "))

    DigitDisplay(Value)

if __name__ == "__main__":
    main()
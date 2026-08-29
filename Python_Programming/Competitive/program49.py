# display 5 time marvellous on screen

def Display(No):

    for i in range(No):
        print("Marvellous")

def main():
    Value = int(input("Enter the Number: "))

    Display(Value)

if __name__ == "__main__":
    main()
# Display 10 to 1 on Screen

def Display(no):
    while(no != 0):
        print(no)
        no = no - 1

def main():
    Value = int(input("Enter the Number: "))

    Display(Value)

if __name__ == "__main__":
    main()
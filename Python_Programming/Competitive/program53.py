# Accepts Number from user and Display that number of * on screen
# intput : 5
# output : *  *  *  *  *

def Display(No):

    for i in range(No):
        print("*",end ="  ")

    print()

def main():
    Value = int(input("Enter the Number: "))

    Display(Value)

if __name__ == "__main__":
    main()
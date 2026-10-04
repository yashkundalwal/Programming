# Accept Marks and Displays Grade

def DisplayGrade(No):
    
    if(No >= 75):
        print("Distinction")
    elif(No >= 60):
        print("First Class")
    elif(No >= 50):
        print("Second Class")
    elif(No < 50):
        print("Fail")

def main():

    Value = int(input("Enter the Number: "))

    DisplayGrade(Value)

if __name__ == "__main__":
    main()
# intput : 5
# output : *  *  *  *  *
#          *  *  *  *  *
#          *  *  *  *  *
#          *  *  *  *  *
#          *  *  *  *  *

def DisplayPattern(Row,Col):

    for i in range(0,Row):
        for j in range(0,Col):
            print("*",end = "  ")

        print()

        

    

def main():
    Value1 = int(input("Enter Number of Rows: "))
    Value2 = int(input("Enter Number of Columns: "))

    DisplayPattern(Value1,Value2)

if __name__ == "__main__":
    main()
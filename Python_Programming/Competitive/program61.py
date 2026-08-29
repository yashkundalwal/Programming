# intput : 5
# output : *  *  *  *  *
#          *  *  *  *  
#          *  *  *  
#          *  *  
#          *  

def DisplayPattern(Row,Col):

    for i in range(Row):
        for j in range(Col):
            
            print("*", end = "  ")

        Col = Col - 1
        print()

        

    

def main():
    Value1 = int(input("Enter Number of Rows: "))
    Value2 = int(input("Enter Number of Columns: "))

    DisplayPattern(Value1,Value2)

if __name__ == "__main__":
    main()
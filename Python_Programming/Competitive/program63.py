# intput : 5
# output : 1  
#          1  2  
#          1  2  3  
#          1  2  3  4  
#          1  2  3  4  5

def DisplayPattern(Row,Col):

    for i in range(1,Row+1):
        for j in range(1,Col+1):

            if((i > j) or (i == j)):
                print(j, end = "  ")

        print()

        

    

def main():
    Value1 = int(input("Enter Number of Rows: "))
    Value2 = int(input("Enter Number of Columns: "))

    DisplayPattern(Value1,Value2)

if __name__ == "__main__":
    main()
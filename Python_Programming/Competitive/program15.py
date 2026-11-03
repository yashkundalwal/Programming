# Accept a Number from user and check if it is a palindrome or not

def ChkPalindrome(No):

    Copy = No

    RevNo = 0

    while(No != 0):
    
        Digit = No % 10

        RevNo = (RevNo * 10) + Digit

        No = No // 10

    if(RevNo == Copy):
        return True
    else:
        return False
    
def main():

    Value = int(input("Enter the Number: "))

    Ret = ChkPalindrome(Value)

    if(Ret == True):
        print("It is a Palindrome")
    else:
        print("It is Not a Palindrome")

if __name__ == "__main__":
    main()
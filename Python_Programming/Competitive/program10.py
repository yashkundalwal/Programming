# Accept one character and checks whether it is a vowel or consonants

def ChkDivisible(iNo):

    if((iNo % 3 == 0) and (iNo % 5 == 0)):
        return True
    else:
        return False


def main():
    print("Enter the Number: ")
    iValue = int(input())

    bRet = False

    bRet = ChkDivisible(iValue)

    if(bRet == True):
        print("Divisible by 3 and 5")
    else:
        print("not divisible by 3 and 5")

if __name__ == "__main__":
    main()
# Accept one character and checks whether it is a vowel or consonants

def ChkVowels(Char):

    if(Char == 'A' or Char == 'E' or Char == 'I' or Char == 'O' or Char == 'U' or Char == 'a' or Char == 'e' or Char == 'i' or Char == 'o' or Char == 'u'):
        return True
    else:
        return False


def main():
    print("Enter the Character: ")
    ch = input()

    if(len(ch) == 1):
        print("Valid Character")
    else:
        print("Invalid Character")

    bRet = False

    bRet = ChkVowels(ch)

    if(bRet == True):
        print("It is a Vowel")
    else:
        print("It is a Consonant")

if __name__ == "__main__":
    main()
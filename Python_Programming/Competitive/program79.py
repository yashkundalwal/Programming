import threading

def CountSmall(str):

    print("Small Thread ID : ", threading.get_ident())
    print("Small Thread name : ", threading.current_thread().name)

    iCount = 0

    for i in str:

        if(i >= 'a' and i <= 'z'):
            iCount = iCount + 1
            print(i)

    print("Lower Case elements are: ", iCount)

def CountCapital(str):

    print("Capital Thread ID : ", threading.get_ident())
    print("Capital Thread name : ", threading.current_thread().name)

    iCount = 0

    for i in str:

        if(i >= 'A' and i <= 'Z'):
            iCount = iCount + 1
            print(i)

    print("Upper Case elements are: ", iCount)

def CountDigit(str):

    print("Digit Thread ID : ", threading.get_ident())
    print("Digit Thread name : ", threading.current_thread().name)

    iCount = 0

    for i in str:

        if(i >= '0' and i <= '9'):
            iCount = iCount + 1
            print(i)

    print("Numeric Case elements are: ", iCount)

def main():

    print("Main Thread ID : ", threading.get_ident())
    print("Main Thread name : ", threading.current_thread().name)

    Data = input("Enter the String: ")

    Small = threading.Thread(target = CountSmall , args = (Data,))
    Capital = threading.Thread(target = CountCapital , args = (Data,))
    Digit = threading.Thread(target = CountDigit , args = (Data,))

    Small.start()
    Capital.start()
    Digit.start()

    Small.join()
    Capital.join()
    Digit.join()



if __name__ == "__main__":
    main()
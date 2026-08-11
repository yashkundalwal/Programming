# MultiThreading Extract all even and odd number from list

import threading

def FindEven(No):

    for i in No:

        if(i%2 == 0):
            print(i)

def FindOdd(No):

    for i in No:

        if(i%2 != 0):
            print(i)

def main():

    Data = list()

    Size = int(input("Enter the Size: "))

    print("Enter the Elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    EvenList = threading.Thread(target = FindEven, args = (Data,))
    OddList = threading.Thread(target = FindOdd, args = (Data,))

    EvenList.start()
    OddList.start()

    EvenList.join()
    OddList.join()

if __name__ == "__main__":
    main()
# Multithreading Display EvenFactor sum and OddFactor sum

import threading

def SumEven(No):

    Sum = 0
    
    for i in range(2,No+1,2):

        Sum = Sum + i

    print("Sum of Even Number is: ",Sum)

def SumOdd(No):

    Sum = 0

    for i in range(1,No+1,2):
        
        Sum = Sum + i

    print("Sum of Odd Number is: ",Sum)

def main():

    EvenFactor = threading.Thread(target = SumEven , args = (10,))
    OddFactor = threading.Thread(target = SumOdd , args = (10,))

    EvenFactor.start()
    OddFactor.start()

    EvenFactor.join()
    OddFactor.join()

if __name__ == "__main__":
    main()
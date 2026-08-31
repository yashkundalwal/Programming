# Multithreading Display Even Odd

import threading

def Even(No):

    print("The Even Numbers are: ")
    
    for i in range(1,No+1):
        if(i % 2 == 0):
            print(i)

def Odd(No):

    print("The Odd Numbers are: ")

    for i in range(1,No+1):
        if(i % 2 != 0):
            print(i)

def main():

    tobj1 = threading.Thread(target = Even , args = (10,))
    tobj2 = threading.Thread(target = Odd , args = (10,))

    tobj1.start()
    tobj2.start()

    tobj1.join()
    tobj2.join()

if __name__ == "__main__":
    main()
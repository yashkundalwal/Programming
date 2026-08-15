import threading
import time


def SumEven(No):
    Sum = 0

    for i in range(2,No,2):
        Sum = Sum + i

    print("Summation of Even: ", Sum)

def SumOdd(No):
    Sum = 0

    for i in range(1,No,2):
        Sum = Sum + i

    print("Summation of Odd:", Sum)

def main():

    start_time = time.perf_counter()

    tobj1 = threading.Thread(target = SumEven, args = (100000000,))
    
    tobj2 = threading.Thread(target = SumOdd, args = (100000000,))

    tobj1.start()
    tobj2.start()

    tobj1.join()
    tobj2.join()

    end_time = time.perf_counter()

    print(f"Time required is: {end_time - start_time:.4f}sec")


if __name__ == "__main__":
    main()
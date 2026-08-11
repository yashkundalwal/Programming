import os
import multiprocessing
import time


def SumEven(No):
    print(f"PID of SumEven is: {os.getpid()}  PPID of SumEven is: {os.getppid()}")

    Sum = 0

    for i in range(2,No,2):
        Sum = Sum + i

    print("Summation of Even: ", Sum)

def SumOdd(No):
    print(f"PID of SumOdd is: {os.getpid()}  PPID of SumOdd is: {os.getppid()}")

    Sum = 0

    for i in range(1,No,2):
        Sum = Sum + i

    print("Summation of Odd:", Sum)

def main():
    print(f"PID of Main is: {os.getpid()}  PPID of Main is: {os.getppid()}")

    start_time = time.perf_counter()

    tobj1 = multiprocessing.Process(target = SumEven, args = (100,))
    
    tobj2 = multiprocessing.Process(target = SumOdd, args = (100,))

    tobj1.start()
    tobj2.start()

    tobj1.join()
    tobj2.join()

    end_time = time.perf_counter()

    print(f"Time required is: {end_time - start_time:.4f}sec")


if __name__ == "__main__":
    main()
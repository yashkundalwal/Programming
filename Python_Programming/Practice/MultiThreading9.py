import threading
import time


def SumEven(No):
    print("TID of SumEven Thread is: ", threading.get_ident())

def SumOdd(No):
    print("TID of SumOdd Thread is: ", threading.get_ident())

def main():

    print("TID of Main Thread is: ", threading.get_ident())

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
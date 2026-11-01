import threading

def DisplayForward(No):

    print("Elements in Forward order")

    for i in range(1,No):
        print(i)

def DisplayBackward(No):

    print("Elements in Backward order")

    for i in range(No,0,-1):
        print(i)

def main():

    tobj1 = threading.Thread(target = DisplayForward, args = (50,))
    tobj2 = threading.Thread(target = DisplayBackward, args = (50,))

    tobj1.start()

    tobj1.join()

    tobj2.start()

    tobj2.join()

if __name__ == "__main__":
    main()
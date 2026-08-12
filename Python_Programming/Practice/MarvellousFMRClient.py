from MarvellousLibrary import filterX, mapX, reduceX

ChkEven = lambda No : (No % 2 == 0)

Increment = lambda No : No + 1

Addition = lambda No1,No2 : No1 + No2

def main():
    Data  = [13,12,8,10,11,20]

    print("Input Data is: ", Data)

    FData = list(filterX(ChkEven, Data))

    print("Filtered Data is: ", FData)

    MData = list(mapX(Increment, FData))

    print("Data after Map: ", MData)

    RData = reduceX(Addition, MData)

    print("Reduced Data is: ", RData)

if __name__ == "__main__":
    main()
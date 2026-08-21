# A lambda funtion which filter list if Number is (greater than or equal to 70 and less than or equal to 90) , map every element with + 10, reduce it to Multiplication of all numbers
# list = [10,76,98,82,88,38,28,92]
# flist = [76,82,88]
# mlist = [86,92,98]
# rlist = 775376

from functools import reduce

FilterX = lambda x : x >= 70 and x <= 90 

MapX = lambda x : x + 10

ReduceX = lambda No1, No2 : No1 * No2

def main():

    Data = list()
    Size = int(input("Enter the number of Elements: "))

    print("Enter the Elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    print(Data)

    fData = list(filter(FilterX, Data))

    print(fData)

    mData = list(map(MapX, fData))

    print(mData)

    rData = reduce(ReduceX, mData)

    print(rData)

if __name__ == "__main__":
    main()
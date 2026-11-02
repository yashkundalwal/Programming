# A lambda funtion which filter list if Number is Even , map every element with its square, reduce it to Addition of all numbers
# list = [5,2,3,4,3,4,1,2,8,10]
# flist = [2,4,4,2,8,10]
# mlist = [4,16,16,4,64,100]
# rlist = 204

from functools import reduce

FilterX = lambda x : x % 2 == 0

MapX = lambda x : x ** 2

ReduceX = lambda No1,No2 : No1 + No2

def main():

    Data = list()

    Size = int(input("Enter the size: "))

    print("Enter the Elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    print(Data)

    fData = list(filter(FilterX, Data))

    print(fData)

    mData = list(map(MapX, fData))

    print(mData)

    rData = (reduce(ReduceX, mData))

    print(rData)

if __name__ == "__main__":
    main()
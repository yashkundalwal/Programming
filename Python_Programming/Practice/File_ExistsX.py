import os

def main():
    if(os.path.exists("Demo.txt") == True):
        print("File is present in Current directory")
    else:
        print("There is no such file")

if __name__ == "__main__":
    main()
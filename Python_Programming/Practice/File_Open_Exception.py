def main():
    try:
        open("Demo.txt","r")

    except FileNotFoundError as fobj:
        print("File is not present in current directory")

    print("File gets opened")

if __name__ == "__main__":
    main()
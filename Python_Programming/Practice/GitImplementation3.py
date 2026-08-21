import subprocess
import sys
import os

def main():

    Directory = sys.argv[1]

    for Foldername, Subf, Filename in os.walk(Directory):
        FilePath = os.path.join(Foldername, "program351X.c")

    GitFilePath = os.path.relpath(FilePath, Directory)



    result = subprocess.run(
        ["git","commit","-m","Add test.c"],
        cwd = Directory,
        capture_output = True,
        text = True
    )

    print("RETURN CODE: ",result.returncode)
    print("STDOUT: ",result.stdout)
    print("STDERR: ",result.stderr)

if __name__ == "__main__":
    main()
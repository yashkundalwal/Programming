import java.io.*;
import java.util.*;

class program724
{
    public static void main(String A[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FolderName = null;
        String PackedFileName = null;
        int iRet = 0;

        String Header = "";
        int Size = 0;

        byte Buffer[] = new byte[1024];

        FileOutputStream foobj = null;
        FileInputStream fiobj = null;

        System.out.println("Enter Folder name: ");
        FolderName = sobj.nextLine();

        System.out.println("Enter the name of Packed File: ");
        PackedFileName = sobj.nextLine();

        File fobjfolder = new File(FolderName);

        if((fobjfolder.exists()) && (fobjfolder.isDirectory()))
        {
            System.out.println("Folder exists");

            File fobjpack = new File(PackedFileName);

            fobjpack.createNewFile();   // Pack File gets created

            foobj = new FileOutputStream(fobjpack);

            File fArr[] = fobjfolder.listFiles();

            System.out.println("Number of Files in Folder: "+fArr.length);

            for(int i = 0 ; i < fArr.length ; i++)
            {
                fiobj = new FileInputStream(fArr[i]);

                Header = Header + fArr[i].getName();
                Header = Header + " ";
                Header = Header + fArr[i].length();

                System.out.println("Header is: "+ Header);

                /*for(int j = 1 ; j <= Size ; j++)
                {
                    Header = Header + " ";
                }

                while((iRet = fiobj.read(Buffer)) != -1)
                {
                    foobj.write(Header.getBytes());
                    foobj.write(Buffer, 0, iRet);
                }

                */

                fiobj.close();
                Header = "";
            }

            foobj.close();
            sobj.close();
        }
        else
        {
            System.out.println("There is no such Folder");
        }
    }
}
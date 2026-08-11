import java.io.*;
import java.util.*;

class program730
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String PackFileName = null;

        File fpackobj = null;

        FileInputStream fiobj = null;

        byte Header[] = new byte[100];

        String strHeader = null;

        String Tokens[] = null;

        File NewFile = null;

        System.out.println("Enter the name of Packed File: "); 
        PackFileName = sobj.nextLine();

        fpackobj = new File(PackFileName);

        if(fpackobj.exists())
        {
            fiobj = new FileInputStream(fpackobj);

            fiobj.read(Header,0,100);

            strHeader = new String(Header);

            System.out.println("Header is: "+ strHeader);

            strHeader = strHeader.trim();

            strHeader = strHeader.replaceAll("\\s+"," ");

            Tokens = strHeader.split(" ");

            System.out.println("FileName: "+Tokens[0]);
            System.out.println("Size: "+Tokens[1]);
        }
        else
        {
            System.out.println("There is no such Pack File");
        }
    }
}
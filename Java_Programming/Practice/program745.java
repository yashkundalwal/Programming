// Convert a String and reverse individual word of it

import java.util.*;

class program745
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Token[] = str.split(" ");

        StringBuffer sb = null;

        for(int i = 0 ; i < Token.length ; i++)
        {
            sb = new StringBuffer(Token[i]);

            System.out.print(sb.reverse());
            System.out.print(" ");
        }

        System.out.println("");
    }
}
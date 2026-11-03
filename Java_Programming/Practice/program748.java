// Convert a String and reverse individual word of it

import java.util.*;

class program748
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        StringX strobj = new StringX();

        String sRet = strobj.WordReverse(str);

        System.out.println(sRet);

        
    }
}

class StringX
{
    public String WordReverse(String str)
    {
        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Token[] = str.split(" ");

        StringBuffer sb = null;

        StringBuffer FinalStr = new StringBuffer("");

        for(int i = 0 ; i < Token.length ; i++)
        {
            sb = new StringBuffer(Token[i]);

            FinalStr = FinalStr.append(sb.reverse());
            FinalStr = FinalStr.append(" ");
        }

        String Output = new String(FinalStr);

        Output = Output.trim();

        return Output;
    }
}
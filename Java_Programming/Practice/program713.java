import java.util.*;

class program713
{
    public static void main(String A[])
    {
        StringX strobj = new StringX();
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the String: ");
        str = sobj.nextLine();

        iRet = strobj.CountWords(str);

        System.out.println("Number of Words are: " + iRet);
    }
}

class StringX
{
    public int CountWords(String str)
    {
        str = str.trim();

        str = str.replaceAll("\\s++"," ");

        String Tokens[] = str.split(" ");

        return Tokens.length;
    }
}
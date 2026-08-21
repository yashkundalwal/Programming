import java.util.*;

class program716
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

        strobj.DisplayWords(str);

        System.out.println("Number of Words are: " + iRet);

        strobj.LargestWord(str);
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

    public void DisplayWords(String str)
    {
        str = str.trim();

        str = str.replaceAll("\\s++"," ");

        String Tokens[] = str.split(" ");

        for(int i = 0 ; i < Tokens.length ; i++)
        {
            System.out.println(Tokens[i] + " : " + Tokens[i].length());
        }
    }

    public void LargestWord(String str)
    {
        String MaxLength = null;
        int iMax = 0;
        str = str.trim();

        str = str.replaceAll("\\s++"," ");

        String Tokens[] = str.split(" ");

        for(int i = 0 ; i < Tokens.length ; i++)
        {
            if((Tokens[i].length()) > iMax)
            {
                iMax = Tokens[i].length();
                MaxLength = Tokens[i];
            }
        }

        System.out.println("Largest Word is: "+ MaxLength);

        System.out.println("Largest Word length is: "+ MaxLength.length());
    }
}
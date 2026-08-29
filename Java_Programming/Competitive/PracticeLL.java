import java.util.*;

class PracticeLL
{
    public static void main(String A[])
    {
        LinkedList<Integer> lobj = new LinkedList<Integer>();

        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.println("Enter the number of elements: ");

        iSize = sobj.nextInt();

        int i = 0;
        int Value = 0;
        int iCount = 0;

        System.out.println("Enter the elements: ");

        for(i = 0 ; i < iSize ; i++)
        {
            Value = sobj.nextInt();
            lobj.add(Value);
        }

        Iterator<Integer> iobj = lobj.iterator();

        while(iobj.hasNext())
        {
            int iNo = iobj.next();

            if((iNo % 2) == 0)
            {
                iCount++;
            }
        }

        System.out.println("Count of Even Number is: "+ iCount);
    }
}
import java.util.*;

class ArrayListAdd
{
    public static void main(String A[])
    {
        ArrayList<Integer> aobj = new ArrayList<Integer>();

        int iSum = 0;

        aobj.add(10);
        aobj.add(20);
        aobj.add(30);
        aobj.add(40);
        aobj.add(50);

        Iterator<Integer> iobj = aobj.iterator();

        while(iobj.hasNext())
        {
            iSum = iSum + iobj.next();
        }

        System.out.println("Summation is: "+iSum);
    }
}
import java.util.*;

class ArrayX
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0;

        int Arr[] = new int[4];

        System.out.println("Enter the elements: ");        

        for(i = 0 ; i < 4 ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements in Array are:");

        for(i = 0 ; i < 4 ; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}
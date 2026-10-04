import java.util.*;

class Assignment48c
{
    public static void CheckResult(int Marks[], int iSize)
    {
        int i = 0;
        int iSum = 0;
        int Avg = 0;

        for(i = 0 ; i < Marks.length ; i++)
        {
            if(Marks[i] < 35)
            {
                System.out.println("Result : Fail");
                return;
            }
            else
            {
                iSum = iSum + Marks[i];
            }
        }

        Avg = iSum / iSize ;

        if(Avg >= 75)
        {
            System.out.println("Average Marks : "+Avg);
            System.out.println("Final Result : Distinction");
        }
        else if(Avg >= 60)
        {
            System.out.println("Average Marks : "+Avg);
            System.out.println("Final Result : First Class");
        }
        else if(Avg >= 50)
        {
            System.out.println("Average Marks : "+Avg);
            System.out.println("Final Result : Second Class");
        }
        else if(Avg < 50)
        {
            System.out.println("Average Marks : "+Avg);
            System.out.println("Final Result : Pass");
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int i = 0;

        System.out.println("Enter the Number of Subjects: ");
        iSize = sobj.nextInt();

        if(iSize < 0)
        {
            System.out.println("Invalid Number of Subjects");
        }

        int Arr[] = new int[iSize];

        System.out.println("Enter the marks: ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            Arr[i] = sobj.nextInt();
            if((Arr[i] < 0) || (Arr[i] > 100))
            {
                System.out.println("Marks Should be in range 0 to 100");
                return;
            }
        }

        CheckResult(Arr,iSize);

    }
}
import java.util.*;

class program878
{
    public static void main(String A[])
    {
        Searching sobj = new Searching(7);

        sobj.Accept();
        sobj.Display();

        if(sobj.BinarySearch(35) == true)
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("Element is not present");
        }
    }
    
}

interface GetterSetter
{
    void Accept();
    void Display();
}

class ArrayX implements GetterSetter
{
    protected int Arr[];
    protected int iSize;

    public ArrayX(int iSize)
    {
        this.iSize = iSize;
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of Array: ");

        for(int i = 0 ; i < this.iSize ; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the Array are: ");

        for(int i = 0 ; i < this.iSize ; i++)
        {
            System.out.print(Arr[i]+"\t");
        }

        System.out.println();
    }
}

final class Searching extends ArrayX
{
    public Searching(int iSize)
    {
        super(iSize);
    }

    public boolean LinearSearch(int iNo)
    {
        int i = 0;
        boolean bFlag = false;

        for(i = 0 ; i < super.iSize ; i++)
        {
            if(Arr[i] == iNo)
            {
                bFlag = true;
                break;
            }
        }

        return bFlag;
    }

    public boolean BidirectionalSearch(int iNo)
    {
        int iStart = 0;
        int iEnd = 0;
        boolean bFlag = false;

        iStart = 0;
        iEnd = super.iSize - 1;

        while(iStart <= iEnd)
        {
            if((Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
            {
                bFlag = true;
                break;
            }

            iStart++;
            iEnd--;
        }

        return bFlag;
    }

    public boolean CheckSorted()
    {
        boolean bFlag = true;

        for(int i = 0 ; i < iSize-1 ; i++)
        {
            if(Arr[i] > Arr[i+1])
            {
                bFlag = false;
                break;
            }
        }

        return bFlag;
    }

    public boolean BinarySearch(int iNo)
    {
        int iStart = 0;
        int iEnd = 0;
        int iMid = 0;

        boolean bFlag = false;

        iStart = 0;
        iEnd = iSize - 1;

        while(iStart <= iEnd)
        {
            iMid = iStart + ((iEnd - iStart)/2);

            if(Arr[iMid] == iNo || Arr[iStart] == iNo || Arr[iEnd] == iNo)
            {
                bFlag = true;
                break;
            }
            else if(Arr[iMid] > iNo)
            {
                iEnd = iMid - 1;
            }
            else if(Arr[iMid] < iNo)
            {
                iStart = iMid + 1;
            }
        }

        return bFlag;
    }
}
// SinglyCircular LL

class program459
{
    public static void main(String A[])
    {
        SinglyCL sobj = new SinglyCL();

        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of Nodes are: "+iRet);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of Nodes are: "+iRet);
    }
}

class node
{
    public int data ;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCL
{
    node first;
    node last;
    int iCount;

    SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;

        temp = first;

        if((first == null) && (last == null))
        {
            return ;
        }

        do
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }while(temp != first);
        System.out.println("");
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = null;

        newn = new node(iNo);

        if((first == null) && (last == null))
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;

        }

        last.next = first;
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;

        newn = new node(iNo);

        if((first == null) && (last == null))
        {
            first = newn;
            last = newn;
        }
        else
        {
            last.next = newn;

            last = newn;
        }

        last.next = first;
        iCount++;
    }
}
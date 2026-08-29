import java.util.*; 

class Assignment49a
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int ParkingHours = 0;
        int Fee = 0;

        System.out.println("Enter the Parking Hours: ");
        ParkingHours = sobj.nextInt();

        if(ParkingHours < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(ParkingHours <= 2)
        {
            Fee = ParkingHours * 20;
        }
        else
        {
            Fee = 40 + ((ParkingHours - 2) * 10);

            if(ParkingHours > 10)
            {
                Fee = Fee + 50;
            }

        }

        System.out.println("Total Parking Hours: "+ParkingHours);
        System.out.println("Total Parking Fee: "+Fee);
    }
}
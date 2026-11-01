import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sobj = new Scanner(System.in);
		
		int T = 0;
		int X = 0;

        System.out.println("Enter the Number of Test Cases: ");
        T = sobj.nextInt();
        
        String Result = null;
        
        char Arr[] = null;
        
        int CarlsenWin = 0;
        int Draw = 0;
        int ChefWin = 0;
        int CarlsenPoints = 0;
        int ChefPoints = 0;
        int PrizeMoneyCarlsen = 0;
        int PrizeMoneyChef = 0;
        
        for(int i = 0; i < T ; i++)
        {
            System.out.println("Enter the X: ");
            X = sobj.nextInt();

            sobj.nextLine();

            System.out.println("Enter the Result: ");
            Result = sobj.nextLine();
            
            Arr = Result.toCharArray();
            
            if(Arr.length != 14)
            {
                System.out.println("Invalid Number of Games");
                return;
            }
            
            for(int j = 0; j < Arr.length ; j++)
            {
                if(Arr[j] == 'C' || Arr[j] == 'c')
                {
                    CarlsenWin++;
                }
                else if(Arr[j] == 'N' || Arr[j] == 'n')
                {
                    ChefWin++;
                }
                else if(Arr[j] == 'D' || Arr[j] == 'd')
                {
                    Draw++;
                }
                else
                {
                    System.out.println("Invalid Input");
                    return ;
                }
            }

            if((CarlsenWin + ChefWin + Draw) != 14)
            {
                System.out.println("Issue");
            }

            System.out.println("Testing 1: "+CarlsenWin);
            CarlsenPoints = (2 * CarlsenWin) + (1 * Draw);
            System.out.println("Testing 2: "+CarlsenPoints);

            System.out.println("Testing 3: "+ChefWin);
            ChefPoints = (2 * ChefWin) + (1 * Draw);
            System.out.println("Testing 4: "+ChefPoints);
            
            if(CarlsenPoints > ChefPoints)
            {
                PrizeMoneyCarlsen = 60 * X;
                System.out.println("Testing 5: "+PrizeMoneyCarlsen);
                PrizeMoneyChef = 40 * X;
                System.out.println("Testing 6: "+PrizeMoneyChef);
            }
            else if(ChefPoints > CarlsenPoints)
            {
                PrizeMoneyCarlsen = 40 * X;
                System.out.println("Testing 7: "+PrizeMoneyCarlsen);
                PrizeMoneyChef = 60 * X;
                System.out.println("Testing 8: "+PrizeMoneyChef);
            }
            else if(CarlsenPoints == ChefPoints)
            {
                PrizeMoneyCarlsen = 55 * X;
                System.out.println("Testing 9: "+PrizeMoneyCarlsen);
                PrizeMoneyChef = 45 * X;
                System.out.println("Testing 10: "+PrizeMoneyChef);
            }
            
            System.out.println(PrizeMoneyCarlsen);

            Result = null;
        
            Arr = null;
            
            CarlsenWin = 0;
            Draw = 0;
            ChefWin = 0;
            CarlsenPoints = 0;
            ChefPoints = 0;
            PrizeMoneyCarlsen = 0;
            PrizeMoneyChef = 0;
        }
        
	}
}

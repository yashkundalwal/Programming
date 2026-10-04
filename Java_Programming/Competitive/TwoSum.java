import java.util.*;
class TwoSum
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of elements: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements: ");

        for(int i = 0 ; i < Arr.length ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter the target variable: ");
        int target = sobj.nextInt();

        Solution soobj = new Solution();

        int Brr[] = new int[2];

        Brr = soobj.twoSum(Arr,target);

        System.out.println("Output is: ");

        for(int i = 0 ; i < Brr.length ; i++)
        {
            System.out.println(Brr[i]);
        }
    }
}

class Solution 
{
    public int[] twoSum(int[] nums, int target) 
    {
        int Output[] = new int[2];
        for(int i = 0 ; i < nums.length ; i++)
        {
            for(int j = 1 ; j < nums.length ; j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    Output[0] = i;
                    Output[1] = j;
                    return Output;

                }
            }
        }
        
        return Output;
        
    }
}
import java.util.Scanner;
/*
Write a java program which accept two array from user and 
retun difference between summation of array.

Input : N: 6
        2   9   7   5   2   3
        N:  4
        9   3   5   5

Output : 6      (28-22)

*/


class ArrayX
{
    public int Arr[];
    public int Brr[];

    public void Accept(int iNo1, int iNo2)
    {
        Arr = new int[iNo1];
        Brr = new int[iNo2];

        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of First array");
        System.out.println("Enter the " +iNo1 +" elements of array:");
        for(iCnt=0; iCnt<iNo1; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" Element");
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the elements of Second array");
        for(iCnt=0; iCnt<iNo2; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" Element");
            Brr[iCnt] = sobj.nextInt();
        }
    }

    // public void Display()
    // {
    //     System.out.println("Elements of first array are:");

    //     int iCnt = 0;
    //     for(iCnt=0; iCnt<Arr.length; iCnt++)
    //     {
    //         System.out.print(Arr[iCnt]+ "\t");
    //     }
    //     System.out.println();

    //     System.out.println("Elements of second array are:");
    //     for(iCnt=0; iCnt<Brr.length; iCnt++)
    //     {
    //         System.out.print(Brr[iCnt]+ "\t");
    //     }
    //     System.out.println();
    // }

    public int DiffSummation()
    {
        int iSum1 = 0;
        int iSum2 = 0;
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }

        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            iSum2 = iSum2 + Brr[iCnt];
        }
        return iSum1 - iSum2;        
    }
}

class Assignment42_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of first array:");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the size of second array:");
        int iValue2 = sobj.nextInt();

        ArrayX aobj = new ArrayX();

        aobj.Accept(iValue1, iValue2);
        //aobj.Display();

        int iRet = aobj.DiffSummation();
        System.out.println("Difference betwwen summation of first and second array is: "+iRet);
    }
}
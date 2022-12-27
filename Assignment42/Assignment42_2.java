import java.util.Scanner;
/*
Write a java program which accept two array from user and 
display minimum element of each array.

Input : N: 6
        2   9   7   5   2   3
        N:  4
        9   3   5   5

Output : 2  3

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

    public void DisplayMinimum()
    {
        int iCnt = 0;
        int iMin1 = 0;
        int iMin2 = 0;

        iMin1 = Arr[0];
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] < iMin1)
            {
                iMin1 = Arr[iCnt];
            }
        }

        iMin2 = Brr[0];
        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            if(Brr[iCnt] < iMin2)
            {
                iMin2 = Brr[iCnt];
            }
        }
        System.out.print("Minimum elements of arrays is: "+iMin1+"\t"+iMin2);
    }
}

class Assignment42_2
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
        aobj.DisplayMinimum();
    }
}
import java.util.Scanner;

/*
Write a java program which accept two arrays from user and
displays even contents of each array

Input : N: 6    
        2   9   6   5   2   3
        N: 6
        45  6   12  18  23  4
Output : 2  6   2
         6  12  18  4

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

    public void Display()
    {
        System.out.println("Elements of first array are:");

        int iCnt = 0;
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+ "\t");
        }
        System.out.println();

        System.out.println("Elements of second array are:");
        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+ "\t");
        }
        System.out.println();
    }

    public void DisplayEvenElement()
    {
        System.out.println("Even element of first array:");
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();

        System.out.println("Even element of second array:");
        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            if(Brr[iCnt] % 2 == 0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }

}


class Assignment41_2
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
        aobj.Display();
        aobj.DisplayEvenElement();
    }
}
import java.util.Scanner;

/*
Write a java program which accept N numbers from user and
accept Range, Display all elements from that range.

Input : N: 6
        Start: 60
        End  : 90
        Elements : 85   66  3   76  93  88
Output : 66  76  88

Input : N: 6
        Start: 30
        End  : 50
        Elements : 85   66  3   76  93  88
Output : 

*/

class Number 
{
    public int Arr[];

    public void Accept(int iSize)
    {
        Arr = new int[iSize];

        Scanner sobj =new Scanner(System.in);

        System.out.println("Enter the "+iSize +" elements:");
        int iCnt = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter "+(iCnt+1)+" element:");
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are:");
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void DisplayRange(int iStart, int iEnd) 
    {
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]>= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}

class Assignment34_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int iLength = sobj.nextInt();

        Number nobj = new Number();

        nobj.Accept(iLength);
        nobj.Display();

        System.out.println("Enter starting number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter ending number:");
        int iNo2 = sobj.nextInt();

        nobj.DisplayRange(iNo1, iNo2);

    }
}

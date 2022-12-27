import java.util.Scanner;

/*
Write a java program which accept N numbers from user and
return product of all odd elements.

Input : N: 6
        Elements : 15   66  3   70  10  88
Output : 45

Input : N: 6
        Elements : 44   66  72   10  70  80
Output : 0

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

    public int OddMultiplication()
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0)
            {
                iMult = iMult * Arr[iCnt];
            }
        }
        return iMult;
    }
}

class Assignment34_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int iLength = sobj.nextInt();

        Number nobj = new Number();

        nobj.Accept(iLength);
        nobj.Display();

        int iRet = nobj.OddMultiplication();
        if(iRet == 1)
        {
            System.out.println("Multiplication of all odd elements is: 0 ");
        }
        else
        { 
            System.out.println("Multiplication of all odd elements is: "+iRet);
        }
       
    }
}


import java.util.Scanner;
/*
Write a java program which accept array from user and
display bewlow pattern

Input : N : 7
        8   9   7   6   4   2   4
Output :    
            *  *   *   *   *   *   *   *
            *  *   *   *   *   *   *   *   *   
            *  *   *   *   *   *   *
            *  *   *   *   *   *
            *  *   *   *
            *  *   
            *  *   *   *
*/

class ArrayX
{
    public int Arr[];

    public void Accept(int iNo1)
    {
        Arr = new int[iNo1];

        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the " +iNo1 +" elements of array:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" Element");
            Arr[iCnt] = sobj.nextInt();
        }

    }
    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of array are:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void Pattern()
    {
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            while(Arr[iCnt] != 0)
            {
                System.out.print("*\t");
                Arr[iCnt]--;
            }
            System.out.println();
        }
    }
}

class Assignment44_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array:");
        int iValue1 = sobj.nextInt();

        ArrayX aobj = new ArrayX();
        aobj.Accept(iValue1);
        aobj.Display();
        aobj.Pattern();
        
    }
}
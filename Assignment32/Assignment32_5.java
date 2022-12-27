
import java.util.Scanner;

/*
Write a java program which accept N numbers from user and 
Display such a elements which are multiples of 11.

Input : N : 6
        Elements : 85   66  55   15  93  88
Output : 66  55  88

 */

 class ArrayX
 {
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        int iCnt = 0 ;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the "+ Arr.length +" element: ");

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" element:");
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        int iCnt = 0;
        System.out.println("Elements of array are : ");

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] +"\t");
        }
        System.out.println("");
    }
 }

 class MarvellousX extends ArrayX
 {
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public void DivisibleEleven()
    {
        int iCnt = 0;
        System.out.println("These numbers are divisible by 11 :");
        
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 11 == 0))
            {
                System.out.print(Arr[iCnt] +"\t");
            }
        }  
    }
 }

 class Assignment32_5
 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many elements u enterd in array:");
        int iNo1 = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iNo1);

        mobj.Accept();
        mobj.Display();

        mobj.DivisibleEleven();
    }
 }

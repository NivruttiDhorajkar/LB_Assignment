import java.util.Scanner;

/*
Write a java program which accept N numbers from user and 
return difference betweeen summation of even elements and summation of odd elements.

Input : N : 6
        Elements : 85   66  3   80  93  88
Output : 53     (234-181)

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

    public int DiffEvenOddElement()
    {
        int iEvenSum = 0;
        int iOddSum = 0;
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
            else
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }
        return iEvenSum - iOddSum;
    }

 }

 class Assignment32_1
 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("How many elements u enterd in array:");
        int iNo1 = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iNo1);

        mobj.Accept();
        mobj.Display();

        int iRet = mobj.DiffEvenOddElement();
        System.out.println("Difference between Summation of even & odd elements is : "+iRet);
    }
 }
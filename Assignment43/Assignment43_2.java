import java.util.Scanner;

/*
Write java program which accept array from user and 
replace each member with summation of its digit.

Input : N : 6
        89  687 56  549 87  9
Output : 17 21  11  18  15  9

*/

class ArrayX
{
    public int Arr[];

    public void Accept(int iNo)
    {
        Arr = new int[iNo];
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the " +iNo +" elements of array:");
        for(iCnt=0; iCnt<iNo; iCnt++)
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

    public void SummationDigit()
    {
        int iCnt = 0;
        int iNo = 0;
        int iSum = 0;
        int iDigit = 0;

        System.out.println("Addition of each element of array are:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            iNo = Arr[iCnt];

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            System.out.print(iSum +"\t");
            iSum = 0;

        }
    }
}

class Assignment43_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter size of array:");
        int iValue = sobj.nextInt();

        ArrayX aobj = new ArrayX();

        aobj.Accept(iValue);
        aobj.Display();
        aobj.SummationDigit();
    }
}
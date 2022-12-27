import java.util.Scanner;

/*
Write a java program which accept N numbers from user and
accept one another number as NO,check wheather NO is present or not. 

Input : N: 6
        NO: 66
        Elements : 85   66  3   66  93  88
Output : True

Input : N: 6
        NO: 12
        Elements : 85   11  3   15  11  111
Output : False

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

    public boolean CheckPresent(int iSearch)
    {
        int iCnt = 0;
        boolean bFlag = false;
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {
                bFlag = true;
                break;
            }
        }
        
        return bFlag;
    }
}

class Assignment34_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int iLength = sobj.nextInt();

        Number nobj = new Number();

        nobj.Accept(iLength);
        nobj.Display();

        System.out.println("Enter your search element:");
        int iNo = sobj.nextInt();

        boolean bRet = nobj.CheckPresent(iNo);
        if(bRet == true)
        {
            System.out.println("Your entered number is present");
        }
        else
        {
            System.out.println("Your entered number is absent");
        }

    }
}
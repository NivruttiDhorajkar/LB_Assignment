import java.util.Scanner;

/*
Write a java program which accept N numbers from user and
accept one another number as NO,
return index of last occurence of that number.

Input : N: 6
        NO: 66
        Elements : 85   66  3   66  93  88
Output : 3

Input : N: 6
        NO: 93
        Elements : 85   11  3   15  93  111
Output : 4

Input : N: 6
        NO: 12
        Elements : 85   11  3   15  93  111
Output : -1

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

    public int LastOccurence(int iSearch)
    {
       int iCnt = 0;
       int iLast = -1;

       for(iCnt=0; iCnt<Arr.length; iCnt++)
       {
            if(Arr[iCnt] == iSearch)
            {
                iLast = iCnt;
            }
       }
       return iLast;
    }
}

class Assignment34_3
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

        int iRet = nobj.LastOccurence(iNo);
        if(iRet == -1)
        {
            System.out.println("Number is absent in the array");
        }
        else
        {
            System.out.println("Last occurence of your entered number is:"+iRet);
   
        }
    }
}

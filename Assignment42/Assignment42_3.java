import java.util.Scanner;
/*
Write a java program which accept two array from user and copy
the contents of that array into another array and return new array.
 
*/

class ArrayX
{
    public char Arr[];
    public char Brr[];
    public char Crr[];

    public void Accept(String str, String str1)
    {
        int iCnt = 0;
        Arr = new char[str.length()];

        for(iCnt=0; iCnt<str.length(); iCnt++)
        {
            Arr[iCnt] = str.charAt(iCnt);
        }

        Brr = new char[str1.length()];

        for(iCnt=0; iCnt<str1.length(); iCnt++)
        {
            Brr[iCnt] = str1.charAt(iCnt);
        }

    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Origial  first string is:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();

        System.out.println("Origial  second string is:");
        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void CreateArray()
    {
        int iCnt = 0;
        int k = 0;
        Crr = new char[Arr.length + Brr.length];

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
           Crr[iCnt] = Arr[iCnt];
        }
        k =iCnt;

        for(iCnt=0; iCnt<Brr.length; iCnt++,k++)
        {
            Crr[k] = Brr[iCnt];
        }

        System.out.println("Third array is:");
        for(iCnt=0; iCnt<Crr.length;iCnt++)
        {
            System.out.print(Crr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void ReverseArray()
    {
        int iStart = 0;
        int iEnd = Crr.length -1;
        int itemp = 0;

        while(iStart < iEnd)
        {
            itemp = iStart;
            iStart = iEnd;
            iEnd = itemp;

            iStart++;
            iEnd--;
        }
        System.out.println("Array in reverse order is:");
        
        for(int iCnt=Crr.length-1; iCnt>=0; iCnt-- )
        {
            System.out.print(Crr[iCnt]+"\t");
        }
    }
}

class Assignment42_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string:");
        String sr = sobj.nextLine();

        System.out.println("Enter second string:");
        String sr1 = sobj.nextLine();

        ArrayX aobj = new ArrayX();
        aobj.Accept(sr,sr1);
        aobj.Display();
        aobj.CreateArray();
        aobj.ReverseArray();
    }
}
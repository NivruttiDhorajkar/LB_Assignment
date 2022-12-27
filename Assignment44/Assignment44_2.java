import java.util.Scanner;

/*
Write a java program which accept array of characters from user and
replace each capital charcter with its corresponding small charcter.

Input : b   N   e   B   R   b   A   i   G   i
Output : B  N   E   B   R   B   A   I   G   I

*/

class ArrayX
{
    public char Arr[];

    public void Accept(String str)
    {
        Arr = new char[str.length()];

        int iCnt = 0;
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = str.charAt(iCnt);
        }

    }

    public void Display()
    {
        System.out.println("Elements of original string is:");
        int iCnt = 0;
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();
    }

    public void DisplaySmallToCapital()
    {
        int iCnt = 0;
        System.out.println("String after small charcter into capital charcter:");

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char) ((int) Arr[iCnt] - 32);
                System.out.print(Arr[iCnt]+"\t");
            }
            else
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}

class Assignment44_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter the string:");
        String sr = sobj.nextLine();

        ArrayX aobj = new ArrayX();

        aobj.Accept(sr);
        aobj.Display();
        aobj.DisplaySmallToCapital();
    }
}
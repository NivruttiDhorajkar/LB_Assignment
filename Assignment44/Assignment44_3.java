import java.util.Scanner;

/*
Write a java program which accept array of characters from user and
accept one charcter. 
Return occurence of that charcter without considering case.

Input : b   N   e   B   R   b   A   i   G   i   B
        b
Output : 4

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

    public int CountOccurence(char ch)
    {
        int iCnt = 0;
        int iCount = 0;
        char ctemp = '\0';

        if(ch >= 'A' && ch<= 'Z')
        {
            ctemp = (char)((int)ch + 32);
        }
        else
        {
            ctemp = (char)((int)ch - 32);
        }

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
           if(Arr[iCnt] == ch || Arr[iCnt] == ctemp)
           {
            iCount++;
           }
        }
        return iCount;
    }

}

class Assignment44_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter the string:");
        String sr = sobj.nextLine();

        ArrayX aobj = new ArrayX();

        aobj.Accept(sr);
        aobj.Display();
        
        System.out.println("Enter the character that have want to occurence:");
        char c = sobj.next().charAt(0);

        int iRet = aobj.CountOccurence(c);
        System.out.println("Occurence of "+c+" is: " +iRet);
    }
}
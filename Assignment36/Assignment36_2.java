import java.util.Scanner;

/*
Write a java program which accept number of rows and number of columns 
from user and display below pattern.

Input : iRow = 4    iCol = 4
Output : 
            A   B   C   D
            a   b   c   d
            A   B   C   D
            a   b   c   d
*/

class Design
{
    public void Dispaly(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        char ch1 = 'A';
        char ch2 = 'a';

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                if((i % 2) == 0)
                {
                    System.out.print((ch2)+"\t");
                    ch2++;   
                }
                else
                {
                    System.out.print((ch1)+"\t");
                    ch1++;
                }
            }
            ch1 = 'A';
            ch2 = 'a';
            System.out.println();
        }
    }
}

class Assignment36_2
{
    public static void main(String a[])
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iNo2 = sobj.nextInt();

        Design dobj =  new Design();
        dobj.Dispaly(iNo1, iNo2);
    }
}


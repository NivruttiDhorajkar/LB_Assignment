import java.util.Scanner;

/*
Write a java program which accept number of rows and number of columns 
from user and display below pattern.

Input : iRow = 3    iCol = 5
Output : 
            A   A   A   A   A
            B   B   B   B   B
            C   C   C   C   C
*/

class Design
{
    public void Dispaly(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        char ch1 = 'A';

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print((ch1)+"\t");
            }
            System.out.println();
            ch1++;
        }
    }
}

class Assignment36_3
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


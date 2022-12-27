
import java.util.Scanner;

/*
Write a java program which accept number of rows and number of columns 
from user and display below pattern.

Input : iRow = 3    iCol = 4
Output : 
            1   1   1   1
            2   2   2   2
            3   3   3   3
            4   4   4   4
*/

class Design
{
    public void Dispaly(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
       
        for(i=1; i<=iCol; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment37_5
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








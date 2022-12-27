import java.util.Scanner;

/*
Write a java program which accept number of rows and number of columns 
from user and display below pattern.

Input : iRow = 4    iCol = 5
Output : 
            4   4   4   4   4
            3   3   3   3   3
            2   2   2   2   2   
            1   1   1   1   1
*/

class Design
{
    public void Dispaly(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
       
        for(i=1; iRow > 0; i++,iRow--)
        {
            for(j=1; j<=iCol; j++)
            {
                System.out.print(iRow+"\t");;
            }
            
            System.out.println();
        }
    }
}

class Assignment36_4
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



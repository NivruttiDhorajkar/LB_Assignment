import java.util.Scanner;

/*
 Write a java program which accept number of rows and columns
 from user and display below pattern.

 Input : Rows: 5    Columns: 5
 Output : 
            1   2   3   4   5
            1   2           5
            1       3       5   
            1           4   5
            1   2   3   4   5

 */

 class Design
 {
    public void DisplayPattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol || i==j)
                {
                    System.out.print(j +"\t");
                }
                else
                {
                    System.out.print("\t");
                }
            }
            System.out.println();
        }
      
    }
 }

 class Assignment40_5
 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter mumber of rows:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iNo2 = sobj.nextInt();

        Design dobj = new Design();

        dobj.DisplayPattern(iNo1, iNo2);
    }
 }

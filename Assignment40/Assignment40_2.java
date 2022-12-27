import java.util.Scanner;

/*
 Write a java program which accept number of rows and columns
 from user and display below pattern.

 Input : Rows: 4    Columns: 4
 Output : 
            *   *   *   #
            *   *   #   @
            *   #   @   @
            #   @   @   @

 */

 class Design
 {
    public void DisplayPattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i=1; i<=iRow; i++)
        {
            for(j=iCol; j>0; j--)
            {
                if(j == i)
                {
                    System.out.print("#\t");
                }
                else if(j >= i)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("@\t");
                }
            }
            System.out.println();
        }
      
    }
 }

 class Assignment40_2
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
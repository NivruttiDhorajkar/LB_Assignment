import java.util.Scanner;

/*
Write a java aprogram which accept array of charcters from user and
replace each capital charcter with its corresponding small charcter.

Input : b   N   j   B   R   b   A   d   G   G
Output : b  n   j   b   r   b   a   d   g   g

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
        int iCnt = 0;
        System.out.println("Elements of original string is:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void DisplayCapitalToSmall()
    {
        int iCnt = 0;
        System.out.println("String after Capital charcter into small character:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char) ((int) Arr[iCnt] + 32);  // type casting integer to charcter.
                System.out.print(Arr[iCnt]+ "\t");
            }
            else
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}




class Assignment44_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the string:");
        String sr = sobj.nextLine();

        ArrayX aobj = new ArrayX();
        aobj.Accept(sr);
        aobj.Display();
        aobj.DisplayCapitalToSmall();
        
    }
}
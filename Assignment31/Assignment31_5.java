import java.util.Scanner;

import javax.swing.Icon;

/*
 Write a java program which accept string from user and 
display string in reverse order.

 Input : MarvellouS
 Output : true

 Input : xyz
 Output : false

 Input : Demo
 Output : true

 */

 class StringDemo
 {
    public void Accept(String Str)
    {
        char Arr[] = str.toCharArray();
    }
    public void Display(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        System.out.println("Elements of array are:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] +"\t");
        }
    }

    public void ReverseX(String str)
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;
        char iTemp = '\0';

        while(iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }  
        System.out.println("");     
    }

    
 }

class Assignment31_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        obj.Display(str);
        obj.ReverseX(str);
        obj.Display(str);
        

        sobj.close();

    }
}


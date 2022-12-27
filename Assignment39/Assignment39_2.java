import java.util.Scanner;

/*
 Write a java program which accept string from user
 and display below pattern.

 Input : Hello
 Output : 
            H   e   l   l   o
            H   e   l   l   *
            H   e   l   *   *
            H   e   *   *   *
            H   *   *   *   *


 */

class Design
{
    public void Display(String ch)
    {
        int i = 0;
        int j = 0;

        char Arr[] = ch.toCharArray();

        for(i=Arr.length-1; i>=0; i--)
        {
            for(j=0; j<Arr.length; j++)
            {
                if(j <= i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }

        // for(i=ch.length()-1; i>=0; i--)
        // {
        //     for(j=0; j<ch.length(); j++)
        //     {
        //         if(j<=i)
        //         {
        //             System.out.print(ch.charAt(j)+"\t");
        //         }
        //         else
        //         {
        //             System.out.print("*\t");
        //         }    
        //     }
        //     System.out.println();
        // }
    }
}

class Assignment39_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        Design dobj = new Design();

        dobj.Display(str);

    }
}




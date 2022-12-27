import java.util.Scanner;

/*
 Write a java program which accept string from user
 and display below pattern.

 Input : Hello
 Output : 
            H   e   l   l   o
            H   e   l   l   
            H   e   l   
            H   e   
            H  
            H   e
            H   e   l 
            H   e   l   l 
            H   e   l   l   o   

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
            for(j=0; j<=i; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }


        for(i=1; i<=Arr.length - 1; i++)
        {
            for(j=0; j<=i; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }


        // for(i=ch.length()-1; i>=0; i--)
        // {
        //     for(j=0; j<=i; j++)
        //     {
        //         System.out.print(ch.charAt(j)+"\t");
        //     }
        //     System.out.println();
        // }

        // for(i=1; i<=ch.length()-1; i++)
        // {
        //     for(j=0; j<=i; j++)
        //     {
        //         System.out.print(ch.charAt(j)+"\t");
        //     }
        //     System.out.println();
        // }
    }
}

class Assignment38_4
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


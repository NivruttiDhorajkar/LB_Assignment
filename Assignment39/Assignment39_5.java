import java.util.Scanner;

/*
 Write a java program which accept string from user
 and display below pattern.

 Input : Hello
 Output : 
            H   #   #   #   #
            H   e   #   #   #
            H   e   l   #   #
            H   e   l   l   #
            H   e   l   l   o
            H   e   l   l   #
            H   e   l   #   #
            H   e   #   #   #
            H   #   #   #   #
 */

class Design
{
    public void Display(String ch)
    {
        int i = 0;
        int j = 0;

        char Arr[] = ch.toCharArray();

        for(i=0; i<=Arr.length-1; i++)
        {
            for(j=0; j<=Arr.length-1; j++)
            {
                if(j <= i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }

        for(i=Arr.length-2; i>=0; i--)
        {
            for(j=0; j<=Arr.length-1; j++)
            {
                if(j <= i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }

        

        // for(i=0; i<=ch.length(); i++)
        // {
        //     for(j=0; j<=ch.length()-1; j++)
        //     {
        //         if(j<=i)
        //         {
        //             System.out.print(ch.charAt(j)+"\t");
        //         }
        //         else
        //         {
        //             System.out.print("#\t");
        //         }    
        //     }
        //     System.out.println();
        // }

        // for(i=ch.length()-1; i>=0; i--)
        // {
        //     for(j=0; j<=ch.length()-1; j++)
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

class Assignment39_5
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






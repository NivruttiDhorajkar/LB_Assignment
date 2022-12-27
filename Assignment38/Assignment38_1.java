import java.util.Scanner;

/*
 Write a java program which accept string from user
 and display below pattern.

 Input : Hello
 Output : 
            H   e   l   l   o
            H   e   l   l   o
            H   e   l   l   o
            H   e   l   l   o
            H   e   l   l   o

 */

class Design
{
    public void Display(String ch)
    {
        char Arr[] = ch.toCharArray();
        int i = 0;
        int j = 0;

        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr.length; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment38_1
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
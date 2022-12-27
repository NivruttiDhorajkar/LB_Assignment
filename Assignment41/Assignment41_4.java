import java.util.Scanner;

/*
Write a java program which accept two arrays from user and
form new array which is combination of contents of first and second array.
Input : N: 4    
        12  57  28  3
        N: 6
        99  23  54  58  6   67
Output : 12  57  28  3  99  23  54  58  6   67

*/

class ArrayX
{
    public int Arr[];
    public int Brr[];
   
    public int i;
    public int j;

    public ArrayX(int iNo1, int iNo2)
    {
        i = iNo1;
        j = iNo2;
    }

    public void Accept()
    {
        Arr = new int[i];
        Brr = new int[j];

        int iCnt = 0;
        int k = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of First array");
        System.out.println("Enter the " +i +" elements of array:");
        for(iCnt=0; iCnt<i; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" Element");
            Arr[iCnt] = sobj.nextInt();
        }        

        System.out.println("Enter the elements of Second array");
        for(iCnt=0; iCnt<j; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" Element");
            Brr[iCnt] = sobj.nextInt();
    
        }
    }

    // public void Display()
    // {
    //     System.out.println("Elements of first array are:");

    //     int iCnt = 0;
    //     for(iCnt=0; iCnt<Arr.length; iCnt++)
    //     {
    //         System.out.print(Arr[iCnt]+ "\t");
    //     }
    //     System.out.println();

    //     System.out.println("Elements of second array are:");
    //     for(iCnt=0; iCnt<Brr.length; iCnt++)
    //     {
    //         System.out.print(Brr[iCnt]+ "\t");
    //     }
    //     System.out.println();
    // }

    public void CombinationArray()
    {
        int iCnt = 0;
        int k = 0;
        int Crr[] = new int[i+j];

        for(iCnt=0; iCnt<i; iCnt++)
        {
            Crr[iCnt] = Arr[iCnt];
        }
        k = iCnt;

        for(iCnt=0; iCnt<j; iCnt++,k++)
        {
            Crr[k] = Brr[iCnt];
        }
        
        System.out.println("Third array is:");
        for(iCnt=0; iCnt<k; iCnt++)
        {
            System.out.print(Crr[iCnt]+"\t");
        }
    } 
}


class Assignment41_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of first array:");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the size of second array:");
        int iValue2 = sobj.nextInt();

        ArrayX aobj = new ArrayX(iValue1, iValue2);

        aobj.Accept();
        //aobj.Display();
        aobj.CombinationArray();
        
    }
}

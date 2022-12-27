import java.util.Scanner;

/*
Write a java program which accept marks of N students from user
and Display class of each student.

Less than 35 - Fail
Less than 50 - Pass class
Less than 60 - Second class
Less than 70 - First class
Greater than 70 - First class with Distinction

Input : N: 5
        67.3    45.8    88.9    77.5    55.2
Output :    
            67.3    First class
            45.8    Pass class
            88.9    First class with Distinction
            77.5    First class with Distinction
            55.2    Second class

*/

class ArrayX
{
    public float Arr[];

    public void Accept(int iNo)
    {
        int iCnt = 0;
        Arr = new float[iNo];

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter tha marks of "+iNo+ " Students:");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter "+(iCnt+1)+" student Marks:");
            Arr[iCnt] = sobj.nextFloat();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] < 35)
            {
                System.out.println(Arr[iCnt]+"\tFail");
            }
            else if((Arr[iCnt]>=35) && (Arr[iCnt] <= 50))
            {
                System.out.println(Arr[iCnt]+"\tPass class");
            }
            else if((Arr[iCnt] > 50) && (Arr[iCnt] <= 60))
            {
                System.out.println(Arr[iCnt]+"\tSecond class");
            }
            else if((Arr[iCnt] > 60) && (Arr[iCnt] <= 70))
            {
                System.out.println(Arr[iCnt]+"\tFirst class");
            }
            else
            {
                System.out.println(Arr[iCnt]+"\tFirst class with Distinction");
            }
        }
    }
}

class Assignment43_5
{
    public static void main(String a[])
    {
        Scanner sobj =  new Scanner(System.in);
        System.out.println("Enter number of students:");
        int iValue1 = sobj.nextInt();

        ArrayX aobj = new ArrayX();
        aobj.Accept(iValue1);
        aobj.Display();

    }
}
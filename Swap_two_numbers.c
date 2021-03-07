//program to swap two numbers without using a temporary variable
#include<stdio.h>
int main()
{
   int num1,num2;                                                 //initialising 
   printf("Enter two numbers :");         
   scanf("%d %d",&num1,&num2);                                    //taking inputs from user
   printf("\nThe numbers entered are %d and %d.",num1,num2);
   num1=num1+num2;                                                // Swapping the numbers
   num2=num1-num2;
   num1=num1-num2;
   printf("\nThe swapped numbers are %d and %d.",num1,num2);      //Output
   return 0;
}

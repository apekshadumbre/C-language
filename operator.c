//  Arithmatic operator

#include<stdio.h>
int main()
{
	int a,b,sum,sub ,multiplication,division;
	printf("Enter the 1st number.");
	scanf("%d",&a);
	
	printf("Enter the second number:");
	scanf("%d",&b);
	
    sum = a + b; 
    
    sub =a-b;
    
    multiplication = a*b;
    
    division = a/b;
    
    
    printf("Summation of two number is: %d\n", sum);
    
    printf("substraction of two number is :%d\n",sub);
    
    printf("multiplication of two number is: %d\n", multiplication);
    printf("division of two number is: %d\n", division);
    
    
    return 0; 

}
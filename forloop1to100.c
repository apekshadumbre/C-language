// for loop example 2
// print number from 1 to 100

#include<stdio.h>
int main()
{
    int i,n;
	printf("Enter the Number where you want to start:");
	scanf("%d",&n);
	
	for(i=n;i<=100;i++)	
	{
		printf("%d\n",i);
	}
	
	
	return 0;
	
}
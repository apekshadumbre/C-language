// for loop example sum of numbers from 1 to 10

#include<stdio.h>
int main()
{
	int i,sum=0;
	
	
	
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		printf(" %d\n",i);
		//sum++;
	}
	printf("Total sum of integer from 1 to 10 is: %d:",sum);
	
	return 0;
}
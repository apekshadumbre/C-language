//sum of respective numbers 
#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		printf(" %d",i);	
		sum=sum+i;
		
		
		//i++;
	}
	printf("\ntotal %d\n ",sum);
	
	return 0;
}
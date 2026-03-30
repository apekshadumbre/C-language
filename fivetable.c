// five table using for loop
#include<stdio.h>
int main()
{
	
	int i=1,n,j;
	
	
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		j=n*i;
		//printf("%d * %d=",n,i);
		printf("%d * %d= %d\n ",n,i,j);
		j++;
	}
	//printf("%d\n",j);
	
	return 0;
	
}
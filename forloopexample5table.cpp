//for loop examples
#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter the Number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
	    int j=i*n;
		printf("%d * %d = %d\n", n,i,j);
	//	j++;
		
	}
	return 0;
}
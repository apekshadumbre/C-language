//print even numbers from  1 to 100
#include<stdio.h>
int main()
{
	int i=1,n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
        // Check if the number is even or odd using the modulo operator (%)
        if (i % 2 == 0) {
            printf("%d is even.\n",i);
        } else {
            printf("%d is odd.\n", i);
        }
	i++;
	}
	
	
	
	return 0;
	
	
}
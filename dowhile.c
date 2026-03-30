//do-while loop

#include<stdio.h>
int main()
{
  int n,i=1;

      printf("Enter the number:");
      scanf("%d",&n);

    do
	{
	   printf("%d\n",i);
	   i++;
	   
    }
    
    while(i<=n);
    {
    //	printf("%d",i);
	}
	
return 0;
}
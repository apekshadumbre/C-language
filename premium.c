
#include<stdio.h>
int main()
{
	int premium=1;
	int amount,purchase;

	printf("Enter the purchase amount:\n");
	scanf("%d",&purchase);
	
	
	if(purchase>=5000 && premium==1)
	{
		printf("discount applicable\n");
		printf("order confirmed!!\n");
	}
	
	
	else
	{
		printf("Discount not applicable\n");
		printf("orderd cacelled !!!!!!!!!!!\n");
	}
	return 0;
}


  
  
  
  
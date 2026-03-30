#include<stdio.h>
int main()
{
	int salary,exp;
	char name [20] ;
	
	printf("Enter the name:");
	scanf("%s",&name);
	
	printf("Enter the Experience:");
	scanf("%d",&exp);
	
	printf("enter the salary:");
	scanf("%d",&salary);

  if(salary>=5000 && exp==5)
  {
  	printf("20% tax deduction");
  	
  }	
  else if(salary>=2000 && exp==2)
  {
  	printf("10% tax deduction");
  }
  
  else
  
  {
  	printf("No Tax!!!!!!!!!!!");
  }
}
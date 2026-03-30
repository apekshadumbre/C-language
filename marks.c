#include<stdio.h>

int main()
{
	
	int marks;
	
	printf("Enter the marks :");
	scanf("%d",&marks);
	
	if(marks>=90)
	  {
	  
	   
	    printf("Grade obtained:  A+");
	  }
	
	else if(marks>=70 && marks<=80)
	  {
	    printf("Grade obtained: B ");
	  }
	
	else if(marks>=50 && marks<=70)
	  {
	    printf("Grade obtained: C");
      }
	 
	else if (marks==35)
	  {
	
	    printf("pass ");
	  }
	
	else
	 {
	
     	printf("fail!!!!!!!!");
     }
	
	return 0;
	
}
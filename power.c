#include<stdio.h>  
int main()    
{    
 int i,a,b;
 int power=1,count=1;
 count=count+5; 
 printf("Enter value of a and b: ");    
  scanf("%d%d",&a,&b); 
    count=count+2;
    for(i=1;i<=b;i++)
	{    
      power=power*a;    
    }    
  count=count+3+(3*b);
  printf("power of %d and %d is: %d\n",a,b,power);  
  count=count+3;  
 printf("Number of program steps =%d",count);  
return 0;  
}   

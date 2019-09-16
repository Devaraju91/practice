#include<stdio.h>  
 void addnum()
 {
  
int n,sum=0,m;    
printf("\n\nEnter a number to add:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
//return 0;  
}  

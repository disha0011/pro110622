#include<stdio.h>

int main()
{
    int i=1,k=2;
  
  while(i<=5)
 {  
    int j=1;  
    while(j<=5)
    {
       printf("%d\t",k);   
       j++;    
   }
k+=2;
i++;
printf("\n");
 } 
}
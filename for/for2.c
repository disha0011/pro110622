#include<stdio.h>
#include<conio.h>

int main()
{
      int i,j;
      for(i=1;i<=50;i++)
      {
        
    if(i%2!=0)
       {
      printf("%d\t",i);   
       }
 
       else{
        j=i*i;
        printf("%d\t",j);   
       }
 }
   return 0;
}
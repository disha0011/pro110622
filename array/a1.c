#include<stdio.h>

int main()
{
   int a[10],i,sum=0,esum=0,s=0,e=0;
  for(i=0;i<10;i++)
       {
       printf("enter a[%d]:",i);
       scanf(" %d",&a[i]);
       }

 for(i=0;i<10;i++)
{
       if(a[i]%2==0){
            sum+=a[i];
         }
       else if(a[i]%2!=0){
              esum+=a[i];
         }
 }
printf("\nodd sum: %d",sum);
printf("\neven sum: %d",esum);

for(i=0;i<10;i++)
{
       if(i%2==0){
       s+=i;
         }
       else if(i%2!=0){
        e+=i;
         }
 }
printf("\noddy sum: %d",s);
printf("\neveny sum: %d",e);
printf("\ntotal: %d",s+e);
}
 
 
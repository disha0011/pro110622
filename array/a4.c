#include<stdio.h>

int main()
{
   int i,j,a[3][3],usum=0,dsum=0,lsum=0;
  for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
{
    printf("enter a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
}
 }

printf("\nmatrix a:\n");
for(i=0;i<3;i++)
{ 
       for(j=0;j<3;j++)
{
      printf("%d\t",a[i][j]);
}
printf("\n");
}

for(i=0;i<3;i++)
{  
 for(j=0;j<3;j++)
{
if(i<j)
{
  usum+=a[i][j];
// printf("%d\t",a[i][j]);
}
}
}
printf("upper sum: %d\n",usum);



for(i=0;i<3;i++)
{  
 for(j=0;j<3;j++)
{
if(i>j)
{
  lsum+=a[i][j];
// printf("%d\t",a[i][j]);
}
}
}
printf("lower sum: %d\n",lsum);


for(i=0;i<3;i++)
{  
 for(j=0;j<3;j++)
{
if(i==j)
{
  dsum+=a[i][j];
 //printf("%d\t",a[i][j]);
}
}
}
printf("diagonal: %d",dsum);
}
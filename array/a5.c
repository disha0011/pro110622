#include<stdio.h>

int main()
{
   int i,j,k,a[3][3][3];
  for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
{
   for(k=0;k<3;k++)
{
    printf("enter a[%d][%d][%d]:",i,j,k);
    scanf("%d",&a[i][j][k]);
}
}
 }

 for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
{
   for(k=0;k<3;k++)
{
    printf("\t%d",a[i][j][k]);
   }
}
printf("\n");
 }
printf("\n");
 }
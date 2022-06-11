#include<stdio.h>

int main()
{
   int i,j,a[3][3],b[3][3],sum[3][3];
  for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
{
    printf("enter a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
}
 }

for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
{
    printf("enter b[%d][%d]:",i,j);
    scanf("%d",&b[i][j]);
}
 }


printf("\nmatrix a: \t\t\tmatrix b: \t\t\tmatrix sum:\n");
for(i=0;i<3;i++)
{
      for(j=0;j<3;j++)
{
    printf("%d\t",a[i][j]);
 }

printf("\t");

      for(j=0;j<3;j++)
{
    printf("%d\t",b[i][j]);
 }
printf("\t");
 for(j=0;j<3;j++)
{
     sum[i][j]=a[i][j]+b[i][j];
    printf("%d\t",sum[i][j]);
 }
printf("\n");
 }
}
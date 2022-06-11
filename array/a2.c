#include<stdio.h>

int main()
{
   int i,m1[5],m2[5],m3[5],total[5],rno[5];
   float per[5];

    for(i=0;i<5;i++)
{  
  printf("\nenter rollno:",i);
  scanf("%d",&rno[i]);
  printf("enter guj:",i);
  scanf("%d",&m1[i]);
 printf("enter eng:",i);
  scanf("%d",&m2[i]);
 printf("enter sci:",i);
  scanf("%d",&m3[i]);
 }
 printf("rno \tguj \teng \tsci \ttotal \tper \tgrade \tresult");
for(i=0;i<5;i++)
{ 
   total[i]=m1[i]+m2[i]+m3[i];
  per[i]=total[i]/3;
   printf("\n%d \t%d \t%d \t%d \t%d \t%.2f ",rno[i],m1[i],m2[i],m3[i],total[i],per[i]); 


if(per[i]>=80)
{
  printf("\tA");
}
else if(per[i]>=60)
{
  printf("\tB");
}
else if(per[i]>=40)
{
  printf("\tC");
}
else
{
   printf("\tD");
}

if(total[i]>=150)
{
  printf("\tpass");
}
else
{
   printf("\tfail");
}
}
}
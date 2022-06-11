#include<stdio.h>
#include<conio.h>

int main()
{
      int a,b;
      for(a=1;a<=26;a++)
      {    
  if(a%2!=0)
  {
  printf("\t%c",a+64+32); 
  }   
 else{
 
 }
  a=a+64;
  printf("\t%c",a+2);   
}
  return 0;
}
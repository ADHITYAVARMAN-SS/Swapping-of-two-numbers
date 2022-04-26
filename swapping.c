#include<stdio.h>

int main()
{
  int a,b;
  
  printf("a=");
  scanf("%d",&a);
  
  printf("b=");
  scanf("%d",&b);
  
  printf("before swapping a=%d b=%d",a,b);
  
  a = a + b;
  b = a - b;
  a = a - b;
  printf("after swapping a = %d b = %d",a,b);
         
}


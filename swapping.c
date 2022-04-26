#include<stdio.h>

int main()
{
  int a=100,b=200;
  
  printf("before swapping a=%d b=%d",a,b);
  
  a = a + b;
  b = a - b;
  a = a - b;
  printf("after swapping a = %d b = %d",a,b);
         
}


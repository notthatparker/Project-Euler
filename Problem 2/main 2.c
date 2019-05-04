#include <stdio.h>
 
int main()
{
  int n, first = 1, second = 2;
  printf("%d ",first);
  printf("%d ",second);
  while(n<1000000){
    n=first+second;
  printf("%d ",n);
  first=second;
  second=n;
  }
  
}
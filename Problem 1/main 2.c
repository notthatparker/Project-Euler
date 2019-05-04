#include <stdio.h>

int main(void) {
  int sum=0;
  int spare=0;
  for(int i=0;i<1000;i++){
    if((i%3==0)||(i%5==0)){
      sum=sum+i;
    }
  }
  printf( "sum of all the multiples of 3 or 5 below 1000.\n");
  printf("_____________________\n");
  printf("Answer: %d",sum);
 
}
#include <stdio.h>

int main(void) {
  int check=0,is=0;
   printf("input: ");
  scanf("%d",&check);
  for(int i=1;i<=check;i++){
    if(check%i==0){
      is++;
    }
   
  }
   if(is>2){
      printf("not prime\n");
    }
    else { printf("prime\n");}
}
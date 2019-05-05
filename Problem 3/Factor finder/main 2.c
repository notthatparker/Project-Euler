#include <stdio.h>

int main(void) {
 int numb=0;
 int check=0;
 int ast[]={};
printf("please enter a number ");
scanf("%d",&numb);
for(int i=1;i<=numb;i++){
  if(numb%i==0){
    printf("%d\n",i);
    check++;
  
    }
}
}
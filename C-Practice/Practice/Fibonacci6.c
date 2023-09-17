#include<stdio.h>
int main(){
  int first = 0, second = 1;
  printf("%d\n",first);
  printf("%d\n",second);
  int i,y;
  for(i=1;i<5;i++){
    y = first+second;
    printf("%d\n",y);
    first = second;
    second = y;
  }
  return 0;
}

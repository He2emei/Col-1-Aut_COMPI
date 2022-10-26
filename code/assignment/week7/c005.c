#include<stdio.h>
int x;
int main(){
  scanf("%d",&x);
  x=x/100;
  x=x%10000;
  printf("%d %d",x,x+1024);
  return 0;
}
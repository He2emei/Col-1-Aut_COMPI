#include<stdio.h>
int x,h,m,s;
int main(){
    scanf("%d",&x);
    s=x%60;
    x/=60;
    m=x%60;
    x/=60;
    h=x;
    printf("%d:%.2d:%.2d\n",h,m,s);
    return 0;
}
#include<stdio.h>
int a,b,x,ans;
int main(){
    scanf("%d%d",&a,&b);
    x=a*a+b*b;
    if(x>=100){
        ans=x/100;
    }
    else{
        ans=x;
    }
    printf("%d",ans);
    return 0;
}
#include<stdio.h>
int x,ans;

int main(){
    scanf("%d",&x);
    if(x<=100000){
        ans=x/10;
    }
    else if(x<=200000){
        ans=(x-100000)*8/100+10000;
    }
    else if(x<=400000){
        ans=(x-200000)/20+18000;
    }
    else if(x<=600000){
        ans=(x-400000)*3/100+28000;
    }
    else if(x<=1000000){
        ans=(x-600000)/50+34000;
    }
    else{
        ans=(x-1000000)/100+42000;
    }
    printf("%d",ans);
    return 0;
}
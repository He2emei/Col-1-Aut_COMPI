#include<stdio.h>
#include<stdbool.h>

int lst[10];

bool ispalindrome(int n){
    int t=n,cnt=0;
    while(t){
        lst[++cnt]=t%10;
        t/=10;
    }
    for(int i=1;i<=(cnt+1)/2;i++){
        if(lst[i]!=lst[cnt+1-i]) return false;
    }
    return true;
}

int main(){
    int ipt=0;
    scanf("%d",&ipt);
    bool vis=false;
    for(int i=1000;i<=ipt;i++){
        if(ispalindrome(i)){
            if(vis) printf(" ");
            printf("%d",i);
            vis=true;
        }
    }
    return 0;
}
#include<stdio.h>
int ipt;
int main(){
    scanf("%d",&ipt);
    int ans=0;
    while(ipt){
        ans+=(ipt%10)*(ipt%10);
        ipt/=10;
    }
    printf("%d",ans);
    return 0;
}
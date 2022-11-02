#include<stdio.h>
int ipt[1007],t,ans,cur;
int main(){
    while(1){
        scanf("%d",&ipt[++t]);
        if(!ipt[t]) break;
        if(ipt[t]>=cur){
            ans+=(ipt[t]-cur)*6+5;
        }
        else{
            ans+=(cur-ipt[t])*4+5;
        }
        cur=ipt[t];
    }
    printf("%d",ans);
    return 0;
}
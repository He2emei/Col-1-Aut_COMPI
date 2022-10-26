#include<stdio.h>
#include<stdbool.h>
int cnt[10],ipt;
int main(){
    while(1){
        scanf("%d",&ipt);
        if(ipt==-1) break;
        cnt[ipt]+=1;
    }
    bool vis=false;
    for(int i=0;i<=4;i++){
        if(vis) printf(" ");
        printf("%d",cnt[i]);
        vis=true;
    }
    return 0;
}
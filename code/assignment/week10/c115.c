#include<stdio.h>

int ipt,cnt[17];

int main(){
    while(1){
        scanf("%d",&ipt);
        if(ipt==-1) break;
        if(ipt>3||ipt<1) cnt[4]++;
        else cnt[ipt]++;
    }
    int vis=0;
    for(int i=1;i<=4;i++){
        if(vis) printf(" ");
        printf("%d",cnt[i]);
        vis=1;
    }
    printf("\n");
    return 0;
}
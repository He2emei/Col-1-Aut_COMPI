#include<stdio.h>
#include<stdbool.h>
int ipt;
int main(){
    scanf("%d",&ipt);
    for(int i=1;i<=ipt/2;i++){
        int t=0;
        for(int j=i;t<=ipt;j++){
            t+=j;
            if(t==ipt){
                bool vis=false;
                printf("%d=",ipt);
                for(int k=i;k<=j;k++){
                    if(vis){
                        printf("+");
                    }
                    printf("%d",k);
                    vis=true;
                }
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
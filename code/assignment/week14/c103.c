#include<stdio.h>
int n,k,t=-1;
int cnt,tmp;
int vis[10007];
int main(){
    scanf("%d%d",&n,&k); cnt=n;
    while(cnt!=1){
        tmp=k;
        while(tmp){
            t=(t+1)%n;
            if(vis[t]){
                continue;
            }
            tmp--; 
        }
        vis[t]=1; cnt--;
        //printf("%d ",t);
    }
    //printf("\n");
    for(int i=0;i<n;i++){
        //printf("%d ",vis[i]);
        if(!vis[i]){
            printf("%d",i+1);
            //break;
        }
    }
    return 0;
}
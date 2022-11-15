#include<stdio.h>
int n,lft,vis[6007];
int main(){
    scanf("%d",&n); lft=n;
    while(lft>3){
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(vis[i]){
                continue;
            }
            cnt++;
            if(cnt==2){
                vis[i]=1;
                cnt=0;
            }
        }
        lft=lft-lft/2;
        if(lft<=3) break;
        cnt=0;
        for(int i=1;i<=n;i++){
            if(vis[i]){
                continue;
            }
            cnt++;
            if(cnt==3){
                vis[i]=1;
                cnt=0;
            }
        }
        lft=lft-lft/3;
    }
    int _vis=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(_vis) printf(" ");
            printf("%d",i);
            _vis=1;
        }
    }
    return 0;
}
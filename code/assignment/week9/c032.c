#include<stdio.h>
#include<stdbool.h>

int m,n;

int main(){
    scanf("%d%d",&m,&n);
    bool vis=false,exi=false;
    for(int i=m;i<=n;i++){
        int t=i,sum=0;
        while(t){
            sum+=(t%10)*(t%10)*(t%10);
            t/=10;
        }
        if(sum==i){
            if(vis) printf(" ");
            printf("%d",i);
            vis=true;
            exi=true;
        }
    }
    if(!exi) printf("-1");
    return 0;
}
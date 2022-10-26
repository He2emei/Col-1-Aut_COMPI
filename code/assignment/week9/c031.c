#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int n,tm;

int main(){
    scanf("%d%d",&n,&tm);
    int ans=0;
    int vis=false;
    for(int i=1;i<=tm;i++){
        ans+=(tm+1-i)*pow(10,i-1)*n;
        if(vis){
            printf("+");
        }
        for(int j=1;j<=i;j++){
            printf("%d",n);
        }
        vis=true;
    }
    printf("=%d",ans);
    return 0;
}
#include<stdio.h>
int m,n;
int ans;
int judge(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main(){
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n-2;i++){
        if(judge(i)&&judge(i+2)){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
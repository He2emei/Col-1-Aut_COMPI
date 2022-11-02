#include<stdio.h>
int n;

int main(){
    scanf("%d",&n);
    double t=100,ans=100;
    for(int i=2;i<=n;i++){
        ans+=t;
        t/=2;
    }
    printf("%lf\n%lf",ans,t/2);
    return 0;
}
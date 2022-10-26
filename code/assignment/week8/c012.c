#include<stdio.h>
#include<math.h>
double ans;
int ipt;
int main(){
    scanf("%d",&ipt);
    for(int i=1;i<=ipt;i++){
        double t=1.0/(i*2-1)*pow(-1,i-1);
        ans+=t;
    }
    printf("%lf",ans);
    return 0;
}
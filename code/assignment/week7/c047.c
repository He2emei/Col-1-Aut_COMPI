#include<stdio.h>
#include<math.h>
double m,y,r,ans;
int main(){
    scanf("%lf,%lf,%lf",&m,&y,&r);
    ans=m*pow(r+1,y);
    printf("%.2lf",ans);
    return 0;
}
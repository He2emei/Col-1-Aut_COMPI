#include<stdio.h>
int n,ans=1,t=0;
int ipt[57],_min=998244353;
int judge(int x){
    for(int i=1;ipt[i];i++){
        if(ipt[i]%x) return 0;
    }
    return 1;
}
int getmin(int a,int b){
    if(a>b) return b;
    return a;
}
int main(){
    int x=_min;
    while(x){
        _min=getmin(_min,x);
        scanf("%d",&x);
        ipt[++t]=x;
    }
    for(int i=2;i<=_min;i++){
        while(judge(i)){
            for(int j=1;ipt[j];j++){
                ipt[j]/=i;
            }
            ans*=i;
        }
    }
    printf("%d\n",ans);
    int vis=0;
    for(int i=1;ipt[i];i++){
        if(vis) printf(" ");
        printf("%d",ans*ipt[i]);
        vis=1;
    }
    return 0;
}
#include<stdio.h>
int ipa,ipb,opa,opb,a,b;
int mypow(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans*=10;
    }
    return ans;
}
int exc(int x){
    int neg=0;
    if(x<0){
        neg=1;
        x=-x;
    }
    int a[10],t=0;
    while(x){
        a[++t]=x%10;
        x/=10;
    }
    for(int i=1;i<=t/2;i++){
        int c=a[i];
        a[i]=a[1+t-i];
        a[1+t-i]=c;
    }
    int ans=0;
    for(int i=1;i<=t;i++){
        ans+=mypow(i-1)*a[i];
    }
    if(neg) ans=-ans;
    return ans;
}
int main(){
    scanf("%d%d",&ipa,&ipb);
    a=(ipa+ipb)/2;
    b=(ipa-ipb)/2;
    opa=exc(a); opb=exc(b);
    printf("%d %d",opa+opb,opa-opb);
    return 0;
}
#include<stdio.h>
int n,m;
int ack(int a,int b){
    if(!a) return b+1;
    if(!b) return ack(a-1,1);
    return ack(a-1,ack(a,b-1));
}

int main(){
    scanf("%d%d",&m,&n);
    int ans=ack(m,n);
    printf("ack(%d,%d)=%d",m,n,ans);
    return 0;
}
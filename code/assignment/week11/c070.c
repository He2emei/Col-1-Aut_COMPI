#include<stdio.h>
int an,bn,_max;
int a[1007],b[1007],ans[1007];
int getmax(int x,int y){
    if(x>y) return x;
    return y;
}
int main(){
    scanf("%d",&an);
    for(int i=1;i<=an;i++){
        scanf("%d",&a[i]);
        ans[a[i]]=1;
        _max=getmax(_max,a[i]);
    }
    scanf("%d",&bn);
    int vis=0;
    for(int i=1;i<=bn;i++){
        scanf("%d",&b[i]);
        if(ans[b[i]]){
            if(vis) printf(" ");
            printf("%d",b[i]);
            vis=1;
        }
    }
    return 0;
}
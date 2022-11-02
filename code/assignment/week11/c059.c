#include<stdio.h>
int ipt[10007];
int main(){ 
    int n,m,vis=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&ipt[i]);
    }
    for(int i=0;i<n;i++){
        int x=(i+m)%n;
        if(vis) printf(" ");
        printf("%d",ipt[x]);
        vis=1;
    }
    return 0;
}
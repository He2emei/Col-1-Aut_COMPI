#include<stdio.h>
int n,ipt,visa[1007],visb[1007],_max;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ipt);
        visa[ipt]++;
        if(ipt>_max) _max=ipt;
    }
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ipt);
        visb[ipt]++;
        if(ipt>_max) _max=ipt;
    }
    int vis=0;
    for(int i=0;i<=_max;i++){
        if((!visa[i])&&visb[i]){
            for(int j=1;j<=visb[i];j++){
                if(vis) printf(" ");
                printf("%d",i);
                vis=1;
            }
        }
        if((!visb[i])&&visa[i]){
            for(int j=1;j<=visa[i];j++){
                if(vis) printf(" ");
                printf("%d",i);
                vis=1;
            }
        }
    }
    return 0;
}
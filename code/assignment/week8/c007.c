#include<stdio.h>
#include<stdbool.h>
int m,n;
bool chk(int ori,int num){
    int t=1,tmp=ori;
    while(tmp){
        t*=10;
        tmp/=10;
    }
    return num%t==ori;
}
int main(){
    scanf("%d%d",&m,&n);
    bool vis=false;
    for(int i=m;i<=n;i++){
        if(chk(i,i*i)){
            if(vis) printf(" "); 
            printf("%d",i);
            vis=true;
        }
    }
    return 0;
}
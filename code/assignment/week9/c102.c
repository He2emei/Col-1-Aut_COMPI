#include<stdio.h>

int ipt,n;

int main(){
    scanf("%d",&n);
    int _max=0,cnt=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&ipt);
        if(_max<ipt){
            _max=ipt;
            cnt=1;
        }
        else if(_max==ipt){
            cnt+=1;
        }
    }
    printf("%d,%d",_max,cnt);
    return 0;
}
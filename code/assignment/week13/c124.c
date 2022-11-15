#include<stdio.h>
struct tst{
    char nm[107];
    int num,a,b,c,sum;
}ipt[10007];
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%s%d%d%d",&ipt[i].num,ipt[i].nm,&ipt[i].a,&ipt[i].b,&ipt[i].c);
        ipt[i].sum=ipt[i].a+ipt[i].b+ipt[i].c;
        for(int j=i-1;j>0;j--){
            if(ipt[j].sum<=ipt[j+1].sum){
                break;
            }
            struct tst x;
            x=ipt[j+1];
            ipt[j+1]=ipt[j];
            ipt[j]=x;
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d %s %d %d %d %d\n",ipt[i].num,ipt[i].nm,ipt[i].a,ipt[i].b,ipt[i].c,ipt[i].sum);
    }
    return 0;
}
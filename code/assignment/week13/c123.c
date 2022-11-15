#include<stdio.h>
#include<string.h>
struct peo{
    char nm[108];
    int num;
}ipt[1007];
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s%d",ipt[i].nm,&ipt[i].num);
        for(int j=i-1;j>0;j--){
            if(strcmp(ipt[j+1].nm,ipt[j].nm)>=0){
                break;
            }
            struct peo a=ipt[j+1];
            ipt[j+1]=ipt[j];
            ipt[j]=a;
        }
    }
    for(int i=1;i<=n;i++){
        printf("%s %d\n",ipt[i].nm,ipt[i].num);
    }
    return 0;
}
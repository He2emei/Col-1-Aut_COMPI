#include<stdio.h>
double all,one;
int ans;
int main(){
    scanf("%lf%lf",&one,&all);
    for(int i=1;all>0 ;i++){
        if(all>one*i){
            all-=one*i;
            ans+=i+1;
        }
        else{
            while(all>0){
                all-=one; ans+=1;
            }
            break;
        }
    }
    printf("%d",ans);
    return 0;
}
#include<stdio.h>
#include<math.h>
int m,n,t;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=m;i*i+(i+1)*(i+1)<=n*n;i++){
        for(int j=i+1;i*i+j*j<=n*n;j++){
            double c=sqrt(i*i+j*j);
            if(c==floor(c+0.5)){
                t++;
            }
        }
    }
    printf("%d",t);
    return 0;
}
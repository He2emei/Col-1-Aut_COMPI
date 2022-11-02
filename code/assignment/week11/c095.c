// #include<stdio.h>
// int n,ipt[67],ans,pos;
// int getmax(int a,int b){
//     if(a>b) return a;
//     return b;
// }
// int main(){
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&ipt[i]);
//     }
//     int t=0;
//     for(int i=0;i<n;i+=1){
//         for(t=1;t+i<n;t++){
//             if(ipt[t+i]!=ipt[i]) break;
//         }
//         if(t>ans){
//             ans=t;
//             pos=i;
//         }
//     }
//     if(ans<2){
//         printf("NO");
//         return 0;
//     }
//     printf("%d,%d",pos,pos+ans-1);
//     return 0;
// }
#include<stdio.h>
int n,ipt[57];
int ans[57];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&ipt[i]);
    }
    ans[0]=1;
    for(int i=1;i<n;i++){
        if(ipt[i]!=ipt[i-1]) ans[i]=1;
        else{
            ans[i]=ans[i-1]+1;
        }
    }
    int opt=0;
    for(int i=0;i<n;i++){
        if(ans[i]>ans[opt]) opt=i;
    }
    if(ans[opt]<2){
        printf("NO");
        return 0;
    }
    printf("%d,%d",opt-ans[opt]+1,opt);
    return 0;
}
#include<stdio.h>
char tab[17][17]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char ipt[17];
int main(){
    scanf("%s",ipt);
    int vis=0;
    for(int i=0;ipt[i];i++){
        if(vis) printf(" ");
        printf("%s",tab[(int)(ipt[i]-'0')]);
        vis=1;
    }
    return 0;
}
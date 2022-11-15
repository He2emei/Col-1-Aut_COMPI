#include<stdio.h>
char ipt[107];
int vis,num[107],cnt,ovis,sum;
int main(){
  gets(ipt);
  for(int i=0;ipt[i];i++){
    if(ipt[i]>='0'&&ipt[i]<='9'){
      cnt++;
      int j;
      for(j=0;ipt[i+j]>='0'&&ipt[i+j]<='9';j++){
        num[cnt]=num[cnt]*10+(int)(ipt[i+j]-'0');
      }
      i+=j;
    }
  }
  if(!cnt){
    printf("NO");
    return 0;
  }
  for(int i=1;i<=cnt;i++){
    if(ovis) printf(" ");
    ovis=1;
    printf("%d",num[i]);
    sum+=num[i];
  }
  printf("\n%d",sum);
  return 0;
}
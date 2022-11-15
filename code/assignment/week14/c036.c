#include<stdio.h>
int ipt,base;
int num[107],cnt;
int main(){
  scanf("%d%d",&ipt,&base);
  if(!ipt){
    printf("%d",0);
    return 0;
  }
  while(ipt){
	num[++cnt]=ipt%base;
    ipt/=base;
  }
  for(int i=cnt;i>0;i--){
    if(num[i]<10){
      printf("%c",'0'+num[i]);
    }
    else{
      printf("%c",'A'+(num[i]-10));
    }
  }
  return 0;
}
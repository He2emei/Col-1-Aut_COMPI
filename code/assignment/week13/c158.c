#include<stdio.h>
char ipt[107];
int cnt[307];
int main(){
  gets(ipt);
  for(int i=0;ipt[i];i++){
    if(i%2==0){
      cnt[(int)ipt[i]]++;
    }
  }
  for(int i=0;ipt[i];i++){
    if(i%2){
      printf("%c",ipt[i]);
    }
    else{
      for(int j=0;j<=255;j++){
		if(cnt[j]){
          cnt[j]--;
          printf("%c",(char)j);
          break;
        }
      }
    }
  }
  return 0;
}
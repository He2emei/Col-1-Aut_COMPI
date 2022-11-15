#include<stdio.h>
int n;
char ipt[10007];
struct Stu{
  char id[107];
  int bgn,end;
}via[107];
int bgn,end;
int main(){
  scanf("%d",&n);
  via[0].bgn=192000;
  gets(ipt);
  for(int i=1;i<=n;i++){
    gets(ipt);
    int cnt=-1;
    while(ipt[cnt+1]!=' '){
      cnt++;
      via[i].id[cnt]=ipt[cnt];
    }
    cnt++;
    via[i].bgn=3600*(10*(int)(ipt[cnt+1]-'0')+(int)(ipt[cnt+2]-'0'))+60*(10*(int)(ipt[cnt+4]-'0')+(int)(ipt[cnt+5]-'0'))+10*(int)(ipt[cnt+7]-'0')+(int)(ipt[cnt+8]-'0');
    cnt+=9;
    via[i].end=3600*(10*(int)(ipt[cnt+1]-'0')+(int)(ipt[cnt+2]-'0'))+60*(10*(int)(ipt[cnt+4]-'0')+(int)(ipt[cnt+5]-'0'))+10*(int)(ipt[cnt+7]-'0')+(int)(ipt[cnt+8]-'0');
    //if(!via[i].end) via[i].end=86400;
    //printf("\n%s %d %d\n",via[i].id,via[i].bgn,via[i].end);
    if(via[i].bgn<via[bgn].bgn) bgn=i;
    if(via[i].end>via[end].end) end=i;
  }
  printf("%s %s",via[bgn].id,via[end].id);
  return 0;
}
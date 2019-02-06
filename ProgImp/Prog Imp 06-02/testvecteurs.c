#include <stdio.h>

void remplirv(int n, int vec[100]){
  int i,
    if(n>=100){
      for(i=0;i<100;i=i+1)
	vec[i]=0;
      return;
    }
  crt=1;
  pre=1;
  vec[0]=pre;
  vec[1]=crt;
  for(i=2;i<=n;i=i+1){
    new=(pre+crt)%23;
    vec[i]=new;
    pre=crt;
    crt=new;
  }
}

int plgdv(int n, int vec[100])
{
    

int main(){
  int v[100],n;
  n=10;
  remplirv(n,v);
  printf("le plus grand est %d \n",plgdv(n,v));

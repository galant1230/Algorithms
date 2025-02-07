#include<stdio.h>
int eular(int n){
  int res=n;
  int i;
  for(i=2;i<n;i++){
    if(n%i==0){
        res=res/i*(i-1);//res=res*((i-1)/i)=>res=res*(1-(1/i));
    }
        while(n%i==0){
          n/=i;
        }
   }
   if(n>1){
      res=res/n*(n-1);
   }
   return res;
 }

int main(){
    int n=0,count=1,time=0;
    scanf("%d",&time);
    while(time){
     n=0;
     scanf("%d",&n);
     printf("%d\n",eular(n));
     time--;
    }
}

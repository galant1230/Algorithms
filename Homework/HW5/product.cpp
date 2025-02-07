#include<stdio.h>
int main(){
int i,n,j,time;
    scanf("%d",&time);
    int res[50];
    while(time--){ 
    j=0;
    scanf("%d",&n);
    if (n < 10) 
    { 
        printf("%d", n);
    }else{ 
      for (i=9; i>1; i--) 
      { 
          while (n%i == 0) 
          { 
            n = n/i; 
            res[j] = i; 
            j++; 
          } 
      } 
      if (n > 10) 
      { 
         printf("%d",-1); 
      }else{
        for (i=j-1; i>=0; i--) 
        { 
          printf("%d", res[i]); 
        }
      }
    }
    printf("\n");
   }
}

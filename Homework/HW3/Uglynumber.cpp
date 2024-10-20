// CPP program to find nth ugly number 
# include<stdio.h> 
# include<stdlib.h> 
/*This function divides a by greatest divisible power of b*/
int maxDivide(int a, int b) 
{ 
  while (a%b == 0) 
   a = a/b;  
  return a; 
}     
/* Function to check if a number is ugly or not */
int isUgly(int no) 
{ 
  no = maxDivide(no, 2); 
  no = maxDivide(no, 3); 
  no = maxDivide(no, 5); 
  return (no == 1)? 1 : 0; 
}     
/* Function to get the nth ugly number*/
int getNthUglyNo(int no) 
{ 
  int i = 1;  
  int count = 1;   /* ugly number count */ 
  
  /*Check for all integers untill ugly count  
    becomes n*/ 
  while (no > count) 
  { 
    i++;       
    if (isUgly(i)) 
      count++;  
  } 
  return i; 
} 
  
/* Driver program to test above functions */
int main() 
{   
   int time=0,t;
   scanf("%d",&time);
   while(time){
    scanf("%d",&t);
    unsigned no = getNthUglyNo(t); 
    printf("%d\n",no); 
    time--;
   }
} 

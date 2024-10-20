#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, num,j=0;
	scanf("%d",&num);
	printf("%d=",num);
	
	while(num>0)
	{
		for(i=2;i<=num;i++)
		{
			while(num%i==0)         //對num進行分解質因數，應先找到一個最小的質數i
			{                       //如果num>i，但num能被i整除，則應印出i的值，並用num除以i的商，作為新的正整數num，重複執行
				num=num/i;
				j++;                //用來判斷進行幾次此步驟 
			}                       
			if(j>1&&num!=1)
				printf("%d^%d*",i,j);  //若是重複此動作一次以上，且最後除完結果不為1 ，我們能判斷是平方數與剩下的商相乘 
			else if(j==1&&num!=1)
				printf("%d*",i);
			else if(j==1&&num==1)      //若是質數則直接印出自己 
				printf("%d",i);
			else if(j>1&&num==1)       //若是重複此動作一次以上，且最後除完結果為1 ，我們能判斷是平方數 
				printf("%d^%d",i,j);
			j=0;
		}
		break;
	}
	printf("\n");
	return 0;
}

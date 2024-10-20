#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,n, lowbound, upbound , k , sum , notodd;
	
	scanf("%d",&n);		                           //為了能使使用者，輸入2在input否則也能將迴圈的test直接寫為2 
	for(j=0 ; j<n ; j++){
		
		scanf("%d %d",&lowbound,&upbound);	      //讓使用者能決定兩個數字的範圍上下限 
		if(lowbound>2 && upbound<100){            //題目所規定的2-100 		
		sum = 0;
		for(k=lowbound ; k<=upbound ; k++){
			if(k%2 != 0 && k > 2){		      //排除偶數，找到奇數，並排除2以下的數字 
				notodd = 0;
				for(i=3 ; i<k ; i++){
					if(k%i == 0)
						notodd = 1;	          //找出非質數，令notodd=1 		
				}
				if(notodd == 1)
					sum += k ;	            //非質數加入sum 				
			}	
		}
		printf("%d\n",sum);
	}
	}
	return 0;
}

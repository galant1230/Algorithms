#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,n, lowbound, upbound , k , sum , notodd;
	
	scanf("%d",&n);		                           //���F��ϨϥΪ̡A��J2�binput�_�h�]��N�j�骺test�����g��2 
	for(j=0 ; j<n ; j++){
		
		scanf("%d %d",&lowbound,&upbound);	      //���ϥΪ̯�M�w��ӼƦr���d��W�U�� 
		if(lowbound>2 && upbound<100){            //�D�ةҳW�w��2-100 		
		sum = 0;
		for(k=lowbound ; k<=upbound ; k++){
			if(k%2 != 0 && k > 2){		      //�ư����ơA���_�ơA�ñư�2�H�U���Ʀr 
				notodd = 0;
				for(i=3 ; i<k ; i++){
					if(k%i == 0)
						notodd = 1;	          //��X�D��ơA�Onotodd=1 		
				}
				if(notodd == 1)
					sum += k ;	            //�D��ƥ[�Jsum 				
			}	
		}
		printf("%d\n",sum);
	}
	}
	return 0;
}

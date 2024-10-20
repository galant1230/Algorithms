#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, num, score[1000], sum, above;
	float avg;
	scanf("%d", &n);
	int i=0;
	for(i=0; i<n; i++){
		sum = 0;
		above = 0;
		scanf("%d", &num);
		int j=0;
		for(j=0; j<num; j++){
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (float)sum/num;
		for(j=0; j<num; j++){
			if(score[j]>avg)
				above++;
		}
		printf("%.3f%%\n", (float)above/num*100);
	}
	return 0;
}

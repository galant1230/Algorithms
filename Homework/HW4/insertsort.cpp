
int main() {

	int n[100], p[100];
	int no_swap = 0, length, i, j, k=0, temp, count=0;

	while (1 > 0) {
		scanf("%d", &length);
		if (length == 0) {
			break;
		}
		for (i = 0; i < length; i++) {
			scanf("%d", &n[i]);
		}

		//Sorting Start
		int p0;
		for (j = 1; j < length; j++) {
			p0 = j;
			while ((p0 > 0) && (n[p0 - 1] > n[p0])) {

				temp = n[p0 - 1];
				n[p0 - 1] = n[p0];
				n[p0] = temp;
				p0--;

				no_swap++;
			}

		}
		//printf("%d\n", no_swap);
		//no_swap = 0;
		//printf("Optimal swapping takes %d swaps.\n", no_swap);
		p[k] = no_swap;
		//k++;
		no_swap = 0;
		//printf("%d\n", p[k]);
		//no_swap = 0;
		k++;
		count++;
	}
	//printf("lulu");
	for (i = 0; i < count; i++) {
		printf("Optimal swapping takes %d swaps.\n", p[i]);
	}

	//system("pause");
	return 0;
}

#include<stdio.h>

int linearSearchRecursive(int a[], int i, int j, int x) {
	if(j < i) {
		return -1;
	}
	if(a[i] == x) {
		return i;
	}
	if(a[j] == x) {
		return j;
	}
	
	return linearSearchRecursive(a, i+1, j-1, x);
}

int linearSearch(int a[], int x) {
	int n = sizeof(a);
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] == x) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a[] = {2, 4, 3, 6, 5, 1};
//	int value = 1;
	int n = sizeof(a)/sizeof(a[0]);
//	int lsr = linearSearchRecursive(a, 0, n-1, value);
//	printf("%d", lsr);
	int ls = linearSearch(a, 1);
	printf("%d", ls);

	
}

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

int main() {
	int i, value, n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the value to be found: ");
	scanf("%d", &value);
	int lsr = linearSearchRecursive(a, 0, n, value);
	if(lsr != -1) {
		printf("Value found at index: %d", lsr);
	} else {
		printf("Value not found");
	}
}

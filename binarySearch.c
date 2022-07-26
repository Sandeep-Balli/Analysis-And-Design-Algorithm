#include<stdio.h>

int binarySearch(int a[], int value) {
	int n = sizeof(a);
	int low = 0;
	int high = n-1;
	while(low <= high) {
		int mid = (low + high) / 2;
		if(a[mid] > value) {
			high = mid - 1;
		} else if(a[mid] < value) {
			low = mid+1;
		} else {
			return mid;
		}
	}
	return 0;
}

int main() {
	int n, low, high, mid, value, i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array elements in sorted order: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the value you want to search: ");
	scanf("%d", &value);
	int idx = binarySearch(a, value);
	printf("%d", idx);
	
}

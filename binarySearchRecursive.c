#include<stdio.h>

int binarySearch(int a[], int value, int low, int high) {
	int mid = (low + high) / 2;
	if(a[mid] > value) {
		return binarySearch(a, value, low, mid - 1);
	} else if(a[mid] < value) {
		return binarySearch(a, value, mid+1, high);
	} else {
		return mid;
	}
	return -1;
}

int main() {
	int n, i, value;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the value you want to search: ");
	scanf("%d", &value);
	printf("%d", binarySearch(a, value, 0, n-1));
}

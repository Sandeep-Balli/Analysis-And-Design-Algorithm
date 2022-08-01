#include<stdio.h>
#include<stdbool.h>

int binarySearch(int a[], int value, int low, int high) {
	while(low <= high) {
		int mid = (low + high) / 2;
		if(a[mid] > value) {
			return binarySearch(a, value, low, mid - 1);
		} else if(a[mid] < value) {
			return binarySearch(a, value, mid+1, high);
		} else {
			return mid;
		}
	}
	
	return -1;
}

bool isSorted(int a[]) {
	int i;
	int n = sizeof(a)/sizeof(a[0]);
	for(i = 0; i < n; i++) {
		if(a[i] > a[i+1]) {
			return false;
		}
	}
	return true;
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
	if(isSorted(a)) {
		printf("Enter the value you want to search: ");
		scanf("%d", &value);
		if(binarySearch(a, value, 0, n - 1) != -1) {
			printf("Element found at index: %d", binarySearch(a, value, 0, n-1));
		}
		else 
		{
			printf("Element not found");
		}
		
	} else {
		printf("Array is not sorted. Binary Search not possible");
	}
}

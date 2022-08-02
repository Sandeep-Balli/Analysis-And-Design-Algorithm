#include<stdio.h>
#include <stdbool.h>


int binarySearch(int a[], int value) {
	int n = sizeof(a)/sizeof(a[0]);
	int low = 0;
	int high = n;
	while(low <= high) {
		int mid = (low + high) / 2;
		if(a[mid] > value) {
			high = mid - 1;
		}
		else if(a[mid] < value) {
			low = mid + 1;
		}else {
			return mid;
		}
	}
	return -1;
}

bool isSorted(int a[]) {
	int i, n = sizeof(a)/sizeof(a[0]);
	for(i = 0; i < n; i++) {
		if(a[i] > a[i+1]) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, low, high, mid, value, i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}	
    
    if(isSorted(a)) {
    	printf("Enter the value you want to search: ");
		scanf("%d", &value);
    	printf("Value found at index: %d", binarySearch(a, value));
	} else {
		printf("Array is not sorted. Binary search not possible");
	}	
}

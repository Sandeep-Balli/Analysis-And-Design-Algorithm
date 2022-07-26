#include<stdio.h>

void insertionSort(int a[], int n) {
	int i;
	for(i = 1; i < n; i++) {
		int temp = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > temp) {
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
}

int main() {
	int n, i;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	int a[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("The sorted array is: ");
	insertionSort(a, n);
	
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

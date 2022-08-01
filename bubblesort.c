#include<stdio.h>
#include<conio.h>

int main() {
	
	int i, j, k, temp, n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++) {
		for(j = 0; j < n - i - 1; j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("The Sorted Array is: ");
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

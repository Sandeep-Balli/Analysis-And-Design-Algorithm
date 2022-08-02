#include<stdio.h>

void merge(int a[], int low, int mid, int high) {
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	
	int a1[n1];
	int a2[n2];
	
	for(i = 0; i < n1; i++) {
		a1[i] = a[low+i];
	}
	for(j = 0; j < n2; j++) {
		a2[j] = a[mid + 1 + j];
	}
	
	i = 0;
	j = 0;
	k = low;
	
	while(i < n1 && j < n2) {
		if(a1[i] <= a2[j]) {
			a[k] = a1[i];
			i++;
		}
		else {
			a[k] = a2[j];
			j++;
		}
		k++;
	}
	
	while(i < n1) {
		a[k] = a1[i];
		i++;
		k++;
	}
	while(j < n2) {
		a[k] = a2[j];
		j++;
		k++;
	}
}


void mergeSort(int a[], int low, int high) {
	if(low < high) {
		int mid = (low + high) / 2;
		
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		merge(a, low, mid, high);
	}
}


int main() {
	int a[] = {3,6,4,8,2};
	int n = sizeof(a)/sizeof(a[0]);
	int low = 0;
	int high = n;
	int i;
	mergeSort(a, low, high);
	for(i = 0; i < n ; i++) {
		printf("%d", a[i]);
	}
}

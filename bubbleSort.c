#include <stdio.h>
int bubbleSort(int arr[], int n) {
	int swap = 0; // 交换次数
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] < arr[j + 1]) { // 从大到小排序
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap++;
			}
		}
	}
	return swap;
}
int main() {
	int arr[100] = {};
	int n = 0;
	int swap = 0;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	swap = bubbleSort(arr, n);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("%d", swap);
	
	return 0;
}

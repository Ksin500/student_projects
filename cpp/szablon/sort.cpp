#include "sort.h"

void bubbleSort(int arr[], int amount)
{
	for (int i = 0; i < amount - 1; i++){
		for(int j = 0; j < amount - i - 1; j++){
			if(arr[j] > arr[j + 1]){
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			}
		}
	}
}

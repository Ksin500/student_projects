#include <iostream>
#include "sort.h"

using namespace std;

int main(){
	int amount;
	cout<<"Podaj ilość liczb";
	cin>amount;

	int arr[amount];

	cout<<"Podaj numery:";

	for(int i=0; i = amount; i++){
	cin >> arr[i];
	}
	bubbleSort(arr, amount);

	cout<<"Posortowane liczby:";

	for(int i = 0; i < amount; i++)
	{
	cout << arr[i] <<" ";
	}
	return 0;
}

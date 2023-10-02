// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

void printArray(int ar[], int n)
{
	int i;
	for (i = 0; i < n;i++)
		cout << ar[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 3,6,1,10,9};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

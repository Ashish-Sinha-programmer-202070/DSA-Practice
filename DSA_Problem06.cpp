/* Find Frequency.
Given a array of N positive integers and an integer X. The task is to find
the frequency of X in vector.*/

#include<iostream>
using namespace std;

int frequency(int arr[], int n, int x)
{
	int count = 0;
	for (int i=0; i < n; i++)
	if (arr[i] == x)
		count++;
	return count;
}

// Driver program
int main() {
	int arr[] = {1,1,1,1,1};
	int x = 1;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << frequency(arr, n, x);
	return 0;
}


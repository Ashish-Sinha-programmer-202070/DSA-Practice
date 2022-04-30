/*Given an array nums with n objects colored red,white, or blue, sort them in-place so that objects
of the same color are adjacent, with the colors inthe order red, white, and blue. We will use the
integers 0, 1, and 2 to represent the color red,white, and blue, respectively.*/

#include <iostream>
using namespace std;

void sortnum(int arr[], int arr_size)
{
    int low;
    int high = arr_size -1;
    int mid = 0;

    while(mid<=high){  
        switch (arr[mid]) {

        case 0:
        swap(arr[low++],arr[mid++]);
        break;

        case 1:
        mid++;
        break;

        case 2:
        swap(arr[mid],arr[high--]);
        break;
        }     
    }
}

void printArray(int arr[], int arr_size)
{
    for(int i = 0; i<arr_size;i++)
    cout<< arr[i] << " ";
}

int main()
{
    int arr[] = {0,1,2,0,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortnum(arr, n);

    cout << "array after segregation ";

	printArray(arr, n);

	return 0;
}
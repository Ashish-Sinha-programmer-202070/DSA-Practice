//FIND THE REVERSE OF AN ARRAY. You must do this by modifying the input array inplace with O(1) extra memory
#include <iostream>
using namespace std;

void ReverseArray(int arr[],int start,int end)
{
    if (start>=end)
    return ;

    // Swapping the numbers
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    ReverseArray(arr, start + 1, end - 1);

}

/* Function for print the array */
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
    
}

int main()
{
    int arr[] = {15,16,17,18,19,20};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    PrintArray(arr, n);
    ReverseArray(arr,0,n-1);

    cout << "\nReversed array is :" << endl;
    PrintArray(arr,n);

    return 0;
}
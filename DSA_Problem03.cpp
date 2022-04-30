// Move all negative numbers to beginning and positive to end with constant extra space. Order
//                 of elements is not important here.

#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Dutch National Flag Algorithm Approach.
void reSuffle(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 15,
                  27,
                  -73,
                  -78,
                  12,
                  45,
                  -10,
                  -56,
                  69,
                  99,
                  -67,
                  -89 } ;
    int n = sizeof(arr) / sizeof(arr[0]);
    reSuffle(arr, n);
    displayArray(arr, n);
    return 0;
}

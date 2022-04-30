/*Two sum problem:-
Given an array of integers nums and an integer target, return indices of the two numbers such
that they add up to target. You may assume that each input would have exactly one solution, and
you may not use the same element twice. You can return the answer in any order*/

#include <iostream>
using namespace std;

bool sumproblem(int Arr[],int size, int x)
{
    for(int i=0; i<(size-1); i++){
        for(int j=(i+1);j<size;j++ ){
            if (Arr[i]+Arr[j] == x){
                cout << "Pair with a given sum " << x << " is (" << Arr[i] << ", " << Arr[j] << ")"
                  << endl;
 
                return 1;
        
        }
        }
        }

    return 0;

}

int main(void) {
    int A[] = {2,7,11,15};
    int x = 9;
    int size = sizeof(A)/ sizeof(A[0]);

    if (sumproblem(A, size, x)){
        cout << "Valid pair of number "<<endl;
    }
    else{
        cout << "No valid pair of number exists for " << x << endl;
    }

    return 0;
}
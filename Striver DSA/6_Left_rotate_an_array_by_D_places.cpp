/*
Step 1: Reverse the subarray with the first d elements (reverse(arr, arr+d)).
Step 2: Reverse the subarray with the last (n-d) elements (reverse(arr+d, arr+n)).
Step 3: Finally reverse the whole array (reverse(arr, arr+n)).

T.C - O(n+d)
S.C - O(1)
*/


#include <bits/stdc++.h>
using namespace std;


// BruitForce Approach:
void leftRotate(int arr[], int n, int d)
{
    if(n==0)  return;

    // Get the effective number of rotations
    d = d%n;

    // Checking if d is a multiple of n
    if(d == 0)  return;

    int temp[d];  // temporary array

    // step-1: Copying the first d elements in temporary array
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    // step-2: Shift last (n-d) element to the left by d places in the given array
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    // place the elements of the temporary array in the last d places in the given array:
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i - (n-d)];
    }

}


// void reverse(int arr[], int start, int end){
//     while(start <= end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// } 

// void leftRotate(int arr[], int n, int d) {
//     reverse(arr, arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr+n);
// }





int main() {
    // BruitForce Approach
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    // int n; cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)  cin >> arr[i];
    // int d;  cin >> d;
    // leftRotate(arr, n, d);
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
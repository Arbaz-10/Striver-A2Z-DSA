/*
Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90.
*/


#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n)
{
    // T.C - O(n logn)  // S.C - O(n)
    // sort(arr.begin(), arr.end());
    // return arr[n-1];
    
    // T.C - O(n)  // S.C - O(1)
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
    int t;  cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << largest(arr, n) << "\n";
    }
    return 0;
}
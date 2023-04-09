/*
1.Take 2 variables (i,j), i will be at the first occurrence of zero and j is at i+1 
2. If element at j index is not zero then swap elements at i,j and increment i,j
3. If the element at j index is zero then only increment j.


Input:
N = 5
Arr[] = {3, 5, 0, 0, 4}
Output: 3 5 4 0 0
Explanation: The non-zero elements
preserve their order while the 0
elements are moved to the right.
*/


#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(1)
void pushZerosToEnd(int arr[], int n) {
	int i=0;
	for(int j=0; j<n; j++){
	    if(arr[j] != 0){
	        swap(arr[i], arr[j]);
	        i++;
	    }
	}
};


int main() {
    int n, i;  cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) 
        cin >> arr[i];
    pushZerosToEnd(arr, n);
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

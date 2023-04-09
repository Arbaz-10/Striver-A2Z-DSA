
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        // Bruitforce Code:
        // for(int i=0; i<=n; i++){
        //     int flag = 0;
        //     for(int j=0; j<n-1; j++){
        //         if(array[j] == i){
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag == 0)  return i;
        // }
        // return -1;

        // flag variable to check if an element exists
        // Search the element using linear search:
        // i is present in the array:
        // check if the element is missing i.e flag == 0:
        // The following line will never execute. It is just to avoid warnings.
        
        
        // int ans = 0;
        // for(int i=0; i<n-1; i++)  ans = ans + array[i];
        // return (n*(n+1)/2) - ans;

        // sort(array.begin(), array.end());
        // for(int i=0; i<n; i++){
        //     if(array[i] == (i+1))  continue;
        //     else return i+1;
        // }


        // int xor1=0, xor2=0;
        // for(int i=0; i<n-1; i++){
        //     xor1 = xor1^(i+1);
        //     xor2 = xor2^array[i];
        // }
        // xor1 = xor1^n;
        // return xor1^xor2;
    }
};


int main() {
    int t;  cin >> t;
    while (t--) {
        int n;  cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
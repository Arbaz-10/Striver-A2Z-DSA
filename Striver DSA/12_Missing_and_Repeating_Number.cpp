#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
    //     int *ans = new int[2];
    //     int count[n+1] = {0};
    //     for(int i=0; i<n; i++){
    //         count[arr[i]]++;
    //     }
    //     for(int i=1; i<n+1; i++){
    //         if(count[i] == 0)  ans[1] = i;
    //         else if(count[i] > 1)  ans[0] = i;
    //     }
    //     return ans;
    }

    pair<int,int> missingAndRepeating(vector<int> &arr, int n)
    {
        // vector<int>check(n+1, 0);    
        // for(int i=0; i<n; i++){        
        //     check[arr[i]]++;    
        // }        
        // pair<int, int>ans;    
        // for(int i=1; i<=n; i++){        
        //     if(check[i]==0)  ans.first=i;        
        //     if(check[i]>1) ans.second=i;
        // }   
        // return ans; 


        // pair<int, int> ans;
        // int realSum = 0;
        // int rangeSum = 0;
        // sort(arr.begin(), arr.end());
        
        // for(int i=0; i<n; i++){
        //     if(arr[i] == arr[i+1]){
        //         ans.second = arr[i];
        //     }else{
        //         realSum += arr[i];
        //     }
        //     rangeSum += (i+1);
        // }
        
        // ans.first = (rangeSum-realSum);
        // return ans;
    }
};


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }

    return 0;
}
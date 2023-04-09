// Find the element that appears once

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int search(int A[], int N)
	{
	   // Brute-Force Approach:
	   // for(int i=0; i<N; i++){
	   //     int num = A[i];
	   //     int count = 0;
	        
	   //     for(int j=0; j<N; j++){
	   //         if(A[j] == num) count++;
	   //     }
	        
	   //     if(count == 1)  return num;
	   // }
	   // return -1;
	   
       
	   // Better Approach
	   //map<int, int> mp;
	   //for(int i=0; i<N; i++)  mp[A[i]]++;
	   
	   //for(auto it:mp){
	   //    if(it.second == 1)  return it.first;
	   //}
	   //return -1;
	   

	   //Optimal Solution
	   int xorr = 0;
	   for(int i=0; i<N; i++){
	       xorr = xorr ^ A[i];
	   }
	   return xorr;

	}
};


int main(){
    int t,len;  cin>>t;
    while(t--) {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
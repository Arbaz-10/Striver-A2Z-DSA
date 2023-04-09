//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//arr1,arr2 : the arrays
// n, m: size of arrays
//Function to return a list containing the union of the two arrays. 
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // Time Compleixty : O( (m+n)log(m+n) )
    // Space Complexity : O(m+n) 
    
    // set<int> st;
    // for(int i=0; i<n; i++)  st.insert(arr1[i]);
    // for(int i=0; i<m; i++)  st.insert(arr2[i]);
    
    // vector<int> v;
    // for(auto it : st)  v.push_back(it);
    // return v;
    
    
    
    int i = 0, j = 0;       // pointers
    vector <int> Union;     // Uninon vector
    while (i < n && j < m) {
      if (arr1[i] <= arr2[j]) // Case 1 and 2
      {
        if (Union.size() == 0 || Union.back() != arr1[i])
          Union.push_back(arr1[i]);
        i++;
      } 
      else // case 3
      {
        if (Union.size() == 0 || Union.back() != arr2[j])
          Union.push_back(arr2[j]);
        j++;
      }
    }
    
    while (i < n) // IF any element left in arr1
    {
      if (Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    }
    while (j < m) // If any elements left in arr2
    {
      if (Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
    return Union;
}


int main() 
{    
	int N, M;
	cin >>N >> M;
	
	int arr1[N], arr2[M];
	
	for(int i = 0;i<N;i++)  cin >> arr1[i];
	for(int i = 0;i<M;i++)  cin >> arr2[i];

	vector<int> ans = findUnion(arr1,arr2, N, M);
	for(int i: ans)  cout<< i <<' ';
	cout << endl;

	return 0;
}
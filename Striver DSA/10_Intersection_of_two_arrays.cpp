#include <bits/stdc++.h>
using namespace std;
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    set<int> s;
    sort(a, a+n);
    sort(b, b+m);
    int i=0, j=0;
    // to traverse the array
    while(i<n && j<m){
        // If current element in i is small
        if(a[i] == b[j]){
            s.insert(a[i]);
            i++;  j++;
        }
        else if(a[i] > b[j])  
            j++;
        else  
            i++;
    }
    return s.size();
};


int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    cout << NumberofElementsInIntersection(a, b, n, m) << endl;

    return 0;
}




#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionOfArrays(vector<int>A, vector<int>B)
{
  vector <int> ans;     // Declare ans array.
  int i = 0, j = 0; 
  // to traverse the arrays
    while (i < A.size() && j < B.size()) 
    {
        //if current element in i is smaller
        if (A[i] > B[j])  j++;
        else if (B[j] > A[i])  i++;
        else{ 
            //both elements are equal
            ans.push_back(A[i]); 
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    
  // Array Initialisation.
  vector < int > A {1,2,3,3,4,5,6,7};
  vector < int > B {3,3,4,4,5,8};

  vector<int> ans = intersectionOfArrays(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}
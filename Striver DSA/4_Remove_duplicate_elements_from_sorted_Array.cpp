/*
Two Pointers Approach:
1. --> ake a variable i as 0;
2. --> Use a for loop by using a variable ‘j’ from 1 to length of the array.
3. --> If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
4. --> After completion of the loop return i+1, i.e size of the array of unique elements.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i=0;
        for(int j=0; j<n; j++){
            if(a[i] != a[j]){
                a[i+1] = a[j];
                i++;
            }
        }
        return i+1;
    }
};


int main(){
    int T; cin>>T;
    while(T--){
        int N; cin>>N;
        int a[N];
        for(int i=0;i<N;i++) cin>>a[i];
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }

    return 0;
}
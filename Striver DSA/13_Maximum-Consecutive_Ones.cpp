#include<bits/stdc++.h>
using namespace std;

int MostConsecutiveOnes(int arr[], int n, int m) 
{
    int ans=0, count=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            ans = max(ans, count); 
        }
        else  count = 0;
    }
    return ans;
}

int main(){

    return 0;
}
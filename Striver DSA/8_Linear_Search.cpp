//  Time Complexity - O(n) n->length of the array
//  Space Complexity - O(1)

#include<bits/stdc++.h>
using namespace std;

// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be search
int LinearSearch(int arr[],int n,int num){
    for(int i=0; i<n; i++){
        if(arr[i] == num)  return i;
    }
    return -1;
}


int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0;i<n;i++)  cin >> arr[i];
    cout << LinearSearch(arr, n, k) << endl;

	return 0; 
}



/*
Approach:
1. -> Given an array
2. -> We will traverse the whole array and see if the element is present in the array or not
3. -> If found we will print the index of the element
4. -> Otherwise, we will print -1.
*/
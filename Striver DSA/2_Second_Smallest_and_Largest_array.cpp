// T.C - O(n) - OPtimal Solution
// S.C - O(1)

#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    int smallest = arr[0];
    int second_smallest = INT_MAX;

    for(int i = 0; i < n; i++) {
       if(arr[i] < smallest){
          second_smallest = smallest;
          smallest = arr[i];
       }
       else if(smallest < arr[i] && second_smallest > arr[i]){
          second_smallest = arr[i];
       }
    }
   return second_smallest;     
}

int secondLargest(int arr[],int n)
{
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && second_largest < arr[i]) {
            second_largest = arr[i];
        }
    }
    return second_largest;                
}

int main() 
{
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Second smallest is "<<secondSmallest(arr,n)<<endl;
    cout<<"Second largest is "<<secondLargest(arr,n)<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	void leftRotateArray(int arr[], int k, int n)
	{
	    k %= n;    // d = d%n
	    reverse(arr, arr + k);
	    reverse(arr + k, arr + n);  // reverse an array
	    reverse(arr, arr+n);
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int k;
		cin >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		Solution ob;
		ob.leftRotateArray(a, k, n);

		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
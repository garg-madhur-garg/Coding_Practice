

// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int neg = 0;
    int pos = 0;

    while(pos < n){
    	if(arr[pos] < 0){
    		swap(arr[pos], arr[neg]);
    		neg++;
    		pos++;
    	}
    	else{
    		pos++;
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	cout << arr[i] << " ";
    }
}
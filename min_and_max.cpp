

// Maximum and minimum of an array using minimum number of comparisons

#include <bits/stdc++.h>
using namespace std;

int main()
{

	// This is best method
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
    	cin >> arr[i];
    }

    int max;
    int min;
    int i;

    if(n%2 == 0){
    	if(arr[0] > arr[1]){
    		max = arr[0];
    		min = arr[1];
    	}
    	else{
    		max = arr[1];
    		min = arr[0];
    	}

    	i = 2;
    }
    else{
    	max = arr[0];
    	min = arr[0];

    	i = 1;
    }

    while(i < n-1){
    	if(arr[i] > arr[i + 1]){
    		if(arr[i] > max){
    			max = arr[i];
    		}
    		if(arr[i+1] < min){
    			min = arr[i+1];
    		}
    	}
    	else{
    		if(arr[i + 1] > max){
    			max = arr[i + 1];
    		}
    		if(arr[i] < min){
    			min = arr[i];
    		}
    	}

    	i = i + 2;
    }

    cout << "Max is: " << max << endl;
    cout << "Min is: " << min << endl; 
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
	
// 	int arr[n];
// 	for(int i = 0; i < n; i++)
// 	{
// 	    cin >> arr[i];
// 	}
	
// 	int min = arr[0];
// 	int max = arr[0];
	
// 	for(int i = 0; i < n; i++)
// 	{
// 	    if(max < arr[i])
// 	    {
// 	        max = arr[i];
// 	    }
// 	    if(min > arr[i])
// 	    {
// 	        min = arr[i];
// 	    }
// 	}
	
// 	cout << "MAX is: " << max << endl;
// 	cout<< "MIN is: " << min << endl;
// 	return 0;
// }
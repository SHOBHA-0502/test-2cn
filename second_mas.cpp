#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int *input, int n)
{
    int max = INT_MIN;
    int second_max ;
    
    if(n ==0|| n ==1){
        return -2147483648;
    }
    else {
    for(int i=0 ; i<n ; i++){
        if(input[i] >= max){
            second_max = max;
            max = input[i];
        }
        
        
    }
    cout<< max << "<< " << second_max;

        if(max == second_max ){
            return -2147483648;
        }
        
        else {
             return second_max ;
        }
        
    
        
    }
}
    
    

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
    
{ int n = size;
    for(int i =0 ; i< n-1 ; i++){
        for(int j = i+1 ; j<n-i-1; j++){
            if(input[j] ==0){
                int temp ;
                temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
    //         for (int i = 0; i < size; i++)
	// 	{
	// 		cout << input[i] << "// ";
	// 	}
    //     cout<<endl;
    // }
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
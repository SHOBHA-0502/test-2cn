#include <iostream>
using namespace std;
void reverseStringWordWise(char input[]) {
    
    int count = 0 ;
    for(int i =0 ; input[i] != 0 ; i++){
        count ++;
    }
    int j = count -1;
    int i = 0;
    while(i<=j){
        int temp ;
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
     cout<< input;
     cout<<endl;
     int t=0 ;
    
    for(int i =0 ; i<=count ; i++){
        if( input[i] =='\0'){
            int k = i-1;
            while(t<=k){
                int temp ;
                temp = input[t];
                input[t] = input[k];
                input[k] = temp;
                t++;
                k--;
                //cout<<"yes";
            }

        }
        
        else if(input[i] == ' ' ){
            
            int k = i-1;
            while(t<k){
                int temp ;
                temp = input[t];
                input[t] = input[k];
                input[k] = temp;
                t++;
                k--;
            }
            input[i] = ' ';
            t = i+1;
        }
    }
        cout<< input;
    
 }
    
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
   // cout << input << endl;
}

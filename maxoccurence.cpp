#include <bits/stdc++.h>
#include <cstring>
using namespace std;
char highestOccurringChar(char input[]) {
    int n = strlen(input);
        int count =0 ; 
    int max = INT_MIN;
     int mindex ;
    
for(int i =0 ; i<n ; i++){
 for(int j = i+1 ; j<n ; j++){
         if(input[i] == input[j]){
             count ++; 
             input[j] = -786; 
                 
             }
             
            
         }
         if(count> max ){
             max = count;
             mindex = i;
         }
    count =0 ; 
     }
    
    return input[mindex];
    
    
}
 

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
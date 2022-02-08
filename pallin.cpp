#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
     int count =0 ;
     
    
    for(int i =0 ; str[i] != '\0'; i++){
        count++;
    }
    int i =0 ; 
    int j = count-1;
    cout<<count<<"//"<<endl;
    while(i<=j){
      cout<<str[i]<<str[j]<<"--";
        
        if(str[i] != str[j]){
            return false;
            
            
        }
        else{
            i++;
            j--;
        }
        
        
    }
    
    return true ;
    
    
    
}
      

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
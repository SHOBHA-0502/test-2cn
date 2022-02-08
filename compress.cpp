#include <iostream>
#include <cstring>
#include<string>
using namespace std;

#include<cstring>
string getCompressedString(string &input) {
    string str = "";
    int n = input.length();
    int count =0 ;
    for(int i = 0 ;i< n ; i++){
        if(input[i] == input[i+1]){
            count ++;
            
        }
        if(input[i] != input[i+1]){
            str += input[i];
            count = count +1;
            str+= to_string(count);;
            count =0;
        }
        
        
    }

    input = str ;
    
}
   

int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}
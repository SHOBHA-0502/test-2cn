#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
int n = strlen(input);
int i =0 ;
int j =0 ;

    while(j<=n){
        
        if(input[j] != c){
        int temp ;
        temp = input[i];
        input[i] = input[j];
        input[j] = temp ;
        i++;
        j++;
        }
        else if(input[j] == c){
            j++;
            
        }
        else if(input[i] == '\0'){
            input[i+1]='\0';
        }
        
    }
}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}
#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    int count =0;
    
    for(int i =0 ; input[i] !='\0' ; i++){
        count++;
    }
    
int l =0 ;
int i ;
    //cout << count ;
    while(i<=count){
        if(input[i] == ' '){
            input[l] = input[i+1];
            
            l++;
            i++;
            i++;
          //  cout<< "]]";
            

        }
        else if(input[i] =='\0'){
            //cout<< l << "pp" <<endl;
            input[l] ='\0'; 
            break;
        
        }
        else {
            input[l] =input[i];
           
            l++;
            i++;
            //cout<< "//";
        }
        
    }
}

    

int main(){
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

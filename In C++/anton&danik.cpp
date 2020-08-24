#include <iostream>
#include <string.h>
 
using namespace std;
 
int main(){
    
    int n;
    string s;
    int countA = 0;
    int countD = 0;
    
    
    cin>>n;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'){
            countA += 1;
            
        }else{
            countD += 1;
            
            continue;
        }
        
    }if(countA > countD){
        cout<<"Anton"<<"\n";
    }else if(countA == countD){
        cout<<"Friendship"<<"\n";
    }else{
        cout<<"Danik"<<"\n";
    }
}
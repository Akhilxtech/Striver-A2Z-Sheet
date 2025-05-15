// Largest odd number from string

#include <iostream>
using namespace std;
#include<string>
string odd(string &num){
    int i=num.length()-1;
    while(i>=0){
        char ch=num[i];
        int digit=ch-'0';
        if(digit%2==0){
            num.pop_back();
        }
        else{
            return num;
        }
    }
    return "";
}

int main() {
    string str="96313175928437347";
    string res=odd(str);
    cout<<"result:"<<res;    
    return 0;
}
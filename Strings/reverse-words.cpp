#include <iostream>
using namespace std;
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
// string reverseWords(string s){
//     stringstream ss(s);
//     string token="";
//     string result="";
//     vector<string> words;

//     while(ss>>token){
//         words.push_back(token);
//     }
//     reverse(words.begin(),words.end());

//     for(int i=0;i<words.size();i++){
//         result+=words[i];
//         // ek word daldia ab uske baad space daal do
//         if(i<words.size()-1){
//             result+=" ";
//         }
//     }
//     return result;
// }


// method -2 two pointers

string reverseWords(string s){
    // phele reverse karlo string ko

    reverse(s.begin(),s.end());

    int i=0;
    int r=0;
    int l=0;

    while(i<s.length()){
        while(i<s.length()&& s[i]!=' '){
            s[r]=s[i];
            r++;
            i++;
        }
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r]=' ';
            r++;
            l=r;
        }
        i++;
    }
    return s.substr(0,r-1);

}

int main() {
    string str="hello world";
    string rev=reverseWords(str);

    for(auto str:rev){
        cout<<str;
    }
    
    return 0;
}
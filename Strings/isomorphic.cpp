#include <iostream>
using namespace std;
#include<unordered_map>
bool isomorphicString(string s1, string s2){
    unordered_map<char,char> mp1;
    unordered_map<char,char> mp2;

    for(int i=0;i<s1.length();i++){
        char ch1=s1[i];
        char ch2=s2[i];
        if(mp1.find(ch1)!=mp1.end()&&mp1[ch1]!=ch2||mp2.find(ch2)!=mp2.end()&& mp2[ch2]!=ch1){
            return false;
        }
        mp1[ch1]=ch2;
        mp2[ch2]=ch1;
    }
    return true;
}
int main() {
    string s1="add";
    string s2="egg";
    bool ans=isomorphicString(s1,s2);
    cout<<"res:"<<ans;
    return 0;
}
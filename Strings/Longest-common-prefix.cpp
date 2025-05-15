#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
string longestCommonPrefix(vector<string> &str){
    sort(str.begin(),str.end());
    string firstString=str[0];
    string lastString=str[str.size()-1];
    int count=0;
    if(str.empty()) return "";
    for(int i=0;i<firstString.length();i++){
        if(firstString[i]==lastString[i]){
            count++;
        }
        else{
            break;
        }
    }
    if(count!=0){
        return firstString.substr(0,count);
    }
    return "";
}
int main() {
    vector<string> s= {"flower","flow","flight"};
    string res=longestCommonPrefix(s);
    cout<<"result:"<<res;
    
    return 0;
}
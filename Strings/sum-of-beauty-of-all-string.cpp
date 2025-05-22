#include <iostream>
using namespace std;
#include <vector>
#include<map>
#include<climits>

int substring(string s){
    int ans=0;
    for(int i=0;i<s.length();i++){
        map<char,int> mp;
        for(int j=i;j<s.length();j++){
            mp[s[j]]++;
            int most_freq=0,less_freq=INT_MAX;
            for(auto ch:mp){
                most_freq=max(most_freq,ch.second);
                less_freq=min(less_freq,ch.second);
            }
            ans+=(most_freq-less_freq);
        }
    }
    return ans;
}

int main() {
    string s="aabcb";
    int str=substring(s);
    cout<<str;
    
    return 0;
}
#include <iostream>
using namespace std;
#include<string>
#include <algorithm>


// naive approach O(n^2);
// int countSubstring(string s){
//     int count=0;
//     for(int i=0;i<s.length();i++){
//          int hash[3]={0};
//         for(int j=i;j<s.length();j++){
//           hash[s[j]-'a']=1;
//           if(hash[0]+hash[1]+hash[2]==3){
//             count++;
//           }
//         }
//     }
//     return count;
// }


int countSubstring(string str){
    int lastseen[3]={-1,-1,-1},count=0;
    for(int i=0;i<str.length();i++){
        lastseen[str[i]-'a']=i;
        if(lastseen[0]!=-1&&lastseen[1]!=-1&&lastseen[2]!=-1){
            count+=(1+min(min(lastseen[0],lastseen[1]),lastseen[2]));
        }
    }
    return count;
}
int main() {
    string str="abcabc";
    int result=countSubstring(str);
    cout<<"result:"<<result;

    return 0;
}
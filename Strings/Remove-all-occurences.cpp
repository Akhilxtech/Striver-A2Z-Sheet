// REMOVE ALL OCCURRENCES OF A CHARACTER IN A STRING
#include <iostream>
using namespace std;


// Approach-1 time complexity O(n sq) in worst case not good

// void removeCharacter(string &s,char pattern){
//     while(s.find(pattern)!=-1){
//         s.erase(s.find(pattern),1);
//     }
// }

// Approach-2 time complexity-O(n) ans space O(n) better than above

// string remove(string &s,char ch){
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         if(s[i]!=ch){
//             ans+=s[i];
//         }
//         else{
//             continue;
//         }
//     }
//     return ans;
// }

// approach -3 optimal approach O(n) and O(1) space complexity

void removeOccurecne(string &s,char ch){
    int overwrite=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=ch){
            s[overwrite]=s[i];
            overwrite++;
        }
    }
    s.resize(overwrite);

}
int main() {
    string str="geekforgeeks";
    // removeCharacter(str,'e');
    // string a=remove(str,'e');
    removeOccurecne(str,'e');
    for(auto st:str){
        cout<<st;
    }
    
    return 0;
}
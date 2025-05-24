#include <iostream>
using namespace std;
#include<algorithm>
string decimal2Binary(int n){
    string res="";
    while(n!=0){
        if(n%2==1) res+="1";
        else res+="0";
        n/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int binary2Decimal(string s){
    int pow2=1,sum=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='1'){
            sum+=pow2;
        }
        pow2*=2;
    }
    return sum;
}

int main() {
    int num=7;
    string ans=decimal2Binary(num);
    cout<<"Decimal to binary:"<<ans<<endl; 
    string n="10001000";  
    int res=binary2Decimal(n);
    cout<<"Binary to decimal:"<<res;
    return 0;
}
#include <iostream>
using namespace std;
#include<vector>
vector<int> merge2sortedArray(vector<int> &arr1,vector<int> &arr2){
    vector<int> ans;
    int i=0,j=0;
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main() {
    vector<int> array1={20,40,60,80,90,100};
    vector<int> array2={10,30,50,70};
    vector<int> sortedArray=merge2sortedArray(array1,array2);
    for(auto num:sortedArray){
        cout<<num<<" ";
    }   
    return 0;
}
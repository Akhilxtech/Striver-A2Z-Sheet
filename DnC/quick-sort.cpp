#include <iostream>
using namespace std;
#include<vector>
void quickSort(vector<int> &arr, int start, int end){
    // base case
    if(start>=end) return;

    int i=start-1;
    int j=start;
    int pivot=end;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    // abhi mera i last element ki correct pos se ek index phele hai
    i++;
    swap(arr[i],arr[pivot]);
    // ab mera pivot element uski correct position per agya hai jha uske right main sare element usse bade aur left main sare element usse chote
    quickSort(arr,start,i-1);// left call
    quickSort(arr,i+1,end);// right call
}
int main() {
    vector<int> array={7,2,1,8,6,3,5,4};
    cout<<"Before sorting:"<<endl;
    for(auto num:array){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"After sorting:"<<endl;
    quickSort(array,0,array.size()-1);
    for(auto num:array){
        cout<<num<<" ";
    }
    return 0;
}
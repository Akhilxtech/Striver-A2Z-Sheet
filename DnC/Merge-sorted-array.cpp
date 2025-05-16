#include <iostream>
using namespace std;
#include<vector>

void merge(vector<int> &arr,int start,int end,int mid){
    // length of left array
    int leftLength=mid-start+1;

    // length of right array
    int rightLength=end-mid;



    // // create left array (dynamically) using heap memory
    // int *leftArray=new int[leftLength];
    // // making right array (dynamically) using heap memory
    // int *rightArray=new int[rightLength];

    vector<int> leftArray(leftLength);
    vector<int> rightArray(rightLength);

    // fill or copy left and right array
    // copy original array->values
    // index variable original array ke index ko indicate kar raha hai
    int index=start;
    // copying into left array
    for(int i=0;i<leftLength;i++){
        leftArray[i]=arr[index];
        index++;
    }
    // copying into right array
    index=mid+1;
    for(int i=0;i<rightLength;i++){
        rightArray[i]=arr[index];
        index++;
    }

    // merge logic
    int leftIndex=0;// i -> merge 2 sorted array wala
    int rightIndex=0;// j-> merge 2 sorted array wala
    int mainArrayIndex=start;
    while(leftIndex<leftLength&& rightIndex<rightLength){
        if(leftArray[leftIndex]<rightArray[rightIndex]){
            arr[mainArrayIndex]=leftArray[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=rightArray[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }
    while(leftIndex<leftLength){
        arr[mainArrayIndex]=leftArray[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }
    while(rightIndex<rightLength){
        arr[mainArrayIndex]=rightArray[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }

    // delete heap memory
    // delete[] leftArray;
    // delete[] rightArray;
}

void mergeSort(vector<int> &arr,int start,int end){
    // base case
    if(start>end) return;
    // agar array main single element hai to usi ke uper start hoga or end hoga
    if(start==end) return;

    int mid=(start+end)/2;
    // left part recursion se solve krwao
    mergeSort(arr,start,mid);
    // right part recusrion se solve krwao
    mergeSort(arr,mid+1,end);
    // dono part ko merge kardo
    merge(arr,start,end,mid);
}

int main() {
    vector<int> arr={10,80,100,30,90,70,60,20,110,112,50,40};
    cout<<"before:"<<endl;
    for(auto num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,arr.size()-1);
    cout<<"after:"<<endl;
    for(auto num:arr){
        cout<<num<<" ";
    }
    return 0;
}
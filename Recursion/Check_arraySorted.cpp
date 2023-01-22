#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){

    //base case
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
    
}

int main(){
    int arr[]={2,2,3,4,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool answer = isSorted(arr,n);
    if(answer){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
    cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr,int start,int end,int target){
    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;
    if(target==arr[mid]){
        return mid;
    }
    if(target>arr[mid]){
        return BinarySearch(arr,mid+1,end,target);
    }
    else{
        return BinarySearch(arr,start,mid-1,target);
    }
}

int main(){
    int arr[]={1,2,10,14,15,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans=BinarySearch(arr,0,n,15);
    if(ans==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Element Found at index "<<ans<<endl;
    }
}
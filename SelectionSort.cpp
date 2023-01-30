#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int SelectionSort(int arr[],int len){
    for(int i =0;i<len-1;i++){
        int min=i;
        for(int j = i+1;j<len;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<"Sorted Array : ";
    for(int i =0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

int main(){
    int arr[]={4,8,6,2,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    cout<<endl;

}
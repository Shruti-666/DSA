#include<bits/stdc++.h>
using namespace std;

int Sum(int arr[],int size){
    if(size==0){
        return 0;

    }
    if(size==1){
        return arr[0];
    }
    
        int count = arr[arr+1,size-1];
        int sum = arr[0]+count;
        return sum;
    
}
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Sum(arr,n)<<endl;

}
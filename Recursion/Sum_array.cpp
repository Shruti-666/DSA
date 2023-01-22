#include<bits/stdc++.h>
using namespace std;

int Sum(int *arr,int size){
    if(size==0){
        return 0;

    }
    if(size==1){
        return arr[0];
    }
    
        int count = arr[0]+ Sum(arr+1,size-1);
        return count;
    
}
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of array : "<<Sum(arr,n)<<endl;

}
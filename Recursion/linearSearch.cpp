#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool LinearSearch(int * arr,int size,int num){
    print(arr,size);
    //base case
    if(size==0){
        return 0;
    }
        if(num==arr[0]){
            return true;
        }
        else{
            return LinearSearch(arr+1,size-1,num);
        }
} 

int main(){
    int arr[]={5,9,10,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num =1;
    int ans = LinearSearch(arr,n,num);
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}
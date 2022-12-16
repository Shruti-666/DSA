#include<bits/stdc++.h>
#include<iostream>

int BinarySearch(int array[],int size,int target){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    //for optimizing mid value put 
    //mid = start + (end-start)/2
    while(start<=end){
        if(array[mid]==target){
            return mid;
        }
        //right part
        if(target>array[mid]){
            start=mid+1;
        }
        //left part
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int key = 20;
    int answer = BinarySearch(array,10,key);
    cout<<"Index of "<<key<<" is "<<answer<<endl;

}
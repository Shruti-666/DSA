#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){
    array<int,4> a ={1,2,3,4};
    //size
    cout<<"Size : "<<a.size()<<endl;
    //direct access
    cout<<"Direct access at 3 :"<<a.at(3)<<endl;
    //check if its empty o = false 1= true
    cout<<"Empty : "<<a.empty()<<endl;
    //first elemnt & last element
    cout<<"First element : "<<a.front()<<endl;
    cout<<"Last element : "<<a.back()<<endl;
    cout<<"Array : ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
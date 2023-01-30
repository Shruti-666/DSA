#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity : "<<v.capacity()<<endl;
    //insertion
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    //direct access
    cout<<"Direct access at 4 : "<<v.at(4)<<endl;
    cout<<"Front element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;
    //delete last element
    cout<<"Deleting last element......."<<endl;
    v.pop_back();
    cout<<"List now ";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }

    d.pop_back();
    cout<<endl;
    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    d.push_front(6);

    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;

    d.pop_front();

    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;

    cout<<endl;
}
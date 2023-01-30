#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    //insertion
    q.push(15);
    q.push(2);
    q.push(1);

    cout<<"Front element : "<<q.front()<<endl;

    //deletion
    q.pop();
    cout<<"Front element : "<<q.front()<<endl;

    q.pop();
    cout<<"Front element : "<<q.front()<<endl;

    //checking if its empty
    if(q.empty()){
        cout<<"It's empty "<<endl;
    }
    else{
        cout<<"It's not empty"<<endl;
    }

    q.pop();
    cout<<"Front element : "<<q.front()<<endl;
    
    if(q.empty()){
        cout<<"It's empty "<<endl;
    }
    else{
        cout<<"It's not empty"<<endl;
    }

    return 0;




}
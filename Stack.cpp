#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(8);
    st.push(5);

    cout<<st.top()<<endl;
    if(st.empty()){
        cout<<"empty"<<endl;

    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
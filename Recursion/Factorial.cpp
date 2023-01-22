#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Factorial of" << n << " =" << factorial(n)<<endl;
}
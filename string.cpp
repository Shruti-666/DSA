#include<iostream>
using namespace std;
int main(){
    string word1;
    string word2;
    int count=0;
    char temp;
    cin>>word1;
    cin>>word2;
    //compare how many character is equal
    for(int i=0;i<word1.length();i++){
        if(word1[i]==word2[i]){
            count++;
        }
        else{
            break;
        }
    }
    cout<<"The string match upto "<<count<<" index "<<endl;
    cout<<"Matching String :";
    for(int i=0;i<count;i++){
        cout<<word2[i];
    }
    cout<<endl;
    //strcmp()
    int word1_count=0;
    int word2_count=0;
    for(int i=0;i<word1.length();i++){
        word1_count++;
    }
    for(int i=0;i<word1.length();i++){
        word2_count++;
    }
    if(word1_count==word2_count){
        cout<<1+(rand()%5);
    }
    else{
        cout<<0;
    }
    cout<<endl;

    //strcpy
    string new_string;
    for(int i=0;i<word1.length();i++){
        new_string= new_string +word1[i];
    }
    cout<<"Copied string of "<<word1<<" = "<<new_string;
    cout<<endl;

    //array sorting
    char arr[]={'M','H','P','A','D','Z','T','G'};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j-1]>arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    cout<<"\nSorted Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
#include<bits/stdc++.h>
#include<iostream>    
#include<array> 
using namespace std;
void print(int arr[],int n)
{
    if(n>0){
        cout<<*arr;
        n--;
        print(arr+1,n);
    }
    

}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    // cout<<typeid(n);
    // int n=end(arr)-begin(arr);
    print(arr,n);

}
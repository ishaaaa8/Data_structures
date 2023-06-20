#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n,int i)
{
    if(i>=n){
        return;
    }
    cout<<a[i];
    print(a,n,i+1); //i++ post increment wont work because i will remain 0 everytime 0 will b copied so infinite loop will begin to avoi use ++i

    
}
void print_without_index(int a[],int n)
{
    if(n==0)
    {
        return;
    }
    cout<<*a<<" ";
    print_without_index(a+1,n-1);
}

int main(){
    int a[5]={8,1,3,4,5};
    int n=5;
    int i=0;
    // print(a,n,i);
    print_without_index(a,n);
} 


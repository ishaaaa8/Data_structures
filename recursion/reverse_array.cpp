#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n,int i)
{
    if(i>=n){
        return;
    }
   
    print(a,n,i+1); //i++ post increment wont work because i will remain 0 everytime 0 will b copied so infinite loop will begin to avoi use ++i
    cout<<a[i];
    
}


int main(){
    int a[5]={8,1,3,4,5};
    int n=5;
    int i=0;
    print(a,n,i);
} 


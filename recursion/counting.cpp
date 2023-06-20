#include<bits/stdc++.h>

using namespace std;
void count(int num)
{
    cout<<num<<" ";
    if(num==1)
        return;
    count(num-1);
}

int main(){
    int n;
    cout<<"pick n: "<<endl;
    cin>>n;
    count(n);
}
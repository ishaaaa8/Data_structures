
#include<bits/stdc++.h>

using namespace std;
int fact(int num)
{
    
    if(num==0)
        return 1;
    int f=num*fact(num-1);
    return f;
}

int main(){
    int n;
    cout<<"pick n: "<<endl;
    cin>>n;
    int f=fact(n);
    cout<<f;
}
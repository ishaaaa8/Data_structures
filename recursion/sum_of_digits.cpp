#include<bits/stdc++.h>

using namespace std;
int c=0;
int Count_no_of_digits(int num)
{
    if(num==0)
        return 0;
    c=c+(num%10);
    Count_no_of_digits(num/10);

    return c;
    
}

int main(){
    int n;
    cout<<"pick n: "<<endl;
    cin>>n;
    c=Count_no_of_digits(n);
    cout<<"number of digits: "<<c<<endl;
} 


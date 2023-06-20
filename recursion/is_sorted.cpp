// #include<bits/stdc++.h>
// using namespace std;
// bool is_sorted(int a[],int& n,int& i)
// {
//     if(i>=n){
//         return true;
//     }
//     if(a[i]>a[i+1]&& i+1!=n){
//         return false;
//     }
//     is_sorted(a,n,++i);
//     return true;
    

    
// }

// int main(){
//     int a[5]={9,8,3,4,5};
//     int n=5;
//     int i=0;
//     if(is_sorted(a,n,i)){
//         cout<<"sorted"<<endl;
//     }
//     else{
//         cout<<"unsorted"<<endl;
//     }
// } 
#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int a[],int& n,int i)
{
    if(i==n-1){
        return true;
    }
    if(a[i]>a[i+1]){
        return false;
    }
    is_sorted(a,n,i+1);
    return true;
    

    
}

int main(){
    int a[5]={1,1,4,5,6};
    int n=5;
    int i=0;
    if(is_sorted(a,n,i)){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"unsorted"<<endl;
    }
} 




// #include<bits/stdc++.h>
// using namespace std;
// int max_of_array(int a[],int n,int maxi)
// {
//     if(n==0){
//         return 0;
//     }
//     if(a[n-1]>maxi){
//         maxi=a[n-1];
//         // return 1;
//     }
//     int max_ele=max_of_array(a,n-1,maxi);
//     return max(max_ele,maxi);

    
// }

// int main(){
//     int a[5]={8,1,3,4,5};
//     int n=5;
//     int maxi=INT_MIN;
//     cout<<"max ele: "<<max_of_array(a,n,maxi);
// } 

//  notice the use of refernce variable in next code
// this stores the latest value if maxi at its original location

#include<bits/stdc++.h>
using namespace std;
int max_of_array(int a[],int n,int& maxi)
{
    if(n==0){
        return 0;
    }
    if(a[n-1]>maxi){
        maxi=a[n-1];
        // return 1;
    }
    max_of_array(a,n-1,maxi);
    // return max(max_ele,maxi);
    return maxi;

    
}

int main(){
    int a[5]={8,1,3,4,5};
    int n=5;
    int maxi=INT_MIN;
    cout<<"max ele: "<<max_of_array(a,n,maxi);
} 

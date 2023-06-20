#include<bits/stdc++.h>
using namespace std;
int bin_search(int a[],int& n,int& start, int& end,int target)
{
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(a[mid]==target){
        return mid;
    }
    // return (a[mid] > target)?return bin_search(a,n,start,mid-1,target):return bin_search(a,n,mid+1,end,target);
    else if(a[mid] > target){
        end=mid-1;
        return bin_search(a,n,start,end,target);
    }
    else{
        start=mid+1;
        return bin_search(a,n,start,end,target);
    }
    
    
}

int main(){
    int a[5]={0,2,3,5,6};
    int n=5;
    int s=0;
    int e=n-1;
    int target=5;
    int ans=bin_search(a,n,s,e,target);
    if(ans==-1){
        cout<<"not found";
    }
    else{
        cout<<" found";
    }
} 



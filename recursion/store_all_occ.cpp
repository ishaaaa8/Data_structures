#include<bits/stdc++.h>
using namespace std;
void store_index(string& str,int& n,int& i,char& key,vector<int>& ans)
{
    if(i>=n){
        
        return;
    }
    if(str[i]==key){
        // cout<<"present";
        ans.push_back(i);
        
    }
    return store_index(str,n,++i,key,ans);    

}

int main(){
    string str="isahaa";
    int n=6;
    int i=0;
    char key='a';
    vector<int> ans;
    store_index(str,n,i,key,ans);
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
} 




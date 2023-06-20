#include<bits/stdc++.h>
using namespace std;
int find_index(string& str,int& n,int& i,char& key)
{
    if(i>=n){
        
        return -1;
    }
    if(str[i]==key){
        // cout<<"present";
        return i;
        
    }
    return find_index(str,n,++i,key);

    

}

int main(){
    string str="isha";
    int n=4;
    int i=0;
    char key='a';
    int ans=find_index(str,n,i,key);
    if(ans==-1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found at : "<<ans<<endl;
    }
} 



  



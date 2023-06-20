#include<bits/stdc++.h>
using namespace std;
bool find_key(string& str,int& n,int& i,char& key)
{
    if(i>=n){
        
        return false;
    }
    if(str[i]==key){
        // cout<<"present";
        return true;
        
    }
    return find_key(str,n,++i,key);

    

}

int main(){
    string str="isha";
    int n=4;
    int i=0;
    char key='s';
    // find_key(str,n,i,key);
    if(find_key(str,n,i,key)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
} 



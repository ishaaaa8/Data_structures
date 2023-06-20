#include<bits/stdc++.h>
using namespace std;




void subsequences(string str,string output,int i)
{
    if(i>=str.size()){
        cout<<output<<endl;
        return;
    }
//    exclude
    subsequences(str,output,i+1); //++i would give wrong anwser
// include
    output.push_back(str[i]);
    subsequences(str,output,i+);

}

int main(){
    string str="abc";
    
    string output=" ";
    int i=0;
    return subsequences(str,output,i);
} 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool alpha [26] = {false};
    string str;
    getline(cin,str);
    int i=0;
    if(str.length()<26){
        cout<<"not pangram"<<endl;
        return 0;
    }
    while(str[i]){
       if(isalpha(str[i])){
           if(islower(str[i])){
               alpha[str[i]-'a'] = true;
           }else{
               alpha[str[i]-'A'] = true;
           }
       }
        ++i;
    }
    int cnt = 0;
    for(int i=0; i<26; ++i){
        if(alpha[i]){
            cnt++;
        }
    }
    // cout<<cnt<<endl;
    if(cnt==26){
        cout<<"pangram"<<endl;
    }else{
        cout<<"not pangram"<<endl;
    }
    return 0;
}

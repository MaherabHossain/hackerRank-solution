#include<bits/stdc++.h>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        string s1,s2;
        cin>>s1>>s2;

        bool alpha[26] = {false};

        for(int i=0; i<s1.length();++i){
            alpha[s1[i]-'a'] = true;
        }
        bool flag = true;
        for(int i=0; i<s2.length();++i){
            if(alpha[s2[i]-'a']){
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

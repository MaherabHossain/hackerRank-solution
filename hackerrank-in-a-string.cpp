#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        string str;
        cin>>str;
        int len = str.length();
        string main = "hackerrank";
        int lenh = main.length();
        if(lenh>len){
            cout<<"NO"<<endl;
            continue;
        }
        string temp = "";
        int k = 0;
        int j = 0;
        for(int i=0; i<lenh;++i){
            for(int j=k;j<len; ++j){
                if(main[i]==str[j]){
                    temp+=str[j];
                    k = j+1;
                    break;
                }
            }
        }
        if(temp==main){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

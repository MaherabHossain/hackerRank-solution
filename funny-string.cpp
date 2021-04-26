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
        int temp = len-1;
        int s ;
        int r ;
        bool flag = true;
        for(int i=0; i<len-1; ++i){
            s = abs(str[i]-str[i+1]);
            //cout<<"s "<<s<<endl;
            int t = temp-1;
            r = abs(str[temp]-str[t]);
           // cout<<"r "<<r<<endl;
            temp--;
            if(s!=r){
                flag = false;
                cout<<"Not Funny"<<endl;
                break;
            }
        }
        if(flag){
            cout<<"Funny"<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
    int kase;
    cin>>kase;
    string str[kase];
    for(int i=0; i<kase; ++i){
        cin>>str[i];
    }
    int q;
    cin>>q;

    string query;
    int res[q]={0};
    for(int i=0; i<q; ++i){
        cin>>query;
        for(int j=0; j<kase; ++j){
            if(query==str[j]){
                res[i]++;
            }

        }
        cout<<res[i]<<endl;
    }
    return 0;
}

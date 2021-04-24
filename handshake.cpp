#include<bits/stdc++.h>

using namespace std;

int main(){
    int kase;
    cin>>kase;
    while(kase--){
        int shake;
        cin>>shake;
        int res = 0;
        for(int i=1; i<shake; ++i){
            res += shake-i;
        }
        cout<<res<<endl;
    }
    return 0;
}

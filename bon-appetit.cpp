#include<bits/stdc++.h>

using namespace std;

int main(){
    int kase;
    cin>>kase;
    int ignore;
    cin>>ignore;
    int bill[kase];
    int total = 0;
    for(int i=0; i<kase; ++i){
        cin>>bill[i];
        if(ignore!=i){
            total+=bill[i];
        }
    }
    total/=2;

    int pay;
    cin>>pay;
    if(total==pay){
        cout<<"Bon Appetit"<<endl;
    }else{
        cout<<pay-total<<endl;
    }
    return 0;
}

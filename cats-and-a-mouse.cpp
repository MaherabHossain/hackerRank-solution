#include<bits/stdc++.h>


using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int catA,catB,mouse;
        int catAdiff,catBdiff;
        cin>>catA>>catB>>mouse;
        catAdiff = abs(catA-mouse);
        catBdiff = abs(catB-mouse);
        if(catAdiff == catBdiff){
            cout<<"Mouse C"<<endl;
        }
        else{
            if(catAdiff<catBdiff){
            cout<<"Cat A"<<endl;
        }else{
            cout<<"Cat B"<<endl;
        }
        }
    }


    return 0;
}

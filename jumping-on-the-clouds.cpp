#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int kase;
    cin>>kase;
    int cloud[kase];
    for(int i=0; i<kase; ++i){
        cin>>cloud[i];
    }
    int jump = 0;
    int i = 0;
    for( ; i<kase-1; ){
        // jump++;
        if(i+2 >=kase || cloud[i+2]==1){
            i++;
            jump++;
        }else{
            i+=2;
            jump++;
        }

    }
    cout<<jump<<endl;
}

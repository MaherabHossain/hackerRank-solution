#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int n;
        cin>>n;
        int row[n]={0};
        int coulmn [n] = {0};
        int container[n][n];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin>>container[i][j];
                row[i] += container[i][j];
                coulmn[j] += container[i][j];
            }
        }

        sort(row,row+n);
        sort(coulmn,coulmn+n);
        int flag = 1;
        for(int i=0; i<n; ++i){
            if(row[i] != coulmn[i]){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<"Possible"<<endl;
        }else{
            cout<<"Impossible"<<endl;
        }

    }
    return 0;
}

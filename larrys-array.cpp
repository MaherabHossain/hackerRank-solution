#include <bits/stdc++.h>

using namespace std;



int main()
{
    int kase;
    cin>>kase;
    while(kase--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i){
            cin>>arr[i];
        }
        // for(int i=0; i<n; ++i){
        //    cout<<arr[i];
        // }
        int cnt = 0;
        for(int i=0;i<n;++i){
            for(int j=i-1;j>=0; --j){
                if(arr[i]<arr[j]){
                    cnt++;
                }
            }
        }
        if(cnt%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n][n];
    int lsum = 0;
    int rsum = 0;
    int i,j;
    for( i=0; i<n; ++i){
        for( j=0; j<n; ++j){
            cin>>arr[i][j];
        }
        rsum += arr[i][j-i-1];
        lsum += arr[i][i]
    }
    int ans = abs(lsum-rsum);

    cout<<ans<<endl;
}

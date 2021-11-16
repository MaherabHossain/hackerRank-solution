#include<bits/stdc++.h>

using namespace std;


#define sf scanf
#define pf printf
#define pb push_back
#define ll long long
#define vi vector<int>

int main()
{
    int budget,k,u;
    cin>>budget>>k>>u;
    int keyboard[k],usb[u];
    for(int i=0; i<k; ++i)
    {
        cin>>keyboard[i];
    }
    for(int i=0; i<u; ++i)
    {
        cin>>usb[i];
    }
    vector<int> ans;
    for(int i=0; i<k; ++i)
    {
        for(int j=0; j<u; ++j)
        {
            int sum = keyboard[i]+usb[j];
            ans.pb(sum);
        }
    }
    sort(ans.begin(), ans.end());
    int count = 0;
    for(int i=ans.size()-1; i>=0; --i)
    {
        if(ans[i]<=budget)
        {
            cout<<ans[i]<<endl;
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<-1<<endl;
    }

    return 0;
}

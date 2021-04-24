#include<bits/stdc++.h>

using namespace std;
int arr[501][501];
int maxi(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}

int lcs(string x,string y){
    int xl = x.length();
    int yl = y.length();
    for(int i=0;i<=xl;++i){
        arr[i][0] = 0;
    }
    for(int i=0;i<=yl;++i){
        arr[0][i] = 0;
    }
    for(int i=1;i<=xl;i++)
    {
        for(int j=1;j<=yl;j++)
        {
            if(i==0 || j==0){
                arr[i][j] = 0;
            }
            if(x[i-1]==y[j-1])
            {
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else
            {
                arr[i][j]=maxi(arr[i-1][j],arr[i][j-1]);
            }

        }

    }




    return arr[xl][yl];

}

int main()
{
    string x,y;
    cin>>x>>y;
    int ans = lcs(x,y);
    cout<<ans<<endl;

    return 0;
}

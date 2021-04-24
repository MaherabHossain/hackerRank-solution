#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int arr1[3],arr2[3];
    while(cin>>arr1[0]>>arr1[1]>>arr1[2]){

        int bob = 0;
        int alice = 0;

        for(int i=0; i<3;++i){
            cin>>arr2[i];
            if(arr1[i]>arr2[i]){
                bob++;
            }
            else if(arr1[i]==arr2[i]){
                continue;
            }
            else if(arr1[i]<arr2[i]){
                alice++;
            }
        }

        cout<<bob<<" "<<alice<<endl;
    }

    return 0;
}

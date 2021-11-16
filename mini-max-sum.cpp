#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int num[5];
    for(int i=0; i<5;++i){
       cin>>num[i];
    }
    long long max =0;
    long long min = 0;
    for(int i=0; i<5;++i){
        long long sum = 0;
        for(int j=0;j<5;++j){
            if(i==j){
                continue;
            }else{
                sum += num[j];
            }
        }

        if(sum>max){
            max = sum;
        }
        if(i==0){
            min = max;
        }
        if(sum<min){
            min = sum;
        }
        sum = 0;
    }
    cout<<min<<" "<<max<<endl;
    //cout<<min<<endl;
    return 0;
}

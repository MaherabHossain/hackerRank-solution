#include <bits/stdc++.h>

using namespace std;


int main()
{
    int kase;
    cin>>kase;
    double t = kase;
    int posNumber = 0,negNumber = 0, zero = 0;
    int n;
    for(int i=0; i<kase;++i){
        cin>>n;
        if(n>0){
            posNumber++;
        }else if(n < 0){
            negNumber++;
        }else{
            zero++;
        }
    }
    
    printf("%lf\n",posNumber/t);
    printf("%lf\n",negNumber/t);
    printf("%lf\n",zero/t);
      
    
}

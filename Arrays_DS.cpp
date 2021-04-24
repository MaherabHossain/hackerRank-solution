
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int kase;
    while(scanf("%d",&kase)!=EOF){
        int arr[kase];

        for(int i=0; i<kase; ++i){
            scanf("%d",&arr[i]);

        }
        for(int i=kase-1; i>=0; i--){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}

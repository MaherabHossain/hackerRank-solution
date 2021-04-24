#include<bits/stdc++.h>

typedef long long ll;


using namespace std;

int main()
{
    int kase;

    while(scanf("%d",&kase)!=EOF){
        int arr[kase];
        int rotation;
        queue<int>q;
        scanf("%d",&rotation);
        for(int i=0; i<kase; ++i){
            scanf("%d",&arr[i]);
            q.push(arr[i]);
        }
        for(int i=0; i<rotation; ++i){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        int i=0;
        while(!q.empty()){
            printf("%d ",q.front());
            q.pop();
            ++i;
        }
        printf("\n");
    }


    return 0;
}




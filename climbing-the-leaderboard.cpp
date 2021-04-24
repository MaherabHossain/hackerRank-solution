#include<bits/stdc++.h>


using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
   int r;
   cin>>r;
   int ranked[r];
   for(int i=0; i<r; ++i){
       cin>>ranked[i];
   }
   int remove_ranked[r];
   int rem = 0;
   for(int i=0; i<r-1; ++i){
       if(ranked[i] != ranked[i+1]){
           remove_ranked[rem] = ranked[i];
           rem++;
       }
   }
   remove_ranked[rem++] = ranked[r-1];
   int p;
   cin>>p;
   int f;
   int player[p];
   for(int i=0; i<p; ++i){
       cin>>player[i];
       int flag = 0;
       for(int j=0; j<rem; ++j){
               if(player[i]<remove_ranked[j] ){
                   flag++;

               }
           }

       cout<<flag+1<<endl;
       flag = 0;


   }
   return 0;
}

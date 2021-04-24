#include<bits/stdc++.h>

using namespace std;

int main()
{
    int character;
    cin>>character;
    char c;
    // int cnt = 3;
    int number =  0;
    int s_c = 0;
    int l_c = 0;
    int u_c = 0;
    for(int i=1; i<=character; ++i){
        cin>>c;
        //printf("%d\n",c);
        if(c>=48 && c<=57){
            // cnt--;
            number++;
        }else if(c>=65 && c<=90){
            u_c++;
        }else if((c>=97 && c<=122)){
            l_c ++;
        }else{
            s_c ++;
        }
    }
    if(l_c>0) l_c = 1;
    if(u_c>0) u_c = 1;
    if(number>0) number = 1;
    if(s_c>0) s_c = 1;
    int need = 0;
    need += 4-(l_c+u_c+number+s_c);
    //cout<<need<<" "<< character<<endl;
    if(character<6){
        int c_need = 6-character;
        if(need<c_need){
            need = c_need;
        }

    }
    cout<<need<<endl;
}

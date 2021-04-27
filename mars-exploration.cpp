#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt = 0;
    int len = str.length();
    for(int i=0; i<len; i+=3){
        if(str[i] != 'S')cnt++;
        if(str[i+1] != 'O')cnt++;
        if(str[i+2] != 'S')cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

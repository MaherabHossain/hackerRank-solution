#include<bits/stdc++.h>

using namespace std;

int main()
{
    int character;
    cin>>character;
    int temp;
    string c;
    cin>>c;
    int rotate;
    cin>>rotate;
    if(rotate>26){
        rotate %= 26;
    }
    for(int i=0; i<c.length(); ++i){
        if(isalpha(c[i])){
            if(isupper(c[i])){
                temp = c[i]+rotate;
                //cout<<temp<<' ';
                if(temp>90){
                    temp -= 26;
                }
                cout<<char(temp);
            }else{
                 temp = c[i]+rotate;
                 //cout<<temp<<' ';
                if(temp>122){
                    temp -= 26;
                }
                cout<<char(temp);
            }
        }else{
            cout<<c[i];
        }

    }
    return 0;
}

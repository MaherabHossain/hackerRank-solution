
#include <bits/stdc++.h>

using namespace std;


string timeInWords(int h, int m) {
    string numbers[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
    string time;
    if(m<=30){
        if(m==0){
            time = numbers[h]+" o' clock";
        }
        else if(m==15){
            time = "quarter past "+numbers[h];
        }else if(m==30){
            time = "half past "+numbers[h];
        }
        else if(m==1){
            time = numbers[m]+" minute past "+numbers[h];
        }else{
            time = numbers[m]+" minutes past "+numbers[h];
        }
    }else{
        if(m==45){
            time = "quarter to "+numbers[h+1];
        }else if(m==59){
            time = numbers[60-m]+" minute to "+numbers[h+1];
            }else{
            time = numbers[60-m]+" minutes to "+numbers[h+1];
        }
    }
    return time;


}

int main()
{


    int h;
    cin >> h;
    int m;
    cin >> m;

    string result = timeInWords(h, m);

    cout << result << "\n";


    return 0;
}

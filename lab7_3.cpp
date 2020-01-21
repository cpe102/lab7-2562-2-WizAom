#include<iostream>
#include<string>
using namespace std;
int main(){
    int age,h,m;
    string stt="",stt1="UNFRIEND",stt2="FRIEND",stt3="MARRIED",stt4="BEST FRIEND",stt5="ONE-NIGHT-STAND";
    cout << "input Age :";
    cin >> age;
    if(age<=20){
        cout << "input Hiegh :";
        cin >> h;
        if(h<160) stt=stt1;
        else if (h<175) stt=stt2;
             else{
                cout << "input money :";
                cin >> m;
                if(m>69000000) stt=stt3;
                else stt=stt5;
            }

    }else if(age<30){
        cout << "input money :";
        cin >> m;
        if(m>10000000) stt=stt4;
        else stt=stt1;
    }else stt=stt1;
    cout << stt;
    return 0;
}
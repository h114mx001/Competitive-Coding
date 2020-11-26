#include <bits/stdc++.h>
using namespace std;
string numbers = "0123456789";
string lower_case = "abcdefghijklmnopqrstuvwxyz";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string special_characters = "!@#$%^&*()-+";
int main(){
    string inputString;
    int length;
    int res = 0;
    cin >> length;
    cin >> inputString;
    bool checking[4] = {false};
    if (length < 6){
        cout << 6 - length;
    }
    else{
        for (int i = 0; i < length; i++){
            if (numbers. find(inputString[i]) != std::string::npos) checking[0] = true;
            if (lower_case.find(inputString[i]) != std::string::npos) checking[1] = true;
            if (upper_case.find(inputString[i]) != std::string::npos) checking[2] = true;
            if (special_characters.find(inputString[i]) != std::string::npos) checking[3] = true;
        }
        for (int i = 0; i < 4; i++){
            cout << checking[i] << " ";
        }
    }

}
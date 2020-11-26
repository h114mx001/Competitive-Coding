#include <bits/stdc++.h>
using namespace std;
int main(){
    string camelCaseString;
    cin >> camelCaseString;
    int word = 1;
    for (int i = 0; i < camelCaseString.length(); i++){
        if (toupper(camelCaseString[i]) == int(camelCaseString[i])){
            word++;
        }
    }
    cout << word;
}
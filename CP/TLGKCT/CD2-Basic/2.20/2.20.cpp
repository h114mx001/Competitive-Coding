#include <bits/stdc++.h>
using namespace std;
vector <string> VT;
vector <string> VP;
string base3 = "012";
string decTo3(int decNum){
    string answer = "";
    int remainder = 0;
    while (decNum != 0){
        remainder = decNum % 3;
        answer += base3[remainder];
        decNum/=3;
    }
    return answer;
}
int main(){
    int n;
    cin >> n;
    VP.push_back(to_string(n));
    string weight = decTo3(n);
    int i = 0;
    while (i < weight.length()){
        if (weight[i] == '1'){
            VT.push_back("3^" + to_string(i));
        }
        else if (weight[i] == '2'){
            VP.push_back("3^" + to_string(i));
            n+=pow(3, i);
            weight = decTo3(n);
        }
        i++;
    }
    cout << VT.size() << " ";
    for (int i = 0; i < VT.size(); i++){
        cout << VT[i] << " ";
    }
    cout << "\n";
    cout << VP.size() << " ";
    for (int i = 0; i < VP.size(); i++){
        cout << VP[i] << " ";
    }

}
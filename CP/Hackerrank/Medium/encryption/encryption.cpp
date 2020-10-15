#include <bits/stdc++.h>
using namespace std;
string encryption (string inputString){
    int length = inputString.length();
    int rows = floor(sqrt(length));
    int cols = ceil(sqrt(length));
    if (rows*cols < length){
        if (rows < cols) rows++; else cols++;
    }
    char base[10][10];
    int stack = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            base[i][j] = inputString[stack];
            stack++;
        }
    }
    string answer = ""; 
    for (int j = 0; j < cols; j++){
        for (int i = 0; i < rows; i++){
            if (base[i][j] != ' '){
                if (i == rows - 1){
                    answer = answer + base[i][j] + ' ';
            }
            else{
                answer += base[i][j];
            }
            }
        }
    }
    if (answer[answer.length()-1] == ' '){
        answer.erase(answer.length() - 1);
    }
    return answer;
}
int main(){
    string s = "";
    cin >> s;
    cout << encryption(s);
}
#include <bits/stdc++.h>
using namespace std;
vector <int> numerator; 
vector <int> denominator;
int GCD(int x, int y){
    int t;
    while (y != 0){
        t = y;
        y = x % y;
        x = t;
    }
    return x;
}
void bubbleSort(){
    for (int i = 0; i < numerator.size(); i++){
        for (int j = i + 1; j < numerator.size(); j++){
            if (numerator[i]*denominator[j] - numerator[j]*denominator[i] > 0){
                swap(numerator[i],numerator[j]);
                swap(denominator[i],denominator[j]);
            }
        }
    }
}
int main(){
    int numerator_base = 0;
    int denominator_base;
    int stack = 0;
    int max = 1;
    int k = 0;
    cin >> denominator_base;
    cin >> k;
    for (int i = denominator_base; i >= 1; --i){
        while (numerator_base <= i){
            if (GCD(numerator_base,i) == 1 || numerator_base == 0){
                numerator.push_back(numerator_base);
                denominator.push_back(i);
                ++stack;
            }
            ++numerator_base;
        }
        numerator_base = 1;
    }
    bubbleSort();
    for (int i = 0; i < stack; i++){
        cout << numerator[i] << "/" << denominator[i] << " ";
    }
    cout << endl;
    cout << numerator[k-1] << "/" << denominator[k-1];
}
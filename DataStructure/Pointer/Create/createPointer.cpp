#include <bits/stdc++.h>
using namespace std;
string food = "pizza";
string* whereFood = &food;
int main(){
    cout << food << endl;
    cout << &food << endl; //address of normal variable
    cout << whereFood << endl;
    cout << *whereFood << endl;

    *whereFood = "beef";
    cout << *whereFood << endl;
}
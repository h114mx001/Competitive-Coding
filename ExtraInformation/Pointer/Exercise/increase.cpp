#include <bits/stdc++.h>
using namespace std; 
void increase (int &a)
{
    a++;
}
int main(){
    int a;
    cin >> a;
    increase(a);
    cout << a;
}
#include <bits/stdc++.h>
using namespace std;
int base[7] = {1,2,3,5,7,9};
int arr[12];
int n;
bool canGet;
int number = 0;
bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 
int returnNumber(int i){
    int number = 0;
    for (int j = i; j >= 1; --j){
        number += arr[j]*pow(10, i - j);
    }
    return number;
}
void printResult(){
    cout << returnNumber(n) << endl;
}
void Attempt(int i){
    for (int j = 0; j <= 5; j++){
        arr[i] = base[j];
        canGet = isPrime(returnNumber(i));
        if (canGet){
            if (i == n){
                printResult();
            }
            else Attempt(i+1);
        }
    }
}
int main(){
    freopen("task.out","w",stdout);
    cin >> n;
    Attempt(1);
}
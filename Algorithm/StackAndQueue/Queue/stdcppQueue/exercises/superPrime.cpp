#include <bits/stdc++.h>
using namespace std; 
int arr[7] = {1,2,3,5,7,9};
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
std::vector<int> superPrimeNumber(int n)
{
    vector <int> res;
    queue <int> number;
    for (int i = 2; i < 10; i++){
        if (isPrime(i)){
            number.push(i);
        }
    }
    while (!number.empty()){
        for (int i = 0; i <= 6; i++){
            int k = number.front()*10 + arr[i];
            if (isPrime(k) && k <= n){
                number.push(number.front()*10+arr[i]);
            }
        }
        res.push_back(number.front());
        number.pop();
    }
    return res;

}
int main(){
    vector <int> result = superPrimeNumber(30);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}
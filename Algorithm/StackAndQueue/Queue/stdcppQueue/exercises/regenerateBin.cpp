#include <bits/stdc++.h>
using namespace std;
vector <string> generateBinary(int n)
{
    vector<string> res;
	queue<string>q;
	q.push("1");
	while(n--){
        q.push(q.front() + '0');
        q.push(q.front() + '1');
        res.push_back(q.front());
        q.pop();
	}
    return res;
}
int main(){
    for (int i = 0; i < generateBinary(10).size(); i++){
        cout << generateBinary(10)[i] << " ";
    }
}

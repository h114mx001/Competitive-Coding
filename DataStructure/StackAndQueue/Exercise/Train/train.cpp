#include <bits/stdc++.h>
using namespace std;
stack <int> A;
stack <int> B;
vector <char> from;
vector <char> to;
queue <int> target;
int checkTarget = 0;
int checkA = 0;
int checkB = 0;
int n;
bool canGetResult = true;
void PrintStack(stack<int> s) 
{ 
    stack<int> temp; 
    while (s.empty() == false) 
    { 
        temp.push(s.top()); 
        s.pop(); 
    }    
    while (temp.empty() == false) 
    { 
        int t = temp.top(); 
        cout << t << " "; 
        temp.pop(); 
        s.push(t);   
    } 
    cout << endl;
} 
int main(){
    freopen("task.inp","r",stdin);
    freopen("task.out","w",stdout);
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        target.push(x);
    }
    for (int i = 1; i <= n; i++){
        A.push(1+n-i);
    }
    while (!target.empty()){
        // if (!A.empty()){
        //     if (target.front() == A.top()){
        //         from.push_back('A');
        //         to.push_back('C');
        //         target.pop();
        //         A.pop();
        //     }
        // }
        // else{
        //     if (target.front() != A.top()){
        //         from.push_back('A');
        //         to.push_back('B');       
        //         B.push(A.top());
        //         A.pop();
        //     }
        // }  
        // if (target.front() == B.top()){
        //     from.push_back('B');
        //     to.push_back('C');
        //     B.pop();
        //     target.pop();
        // } 
        while (target.front() == A.top() && A.top() != -99){
            from.push_back('A');
            to.push_back('C');
            target.pop();
            A.pop();
            if (A.empty()) A.push(-99);
        }
        while (target.front() != A.top() && A.top() != -99){
            from.push_back('A');
            to.push_back('B');       
            B.push(A.top());
            A.pop();
            if (A.empty()) A.push(-99);
        }
        while (target.front() == B.top() && B.top() != -99){
            from.push_back('B');
            to.push_back('C');
            B.pop();
            target.pop();
            if (B.empty()) B.push(-99);
        }
    }
    for (int i = 0; i < from.size(); i++){
        cout << from[i] << " => " << to[i] << endl;
    }
}
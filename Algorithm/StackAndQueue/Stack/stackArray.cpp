#include <bits/stdc++.h>
using namespace std;
int top = 0;
int myStack[100] = {0};
void push(int x){   
    if (top == 100){
        cout << "Your stack is full. Please pop some thing out.";
    }
    else{
        ++top;
        myStack[top] = x;
    }
}
int pop(){
    int result = 0;
    if (top == 0){
        cout << "Your stack is empty. Please push something in.";    
        return 0;
    }
    else{
        result = myStack[top];
        --top;
        return result;
    }
}
void printStack(){
    for (int i = 1; i <= top; i++){
        cout << myStack[i] << " ";
    }
    cout << endl;
}
int main(){
    for (int i = 1; i <= 10; i++){
        push(i);
    }
    printStack();
    cout << pop() << endl;
    printStack();
}
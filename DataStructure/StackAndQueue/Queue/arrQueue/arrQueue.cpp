#include <bits/stdc++.h>
using namespace std;
int arrQueue[100];
int rear = 0;
int front = 1;
void push(int x){
    if (rear == 100){
        cout << "Your queue is full. Please pop something out first";
    }
    else{
        ++rear;
        arrQueue[rear] = x;
    }
}
int pop(){
    if (front > rear){
        cout << "Your queue is empty. Please push something in first";
        return 0;
    }
    else{
        --rear;
        return arrQueue[rear+1];
    }
}
void showQueue(){
    for (int i = 1; i <= rear; i++){
        cout << arrQueue[i] << " ";
    }
}
int main(){
    int n, x;
    cout << "Enter the number of elements you want to push in the queue";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << "Enter what you want to push: ";
        cin >> x;
        push(x);
    }
    showQueue();
    x = pop();
    showQueue();
}
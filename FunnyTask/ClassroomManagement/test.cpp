#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
struct Students
{
    char name[20];
    char fromClass[5];
    char phoneNumber[12];
    double GPA;
};
Students arr[50];
void input(){
    int soluong;
    char inputName[20];
    char inputClass[5];
    char inputPhoneNumber[12];
    double inputGPA;
    cin >> soluong;
    for (int i = 1; i <= soluong; i++){
        scanf(" %[^\n]s",inputName);
        cin >> inputClass;
        cin >> inputPhoneNumber;
        cin >> inputGPA;
        if (inputName == "" || inputClass == "" || inputPhoneNumber == "" || inputGPA == 0){
            cout << "Chuan bi lai file theo quy tac: " << endl;
            cout << "<ten>" << endl;
            cout << "<lop>" << endl;
            cout << "<SDT>" << endl; 
            cout << "<TBM>" << endl;
            break;
        }
        strcpy(arr[i].name,inputName);
        cout << arr[i].name << endl;
        strcpy(arr[i].fromClass,inputClass);
        cout << arr[i].fromClass << endl;
        strcpy(arr[i].phoneNumber,inputPhoneNumber);
        cout << arr[i].phoneNumber << endl;
        arr[i].GPA = inputGPA;
        cout << arr[i].GPA << endl;
    }
}
int main(){
    freopen("class.inp","r",stdin);
    input();
}
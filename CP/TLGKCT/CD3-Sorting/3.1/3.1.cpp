#include <bits/stdc++.h>
using namespace std;
struct student{
    char name[30];
    double point;
};
student studentList[201];
int studentNum = 0;
void nameQuickSort(int key[], int left, int right){
    int i = left, j = right;
    string pivot = studentList[key[left + rand() % (right - left)]].name;
    while (i <= j){
        while (studentList[key[i]].name < pivot) ++i;
        while (studentList[key[j]].name > pivot) --j;
        if (i <= j){
            swap(key[i],key[j]);
            ++i;
            --j;
        }
    }
    if (left < j) nameQuickSort(key,left,j);
    if (i < right) nameQuickSort(key,i,right);
}
void pointQuickSort(int key[], int left, int right){
    int i = left, j = right;
    double pivot = studentList[key[left + rand() % (right - left)]].point;
    while (i <= j){
        while (studentList[key[i]].point < pivot) ++i;
        while (studentList[key[j]].point > pivot) --j;
        if (i <= j){
            swap(key[i],key[j]);
            ++i;
            --j;
        }
    }
    if (left < j) pointQuickSort(key,left,j);
    if (i < right) pointQuickSort(key,i,right);
}    
void input(){
    double tempPoint = 0.0;
    char tempName[30];
    freopen("studentlist.inp","r",stdin);
    cin >> studentNum;
    for (int i = 1; i <= studentNum; i++){
        scanf(" %[^\n]s",tempName);
        cin >> tempPoint;
        strcpy(studentList[i].name, tempName);
        studentList[i].point = tempPoint;
    }
}
void nameSort(){
    freopen("task.out","w",stdout);
    int key[201];
    for (int i = 1; i <= studentNum; i++){
        key[i] = i;
    }
    // nameQuickSort(key, 1, studentNum);
    for (int i = 1; i <= studentNum; i++){
        cout << i << ". " << studentList[key[i]].name << endl;
    }
}
void pointSort(){
    freopen("task.out","w",stdout);
    int key[201];
    for (int i = 1; i <= studentNum; i++){
        key[i] = i;
    }
    pointQuickSort(key, 1, studentNum);
    for (int i = 1; i <= studentNum; i++){
        cout << i << ". " << studentList[key[i]].name << ": " << studentList[key[i]].point << endl;
    }
}
int main(){
    input();
    pointSort();
}
#include <bits/stdc++.h>
using namespace std;
struct Students
{
    char name[20];
    char fromClass[5];
    char phoneNumber[12];
    double GPA;
};
Students studentList[50];
void inputFromFile(){
    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;
    cout << "Nhap danh sach tu file. " << endl;
    freopen("class.inp","r",stdin);
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
        strcpy(studentList[i].name,inputName);
        strcpy(studentList[i].fromClass,inputClass);
        strcpy(studentList[i].phoneNumber,inputPhoneNumber);
        studentList[i].GPA = inputGPA;
    }
    cout << "Nhap du lieu thanh cong!" << endl;
}
void inputFromKeyboard(){
    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;
    cout << "Nhap danh sach tu ban phim. " << endl;
    int soluong;
    char inputName[20];
    char inputClass[5];
    char inputPhoneNumber[12];
    double inputGPA;
    cout << "Nhap so luong hoc sinh can nhap: ";
    cin >> soluong;
    for (int i = 1; i <= soluong; i++){
        cout << "Nhap ten hoc sinh: ";    
        scanf(" %[^\n]s",inputName);
        cout << "Nhap lop cua hoc sinh: ";
        cin >> inputClass;
        cout << "Nhap so dien thoai: ";
        cin >> inputPhoneNumber;
        cout << "Nhap diem trung binh mon: ";
        cin >> inputGPA;
        strcpy(studentList[i].name,inputName);
        strcpy(studentList[i].fromClass,inputClass);
        strcpy(studentList[i].phoneNumber,inputPhoneNumber);
        studentList[i].GPA = inputGPA;
    }
    cout << "Nhap du lieu thanh cong!" << endl;
}
void print(){
    cout << "In danh sach. " << endl;
}
void search(){
    cout << "Tim kiem. " << endl;
}
void deleteWithConditions(){    
    cout << "Xoa voi dieu kien. " << endl;
}
void sorting(){
    cout << "Sap xep" << endl;
}
void directTo(){
    int choice;
    cout << "Nhap chuc nang ban lua chon: ";
    cin >> choice;
    switch (choice)
    {
    case 1:{
        inputFromKeyboard();
        break;
    }
    case 2:{
        inputFromFile();
        break;
    }
    case 3:{
        print();
        break;
    }
    case 4:{
        search();
        break;
    }
    case 5:{
        deleteWithConditions();
        break;
    }
    case 6:{
        sorting();
        break;
    }
    case 7:{
        {
        char direct;
        cout << "Thoat chuong trinh? (Y/N): ";
        cin >> direct;
        if (direct == 'Y'){
            cout << "Da thoat!";
        }
        else{
            directTo();     
        }
    }
        break;
    }
    default:
        {
            cout << "Ban da nhap mot so khong co trong list chuc nang! Vui long nhap lai!" << endl;
            directTo();
        }
    }
}
void Welcome(){
    cout << "----------------------------------------------------------------" << endl;
    cout << "|                                                              |" << endl;
    cout << "|        Chao mung den voi chuong trinh quan ly lop hoc!       |" << endl;
    cout << "| Lua chon mot trong cac so sau de chon chuc nang can su dung: |" << endl;
    cout << "| 1: Nhap danh sach hoc sinh tu ban phim.                      |" << endl;
    cout << "| 2: Nhap danh sach hoc sinh tu file.                          |" << endl;
    cout << "| 3: In ra danh sach hoc sinh.                                 |" << endl;
    cout << "| 4: Tim kiem hoc sinh.                                        |" << endl;
    cout << "| 5: Xoa theo dieu kien.                                       |" << endl;
    cout << "| 6: Sap xep danh sach hoc sinh.                               |" << endl;
    cout << "| 7: Thoat chuong trinh                                        |" << endl;
    cout << "|                                                              |" << endl;
    cout << "----------------------------------------------------------------" << endl;
    directTo();
}
int main(){
    Welcome();
}
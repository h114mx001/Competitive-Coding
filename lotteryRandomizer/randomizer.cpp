#include <bits/stdc++.h>
using namespace std;
void IOInit(){
    freopen("databaseTicket.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie();
}
int main(){
    IOInit();
    vector <string> owner;
    vector <int> IDarray;
    int tickets;
    cin >> tickets;
    for (int i = 0; i < tickets; i++){
        IDarray.push_back(i+1);
    }
    for (int i = 0; i < IDarray.size(); i++){
        int r = i + rand() % (IDarray.size() - i);
        swap(IDarray[i], IDarray[r]);
    }
    for (int i = 0; i < IDarray.size(); i++){
        string ticketID = to_string(IDarray[i]);
        while (ticketID.length() < 3){
            ticketID = '0' + ticketID;
        }
        cout << ticketID << "\n";
    }
}
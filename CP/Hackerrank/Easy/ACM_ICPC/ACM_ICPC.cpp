#include <bits/stdc++.h>
using namespace std;
int max = 0;
int n, m = 0;
vector<string> teams;
void IO(){
    // freopen("task.inp","r",stdin);
    // freopen("task.out","w",stdout);
    cin >> n >> m;
    string s; 
    for (int i = 1; i <= n; i++){
        cin >> s;
        teams.push_back(s);
    }
}
void acmTeam (vector<string>){
    int maxKnowledge = 0;
    int maxTeams = 0;
    int knowledge = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int k = 0; k < m; k++){
                if (teams[i][k] == '1' || teams[j][k] == '1'){
                    knowledge++;
                }
            }
            if (knowledge == maxKnowledge){
                maxTeams++;
            }
            else if (knowledge > maxKnowledge){
                maxTeams = 1;
                maxKnowledge = knowledge;
            }
            knowledge = 0;
        }  
    }
    cout << maxKnowledge << "\n" << maxTeams;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    IO();
    acmTeam(teams);
}
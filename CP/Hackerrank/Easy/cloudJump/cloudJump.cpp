#include <bits/stdc++.h>
using namespace std;
int cloud[25];
int numClouds, sizeJump = 0;
int jumpingOnClouds(){
    int energyPot = 100;
    int nowCloud = 0;
    do{
        nowCloud = (nowCloud + sizeJump) % numClouds;
        energyPot-=(cloud[nowCloud] + 1);
    }
    while (nowCloud != 0);
    return energyPot;
}
int main(){
    cin >> numClouds >> sizeJump;
    for (int i = 0; i < numClouds; i++){
        cin >> cloud[i];
        if (cloud[i] == 1) ++cloud[i];
    }
    cout << jumpingOnClouds();
}

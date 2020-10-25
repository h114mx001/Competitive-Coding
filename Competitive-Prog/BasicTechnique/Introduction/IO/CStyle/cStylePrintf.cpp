#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("task.out","w",stdout);

    //Integer
    int i = 2;
    double d = 0.2345;
    printf("This is an int: %d! \n", i); 
    printf("This is an int: %10d! \n", i); //but with 10 spaces after the colon
    printf("This is an int: %-10d! \n", i); //but with 10 spaces after the integer
    
    //Float
    double cost = 123.45;
    printf("Your total is $%f today \n", cost); //fixed notation
    printf("Your total is $%e today \n", cost); //exponential notation, which e+02 means 10^2;
    printf("Your total is $%.2f today \n", cost); //fixed notation, with 2 decimal places
    printf("Your total is $%9.2f today \n", cost); //like above, but 9 spaces after the $ sign

    //Character and String
    char letter = 'x';
    printf("This is a character *%c*\n",letter);
    printf("Output \n");
    printf("%s%10s%10s","A","B","C");
}
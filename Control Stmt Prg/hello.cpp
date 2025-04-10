// This program takes two integers as input and prints their sum.
/*
Algorithm:
1. Start the program.
2. Declare two integer variables 'n' and 'l' to store the input numbers.
3. Prompt the user to enter two integers and read them into 'n' and 'l'.
*/
#include<iostream>
using namespace std;
int main(){
    int n,l,sum;
    cout<<"enter the value of n and l";
    cin>>n>>l;
    sum = n + l;
    cout<<"sum of n and l is: "<<sum ;
    return 0;
}

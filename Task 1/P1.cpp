#include <bits/stdc++.h>
using namespace std;

void BuildPyramid(int n);

int main(){
    // prompt the user for the height of the pyramid (number of rows)
    int n;
    cin >>n;

    // calling the function
    for(int i = 0; i < n; i++){
        BuildPyramid(i);
        cout <<"\n";
    }
    return 0;
}

// function for build the pyramid
void BuildPyramid(int n){
    for(int i = 0; i < n+1; i++){
        cout << "*";
    }
}
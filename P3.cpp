#include <bits/stdc++.h>
using namespace std;

int main(){
    // the number of height measurements
    int n =0;
    cin >> n;
    // prompt the user for the height measurements
    int heights[n];
    for(int i =0; i < n; i++){
        cin >> heights[i];
    }
    // get the max height
    int maxHeight = heights[0];
    for(int i =1; i < n; i++){  //start from 1 instead of 0
        maxHeight =max(heights[i], maxHeight);
    }
    // print the max height
    cout << maxHeight;
    return 0;
}
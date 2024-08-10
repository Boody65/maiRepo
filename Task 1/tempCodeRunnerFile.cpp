#include <bits/stdc++.h>
using namespace std;

int main(){
    // the number of height measurements
    int n;
    cin >> n;
    // prompt the user for the height measurements
    int heights[n];
    for(int i =0; i < n; i++){
        cin >> heights[i];
    }
    // get the max height
    int maxHeight = heights[0];
    for(int i =0; i < n; i++){
        maxHeight =max(heights[i+1], maxHeight);
    }
    // print the max height
    cout << maxHeight <<endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    // the number of elements in the array.
    int n;
    cin >> n;
    // create the array
    int array[n];
    for(int i =0; i<n; i++){
        cin >> array[i];
    }

    // the target
    int target;
    cin >> target;

    // found boolen
    bool found = false;
    // counter variable
    int counter = 0;

    // search for the target
    for(int i = 0; i < n; i++){
        if(target == array[i]){
            found = true;
            break;
        }
        counter++;
        }
    
    // check if the target is found
    if(found){
        cout << counter;
    }
    else{
        cout <<-1;
    }
    return 0;
}

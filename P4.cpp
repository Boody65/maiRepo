#include <bits/stdc++.h>
using namespace std;

int main(){
    // Prompt the user for the rows and columns
    int r , c;
    do {
    cin >> r >> c;
    } while (r <= 0 || c <= 0);
    int Jleague[r][c];
    int Vleague[r][c];
    // Prompt the user for the justice league's array(justice league's power levels)
    for(int i =0; i<r; i++){ 
        for(int j=0; j<c; j++){
            cin >> Jleague[i][j];
        }
    }
    // Prompt the user for the villains's array(villains's power levels)
    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> Vleague[i][j];
        }
    }
    // counter variable
    int Jround =0, Vround =0;
    int Jcell =0 , Vcell =0;

    // compare power level(round)
    for(int i =0; i<r; i++){
        for(int j=0; j<c; j++){
            if(Jleague[i][j] > Vleague[i][j]){
                Jround +=1;
            }
            else if(Jleague[i][j] < Vleague[i][j]){
                Vround +=1;
            }
            else{
                Jround +=1;
                Vround +=1;
            }
        }
    }
    // compare power level(cell)
    if(Jround > Vround){
        Jcell +=1;
    }
    else if(Jround < Vround){
        Vcell +=1;
    }
    else{
        Jcell +=1;
        Vcell +=1;
    }
    // declare the winner
    if(Jcell > Vcell){
        cout <<"Justice League" <<endl;
    }
    else if(Jcell < Vcell){
        cout <<"Villains" <<endl;
    }
    else{
        cout <<"Tie" <<endl;
    }
    return 0;
}

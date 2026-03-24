#include <iostream>
#include <string>

using namespace std;

class GasBrands { // data storage system i can use to save data for each brand
    public: 

        float CurrentGasPrice; 
        float PreviousGasPrice; 
        float GasPriceDifference; // variable for when I subtract both years. 
    

};

int main () {

// Shell 

GasBrands Shell;
Shell.CurrentGasPrice = 2.70;
Shell.PreviousGasPrice = 2.80;

if (Shell.CurrentGasPrice < Shell.PreviousGasPrice) {

    Shell.GasPriceDifference = Shell.PreviousGasPrice - Shell.CurrentGasPrice;
} else if (Shell.CurrentGasPrice > Shell.PreviousGasPrice) {

    Shell.GasPriceDifference = Shell.CurrrentGasPrice - Shell.PreciousGasPrice;
}

// Shell.GasPriceDifference 


cout << "Shells Avg. Current Gas Price is : $" << Shell.CurrentGasPrice << "/gal" << endl;
cout << "Shells Avg. Previous Gas Price was: " << Shell.PreviousGasPrice << "/gal" << endl;

cout << "The Difference avg. is : " << 

    return 0;
}











/*

GPF Map

1. ask question
2. user inputs brand (invalid features)
3. system takes info from already made info of brand
4. displays info in a t chart/ board

Things I might need 

. Array
. Vector
. voids
. if loop
. class

When I want done

3/25/2026

*/


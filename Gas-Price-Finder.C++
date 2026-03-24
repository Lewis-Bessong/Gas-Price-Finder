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
Shell.GasPriceDifference = Shell.CurrentGasPrice - Shell.PreviousGasPrice;

 

cout << "Shells Current Gas Price Avg. is : $" << Shell.CurrentGasPrice << "/gal" << endl;
cout << "Shells Previous Gas Price Avg. was: " << Shell.PreviousGasPrice << "/gal" << endl;

cout << "The Gas Price Difference is : " << Shell.GasPriceDifference << endl;

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


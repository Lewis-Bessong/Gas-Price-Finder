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

// Add logic for gasprice difference here, if GPD is < 0 then print .... if else ....

cout << "Shells Current Gas Price Avg. is : $" << Shell.CurrentGasPrice << "/gal" << endl;
cout << "Shells Previous Gas Price Avg. was: " << Shell.PreviousGasPrice << "/gal" << endl;

cout << "The Gas Price Difference is : " << Shell.GasPriceDifference << endl;

//Exxon

GasBrands Exxon;
Exxon.CurrentGasPrice = 2.68;
Exxon.PreviousGasPrice = 2.78;
Exxon.GasPriceDifference = Exxon.CurrentGasPrice - Exxon.PreviousGasPrice;

//Mobil

GasBrands Mobil;
Mobil.CurrentGasPrice = 2.68;
Mobil.PreviousGasPrice = 2.78;
Mobil.GasPriceDifference = Mobil.CurrentGasPrice - Mobil.PreviousGasPrice;

//Chevron

GasBrands Chevron;
Chevron.CurrentGasPrice = 2.75;
Chevron.PreviousGasPrice = 2.85;
Chevron.GasPriceDifference = Chevron.CurrentGasPrice - Chevron.PreviousGasPrice;

//Chevron w/ texaco

GasBrands ChevTex;
ChevTex.CurrentGasPrice = 2.74;
ChevTex.PreviousGasPrice = 2.83;
ChevTex.GasPriceDifference = ChevTex.CurrentGasPrice - ChevTex.PreviousGasPrice;

// BP

GasBrands BP;
BP.CurrentGasPrice = 2.69;
BP.PreviousGasPrice = 2.79;
BP.GasPriceDifference = BP.CurrentGasPrice - BP.PreviousGasPrice;


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


#include <iostream>
#include <string>

using namespace std;

class GasBrands {
    public: 

        string CurrentGasPrice;
        string PreviousGasPrice;
    

};

int main () {

// Shell 

GasBrands Shell;
Shell.CurrentGasPrice = "$2.60 - $2.75";
Shell.PreviousGasPrice = "2.60 - 2.70";

cout << "Shells Current Gas Price is : " << Shell.CurrentGasPrice << " Per Gallon" << endl;
cout << "Shells Previous Gas Price is : " << Shell.PreviousGasPrice << " Per Gallon" << endl;

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


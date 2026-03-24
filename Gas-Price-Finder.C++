#include <iostream>
#include <string>

using namespace std;

class GasBrands {
    public: 

        float CurrentGasPrice;
        float PreviousGasPrice;

    

};

int main () {

// Shell 

GasBrands Shell;
Shell.CurrentGasPrice = 2.70;
Shell.PreviousGasPrice = 2.80;

cout << "Shells Avg. Current Gas Price is : $" << Shell.CurrentGasPrice << "/gal" << endl;
cout << "Shells Avg. Previous Gas Price was: " << Shell.PreviousGasPrice << "/gal" << endl;

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


#include <iostream>
#include <string> // tools for strings
#include <iomanip> // controls how numbers look when printed (like formatting, it stops raw repeatable numbers) 
#include <vector>


using namespace std;

class GasBrands { // data storage system i can use to save data for each brand
    public: 

        float CurrentGasPrice; 
        float PreviousGasPrice; 
        float GasPriceDifference; // variable for when I subtract both years. 



    

};

void SystemOutput() {

    cout << "Welcome to the Gas Price Finder!\n\n";

    cout << "These Are The Gas Station Brands We Have Data For Currently." << endl; // flushes out buffer
    cout << "* Shell\n";
    cout << "* Exxon\n";
    cout << "* Mobil\n";
    cout << "* Chevron\n";
    cout << "* ChevTex (Chevron w/ Texaco)\n";
    cout << "* BP" << endl;

    string UsersChoice;
    cout << "\n\nWhat Gas Station Brand Do You Chose: "; 
    cin >> UsersChoice;

};

vector <string>GasStationBrands = {"Shell", "Exxon", "Mobil", "Chevron", "ChevTex", "BP"};

int main () {

// Shell 

GasBrands Shell;
Shell.CurrentGasPrice = 2.70;
Shell.PreviousGasPrice = 2.80;
Shell.GasPriceDifference = Shell.CurrentGasPrice - Shell.PreviousGasPrice;
cout << fixed << setprecision(2); // shows only 2 digits after decimal place

//Exxon

GasBrands Exxon;
Exxon.CurrentGasPrice = 2.68;
Exxon.PreviousGasPrice = 2.78;
Exxon.GasPriceDifference = Exxon.CurrentGasPrice - Exxon.PreviousGasPrice;
cout << fixed << setprecision(2);

//Mobil

GasBrands Mobil;
Mobil.CurrentGasPrice = 2.68;
Mobil.PreviousGasPrice = 2.78;
Mobil.GasPriceDifference = Mobil.CurrentGasPrice - Mobil.PreviousGasPrice;
cout << fixed << setprecision(2);

//Chevron

GasBrands Chevron;
Chevron.CurrentGasPrice = 2.75;
Chevron.PreviousGasPrice = 2.85;
Chevron.GasPriceDifference = Chevron.CurrentGasPrice - Chevron.PreviousGasPrice;
cout << fixed << setprecision(2); 

//Chevron w/ texaco

GasBrands ChevTex;
ChevTex.CurrentGasPrice = 2.74;
ChevTex.PreviousGasPrice = 2.83;
ChevTex.GasPriceDifference = ChevTex.CurrentGasPrice - ChevTex.PreviousGasPrice;
cout << fixed << setprecision(2);

// BP

GasBrands BP;
BP.CurrentGasPrice = 2.69;
BP.PreviousGasPrice = 2.79;
BP.GasPriceDifference = BP.CurrentGasPrice - BP.PreviousGasPrice;
cout << fixed << setprecision(2); 

// === SYSTEM/LOGIC START ====


SystemOutput();

// Find out way to use vector as comparision chart and create it with a class.








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

Notes

. brainstorm idea for using vector, class, and comaprison chart with user input

*/


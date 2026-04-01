#include <iostream>
#include <string> // tools for strings
#include <iomanip> // controls how numbers look when printed (like formatting, it stops raw repeatable numbers) 
#include <vector>


using namespace std;

vector <string>GasStationBrand = {"Shell", "Exxon", "Mobil", "Chevron", "ChevTex", "BP"};

void SystemOutput() {

    cout << "Welcome to the Gas Price Finder!\n\n";

    cout << "This is the Gas Prices of Exxon In Texas.\n"; // flushes out buffer
    /*
    cout << "*" << GasStationBrand.at(0) << endl; // shell
    cout << "*" << GasStationBrand.at(1) << endl; // exxon
    cout << "*" << GasStationBrand.at(2) << endl; // Mobil
    cout << "*" << GasStationBrand.at(3) << endl; // chevron 
    cout << "*" << GasStationBrand.at(4) << endl; // Chev tex
    cout << "*" << GasStationBrand.at(5) << endl; // BP 
    */
};

void SystemBoard() {

cout << "           |           |           " << endl;
cout << "___________|___________|___________" << endl;
cout << "           |           |           " << endl;
cout << "           |           |           " << endl;

}

class GasPriceFinder { // blueprint for the system of GPF 
    public:
        // Attributes (Data/Variables)
        string GasStationName;
        double CurrentYrGas;
        double LastYrGas;      
        double GasYrsDifference;

        //Method (Actions/Functions)
        void GasAnalysis() {

            if (CurrentYrGas < LastYrGas){ // less than

                cout << "The avg. current year gas price is less than last years avg. gas price." << endl;

            } else if (CurrentYrGas > LastYrGas){ // greater than

                cout << "The avg. current year gas price is greater than last years avg. gas price ." << endl;
            } else { // equal

                cout << " The avg. current year gas is the same as last years avg. gas price." << endl;
            }

        }
        

    private:




};



int main () {
// === SYSTEM/LOGIC START ====

//Exxon
GasPriceFinder Exxon;

Exxon.GasStationName = "Exxon";
Exxon.CurrentYrGas = 3.40;
Exxon.LastYrGas = 2.75;

Exxon.GasAnalysis();





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


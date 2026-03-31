#include <iostream>
#include <string> // tools for strings
#include <iomanip> // controls how numbers look when printed (like formatting, it stops raw repeatable numbers) 
#include <vector>


using namespace std;

vector <string>GasStationBrand = {"Shell", "Exxon", "Mobil", "Chevron", "ChevTex", "BP"};

void SystemOutput() {

    cout << "Welcome to the Gas Price Finder!\n\n";

    cout << "These Are The Gas Station Brands We Have Data For Currently." << endl; // flushes out buffer

    cout << "*" << GasStationBrand.at(0) << endl; // shell
    cout << "*" << GasStationBrand.at(1) << endl; // exxon
    cout << "*" << GasStationBrand.at(2) << endl; // Mobil
    cout << "*" << GasStationBrand.at(3) << endl; // chevron 
    cout << "*" << GasStationBrand.at(4) << endl; // Chev tex
    cout << "*" << GasStationBrand.at(5) << endl; // BP 

    string UsersChoice;
    cout << "\n\nWhat Gas Station Brand Do You Chose: "; 
    cin >> UsersChoice;

};

void SystemBoard() {

cout << "       |       |       " << endl;
// where to put header titles like (Current gas and past gas)
cout << "_______|_______|_______" << endl;
cout << "       |       |       " << endl;
cout << "       |       |       " << endl;

}

class GasPriceFinder { // blueprint for the system of GPF 
    public:
        // Attributes (Data/Variables)
        float CurrentYrGas;
        float LastYrGas; 
        float GasYrsDifference; 

        //Method (Actions/Functions)
        void DifferenceSolver() {

        }
        

    private:




};



int main () {
// === SYSTEM/LOGIC START ====

SystemBoard();





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


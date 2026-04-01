#include <iostream>
#include <string> // tools for strings
#include <iomanip> // controls how numbers look when printed (like formatting, it stops raw repeatable numbers) 
#include <vector>

using namespace std;    

class GasPriceFinder { // blueprint for the system of GPF 
    public:
        // Attributes (Data/Variables)

        string PlayerChocie; 
        string GasStationName;
        double CurrentYrGas;
        double LastYrGas;      
        double GasYrsDifference;

        //Method (Actions/Functions)
        void GasAnalysis() { // Text for comaparing 

            if (CurrentYrGas < LastYrGas){ // less than

                cout << "The avg. current year gas price is less than last years avg. gas price." << endl;

            } else if (CurrentYrGas > LastYrGas){ // greater than

                cout << "The avg. current year gas price is greater than last years avg. gas price ." << endl;
            } else { // equal

                cout << " The avg. current year gas is the same as last years avg. gas price." << endl;
            }

        }

        void SystemOutput() { // what the user sees

            cout << "Welcome to the Gas Price Finder! (Thats Based on Texas, For now.)\n\n";

            cout << "These Are The Gas Brands That We Have Currently.\n\n";
    
            cout << "* Shell\n"; // shell
            cout << "* Exxon\n" ; // exxon
            cout << "* Mobil\n"; // Mobil
            cout << "* Chevron\n"; // chevron 
            cout << "* Chev Tex\n"; // Chev tex
            cout << "* BP" << endl; // BP 

            cout << "\nWhat Do You Chose? : ";
            cin >> PlayerChocie;

        }   
 
        void PlayerChocieLogic() {
            

        }

    private:
        

};


int main () {
    
    //Exxon
    GasPriceFinder Exxon;
    Exxon.GasStationName = "Exxon";
    Exxon.CurrentYrGas = 3.30;
    Exxon.LastYrGas = 2.70;

    // Shell
    GasPriceFinder Shell;
    Shell.GasStationName = "Shell";
    Shell.CurrentYrGas = 3.40;
    Shell.LastYrGas = 2.75;

    //chevron
    GasPriceFinder Chevron;
    Chevron.GasStationName = "Chevron";
    Chevron.CurrentYrGas = 3.45;
    Chevron.LastYrGas = 2.80;

    // Texaco w/ Chevron
    GasPriceFinder ChevTex;
    ChevTex.GasStationName = "ChevTex";
    ChevTex.CurrentYrGas = 3.40;
    ChevTex.LastYrGas = 2.70;

    //bp
    GasPriceFinder BP;
    BP.GasStationName = "BP";
    BP.CurrentYrGas = 3.25;
    BP.LastYrGas = 2.65;

    // For Method calling within the class
    GasPriceFinder gpf; 

    // === SYSTEM OUTPUT ===
    gpf.SystemOutput(); // for void inside class 

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



/*

Save For Later


void SystemBoard() { // to be continued later

    cout << "           |           |           " << endl;
    cout << "___________|___________|___________" << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;

}
*/

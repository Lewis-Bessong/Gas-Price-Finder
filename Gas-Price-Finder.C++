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

            cout << "Welcome to the Gas Price Finder! (Thats Based on Texas, For now.)\n";
            cout << "These Are The Gas Brands That We Have Currently.\n\n";
    
            cout << "1. Shell\n"; // shell
            cout << "2. Exxon\n" ; // exxon
            cout << "3. Mobil\n"; // Mobil
            cout << "4. Chevron\n"; // chevron 
            cout << "5. Chev Tex\n"; // Chev tex
            cout << "6. BP" << endl; // BP 

            cout << "\nWhat Do You Chose? : ";
            cin >> PlayerChocie;

        }   
 
        void PlayerChocieLogic() {

            if (PlayerChocie == GasNumber.at(0)) { // conditional for Shell (vector 0)
                cout << "\nLoading Shell Data...." << endl;

                ShellGasBrand data();
 
            } else if (PlayerChocie == GasNumber.at(1)) { //conditional for Exxon (vector 1)
                cout << "\nLoading Exxon Data...." << endl;

            } else if (PlayerChocie == GasNumber.at(2)) { //conditional for Mobil (vector 2)
                cout << "\nLoading Mobil Data...." << endl; 

            } else if (PlayerChocie == GasNumber.at(3)) { //conditional for Chevron (vector 3)
                cout << "\nLoading Chevron Data...." << endl;

            } else if (PlayerChocie == GasNumber.at(4)) { //conditional for Chev Tex (vector 4)
                cout << "\nLoading Chev Tex Data...." << endl;

            } else if (PlayerChocie == GasNumber.at(5)) { //conditional for BP (vector 5)
                cout << "\nLoading BP Data...." << endl;

            } else { // conditional for any other input by user 
                cout << "\nInvlaid Input." << endl;

            }

        }

    private:
        
        vector<string> GasNumber = { "1", "2", "3", "4", "5", "6"};
        
        // Nested Class for printing gas brand outputs in public class of Gas PRice Finder 
        class ShellGasBrand {
            public:
                void Data() {

                    cout << "This is Shell Data." << endl;

                }

            private:
                
        };
        
        
        

};

class ShellGasBrand {
    public:


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
    gpf.SystemOutput(); // void inside class
    gpf.PlayerChocieLogic(); // void inside class

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

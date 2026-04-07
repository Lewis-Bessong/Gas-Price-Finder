#include <iostream>
#include <string> // tools for strings
#include <iomanip> // controls how numbers look when printed (like formatting, it stops raw repeatable numbers) 
#include <vector>
#include <limits>

using namespace std;    

class GasPriceFinder { // blueprint for the system of GPF 
    public:
        // Attributes (Data/Variables)

        
        string PlayerChocie; 
        string GasStationName;
        double CurrentYrGas;
        double LastYrGas;      
        double GasYrsDifference;
        bool IsValid; // for user input 
        bool IsNotValid;


        //Method (Actions/Functions)
        void GasAnalysis() { // Text for comaparing 

            if (CurrentYrGas < LastYrGas){ // Current yr gas less than last yr gas 

                cout << "The avg. current year gas price is less than last years avg. gas price." << endl;

            } else if (CurrentYrGas > LastYrGas){ // Current yr gas greater than las yr gas

                cout << "The avg. current year gas price is greater than last years avg. gas price ." << endl;
            } else { // both years are equal

                cout << " The avg. current year gas is the same as last years avg. gas price." << endl;
            }

        }

        void SystemOutput() { // Method for what the user sees

            cout << "These Are The Gas Brands That We Have Currently.\n\n";
    
            cout << "1. Shell\n"; // shell
            cout << "2. Exxon\n" ; // exxon
            cout << "3. Mobil\n"; // Mobil
            cout << "4. Chevron\n"; // chevron 
            cout << "5. Chev Tex\n"; // Chev tex
            cout << "6. BP" << endl; // BP 

            cout << "\nInput A Number For Desired Gas Station: ";
            cin >> PlayerChocie;

        }   
 
        void PlayerChocieLogic() { // Method for Logic when User puts input\

            //Objects For Nested Class Shell
            ShellInfo Shell;
            Shell.GasStationName = "Shell";
            Shell.CurrentYrGas = 3.40;
            Shell.LastYrGas = 2.75;
            
            //Objects for Nested Class Exxon
            ExxonInfo Exxon;
            Exxon.GasStationName = "Exxon";
            Exxon.CurrentYrGas = 3.30;
            Exxon.LastYrGas = 2.70; 

            //Objects for Nested Class Mobil
            MobilInfo Mobil;

            //Objects for Nested clas Chevron
            ChevronInfo Chevron;
            Chevron.GasStationName = "Chevron";
            Chevron.CurrentYrGas = 3.45;
            Chevron.LastYrGas = 2.80; 

            //Objects for nested class Chev tex
            ChevTexInfo ChevTex;
            ChevTex.GasStationName = "ChevTex";
            ChevTex.CurrentYrGas = 3.40;
            ChevTex.LastYrGas = 2.70;

            //Objects for nested class BP
            BPInfo BP;
            BP.GasStationName = "BP";
            BP.CurrentYrGas = 3.25;
            BP.LastYrGas = 2.65;
            
            // Implement the logic system here

    
        }

    private: // non accesible
        
        vector<string> GasNumber = { "1", "2", "3", "4", "5", "6"}; // used for Playerchoicelogic (method), 1(0) being Shell

        // Nested Class's For Each Gas Station info

        class ShellInfo {
            public:

                // Attributes  
                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                // Methods
                void GasInfo() {

                }

        };

        class ExxonInfo {
            public:

                // Attributes
                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                // Methods
                void GasInfo() {

                }

        };

        class MobilInfo {
            public:

                // Attributes
                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                // Methods
                void GasInfo() {

                }

        };

        class ChevronInfo {
            public:

                // Attributes
                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;
            
                // Methods
                void GasInfo() {

                }

        };

        class ChevTexInfo {
            public:

                // Attributes
                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                // Methods
                void GasInfo() {

                }

        };

        class BPInfo {
            public:

                // Attributes
                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                // Methods
                void GasInfo() {

                }

        };

};


int main () { // Where All code will run

    // For Method calling within the class
    GasPriceFinder gpf;

    // === SYSTEM OUTPUT ===

    cout << "Welcome to the Gas Price Finder! (Thats Based on Texas, For now.)\n";

    gpf.SystemOutput(); // void inside class
    gpf.PlayerChocieLogic(); // void inside class

    return 0;
}


/*

GPF Plan 

1. ask question
2. user inputs brand (invalid features)
3. system takes info from already made info of brand
4. displays info in a t chart/ board (future)

TODO:

1. Find out plan for Gas Difference within code
2. Logic for doing gas difference
3. Experiment iwht do while code
*/


/*

Save For Later


void SystemBoard() { // to be continued later

    cout << "           |           |           " << endl;
    cout << "___________|___________|___________" << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;

}



if (PlayerChocie == GasNumber.at(0)) { // conditional for Shell (vector 0)

    cout << "\nCurrent Year Avg: $" << Shell.CurrentYrGas << "/gal\n";
    cout << "Last Year Avg: $" << Shell.LastYrGas << "/gal\n";

} else if (PlayerChocie == GasNumber.at(1)) { //conditional for Exxon (vector 1)
                
    cout << "\nCurrent Year Avg: $" << Exxon.CurrentYrGas << "/gal\n";
    cout << "Last Year Avg: $" << Exxon.LastYrGas << "/gal\n";

} else if (PlayerChocie == GasNumber.at(2)) { //conditional for Mobil (vector 2)
                
    cout << "\nCurrent Year Avg: $" << Mobil.CurrentYrGas << "/gal\n";
    cout << "Last Year Avg: $" << Mobil.LastYrGas << "/gal\n";

} else if (PlayerChocie == GasNumber.at(3)) { //conditional for Chevron (vector 3)
                
    cout << "\nCurrent Year Avg: $" << Chevron.CurrentYrGas << "/gal\n";
    cout << "Last Year Avg: $" << Chevron.LastYrGas << "/gal\n";

} else if (PlayerChocie == GasNumber.at(4)) { //conditional for Chev Tex (vector 4)
                
    cout << "\nCurrent Year Avg: $" << ChevTex.CurrentYrGas << "/gal\n";
    cout << "Last Year Avg: $" << ChevTex.LastYrGas << "/gal\n";

} else if (PlayerChocie == GasNumber.at(5)) { //conditional for BP (vector 5)
                
    cout << "\nCurrent Year Avg: $" << BP.CurrentYrGas << "/gal\n";
    cout << "Last Year Avg: $" << BP.LastYrGas << "/gal\n";

} else { // conditional for any other input by user 
    cout << "\nInvlaid Input...\n";
    cout << "Please Make Sure To ONLY Enter a number.\n\n";
    
}
*/

#include <iostream>
#include <string> // tools for strings
#include <iomanip> // controls how numbers look when printed (like formatting, it stops raw repeatable numbers) 
#include <vector>

using namespace std;    

class GasPriceFinder { // blueprint for the system of GPF 

    public: // accessible to main
        // === Attributes (Data/Variables) ===
        
        string UserChoice; 
        string GasStationName;
        double CurrentYrGas;
        double LastYrGas;      
        double GasYrsDifference;
        bool IsValid; // for user input 
        bool IsNotValid;

        // ==== Method (Actions/Functions) ====

        void GasAnalysis() { // Text/Logic for comaparing Gas prices by year 

            if (CurrentYrGas < LastYrGas){ // Current yr gas less than last yr gas 

                cout << "The avg. current year gas price is less than last years avg. gas price." << endl;

            } else if (CurrentYrGas > LastYrGas){ // Current yr gas greater than las yr gas

                cout << "The avg. current year gas price is greater than last years avg. gas price ." << endl;
            } else { // both years are equal

                cout << " The avg. current year gas is the same as last years avg. gas price." << endl;
            }

        }

        void SystemOutput() { // What the user sees (Method)

            cout << "These Are The Gas Brands That We Have Currently.\n\n";
    
            cout << "1. Shell\n"; // shell
            cout << "2. Exxon\n" ; // exxon
            cout << "3. Mobil\n"; // Mobil
            cout << "4. Chevron\n"; // chevron 
            cout << "5. Chev Tex\n"; // Chev tex
            cout << "6. BP" << endl; // BP 

            cout << "\nInput A Number For Desired Gas Station: ";
            cin >> UserChoice;

        }   
 
        void UserChoiceLogic() { // Logic when User puts input and Where Gas Brand Info is (Method)

            // ==== Objects/Instances For Gas Brands ====

            //Class Shell
            ShellInfo Shell;
            Shell.GasStationName = "Shell";
            Shell.CurrentYrGas = 3.40;
            Shell.LastYrGas = 2.75;
            
            //Class Exxon
            ExxonInfo Exxon;
            Exxon.GasStationName = "Exxon";
            Exxon.CurrentYrGas = 3.30;
            Exxon.LastYrGas = 2.70; 

            //Class Mobil
            MobilInfo Mobil;
            Mobil.GasStationName = "Mobil"; 
            Mobil.CurrentYrGas = 2.70;
            Mobil.LastYrGas = 3.32;

            //Clas Chevron
            ChevronInfo Chevron;
            Chevron.GasStationName = "Chevron";
            Chevron.CurrentYrGas = 3.45;
            Chevron.LastYrGas = 2.80; 

            //Class Chev tex
            ChevTexInfo ChevTex;
            ChevTex.GasStationName = "ChevTex";
            ChevTex.CurrentYrGas = 3.40;
            ChevTex.LastYrGas = 2.70;

            //Class BP
            BPInfo BP;
            BP.GasStationName = "BP";
            BP.CurrentYrGas = 3.25;
            BP.LastYrGas = 2.65;

            // Class
            

            // ==== User Input Logic ====

            bool UserInput = false; //find out what this does

            if (UserChoice == GasNumber.at(0)) { // conditional for Shell (vector 0)

                cout << "\nCurrent Year Avg: $" << Shell.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Shell.LastYrGas << "/gal\n";

            } else if (UserChoice == GasNumber.at(1)) { //conditional for Exxon (vector 1)
                
                cout << "\nCurrent Year Avg: $" << Exxon.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Exxon.LastYrGas << "/gal\n";

            } else if (UserChoice == GasNumber.at(2)) { //conditional for Mobil (vector 2)
                
                cout << "\nCurrent Year Avg: $" << Mobil.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Mobil.LastYrGas << "/gal\n";

            } else if (UserChoice == GasNumber.at(3)) { //conditional for Chevron (vector 3)
                
                cout << "\nCurrent Year Avg: $" << Chevron.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Chevron.LastYrGas << "/gal\n";

            } else if (UserChoice == GasNumber.at(4)) { //conditional for Chev Tex (vector 4)
                
                cout << "\nCurrent Year Avg: $" << ChevTex.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << ChevTex.LastYrGas << "/gal\n";

            } else if (UserChoice == GasNumber.at(5)) { //conditional for BP (vector 5)
                
                cout << "\nCurrent Year Avg: $" << BP.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << BP.LastYrGas << "/gal\n";

            } else { // conditional for any other input by user 
                
                do { // does this first before trying to check for while
                    cout << "\nInvalid.\n";
                    cout << "Please enter numbers that match the gas numbers in the lsit." << endl;

                    cout << "\nInput A Number For Desired Gas Station: ";
                    cin >> UserChoice;

                    UserChoiceLogic(); // same logic again.

                    // break line here?? 

                } while (UserInput); 

            }
        }

    private: // non accesible to main
        
        vector<string> GasNumber = { "1", "2", "3", "4", "5", "6"}; // used for UserChoicelogic (method)

        // ==== Nested Class's with Gas Brand Info/Attributes Inside ====

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


int main () { // Where All code will run and be visible to user

    // For Method calling within the class
    GasPriceFinder gpf;

    // === SYSTEM OUTPUT ===

    cout << "Welcome to the Gas Price Finder! (Thats Based on Texas, For now.)\n";

    gpf.SystemOutput(); // void inside class
    gpf.UserChoiceLogic(); // void inside class
    // Method/system for comapring gas prices ??


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
3. Understand the UCL (UserChocieLogic)
4. Make code easy to read and understandable
5. Add object info for mobil

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

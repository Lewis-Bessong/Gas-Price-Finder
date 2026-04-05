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

            if (CurrentYrGas < LastYrGas){ // Current yr gas less than last yr gas 

                cout << "The avg. current year gas price is less than last years avg. gas price." << endl;

            } else if (CurrentYrGas > LastYrGas){ // Current yr gas greater than las yr gas

                cout << "The avg. current year gas price is greater than last years avg. gas price ." << endl;
            } else { // both years are equal

                cout << " The avg. current year gas is the same as last years avg. gas price." << endl;
            }

        }

        void SystemOutput() { // Method for what the user sees

            cout << "Welcome to the Gas Price Finder! (Thats Based on Texas, For now.)\n";
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
            


            if (PlayerChocie == GasNumber.at(0)) { // conditional for Shell (vector 0)

                Shell.GasInfo();

            } else if (PlayerChocie == GasNumber.at(1)) { //conditional for Exxon (vector 1)
                
                Exxon.GasInfo();

            } else if (PlayerChocie == GasNumber.at(2)) { //conditional for Mobil (vector 2)
                
                Mobil.GasInfo();

            } else if (PlayerChocie == GasNumber.at(3)) { //conditional for Chevron (vector 3)
                
                Chevron.GasInfo();

            } else if (PlayerChocie == GasNumber.at(4)) { //conditional for Chev Tex (vector 4)
                
                ChevTex.GasInfo();

            } else if (PlayerChocie == GasNumber.at(5)) { //conditional for BP (vector 5)
                
                BP.GasInfo();

            } else { // conditional for any other input by user 
                cout << "\nInvlaid Input." << endl;

            }

        }

    private: // non accesible
        
        vector<string> GasNumber = { "1", "2", "3", "4", "5", "6"}; // used for Playerchoicelogic (method)

        // Nested Class's For Gas Station info

        class ShellInfo {
            public:

                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                void GasInfo() {

                    cout << "Shell Info";

                }

        };

        class ExxonInfo {
            public:

                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                void GasInfo() {

                    cout << "Exxon Info" << endl;
                }

        };

        class MobilInfo {
            public:

                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                void GasInfo() {

                    cout << "Mobil Info " << endl;
                }

        };

        class ChevronInfo {
            public:

                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                void GasInfo() {

                    cout << "Chevron Info" << endl;
                }

        };

        class ChevTexInfo {
            public:

                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                void GasInfo() {

                    cout << "Chev Tex Info." << endl;
                }

        };

        class BPInfo {
            public:

                string PlayerChocie; 
                string GasStationName;
                double CurrentYrGas;
                double LastYrGas;      
                double GasYrsDifference;

                void GasInfo() {

                    cout << "BP Info" << endl;
                }

        };

};


int main () {
    
    //Exxon
    GasPriceFinder Exxon;

    // Shell
    GasPriceFinder Shell;

    //chevron
    GasPriceFinder Chevron;
    

    // Texaco w/ Chevron
    GasPriceFinder ChevTex;

    //bp
    GasPriceFinder BP;

    // For Method calling within the class
    GasPriceFinder gpf;

    // === SYSTEM OUTPUT ===
    gpf.SystemOutput(); // void inside class
    gpf.PlayerChocieLogic(); // void inside class

    return 0;
}











/*

GPF Plan 

1. ask question
2. user inputs brand (invalid features)
3. system takes info from already made info of brand
4. displays info in a t chart/ board

TODO:

1. find way to display gas data when user inputs chocie (Almsot Done, maybe has to do with voids and nested class)
2. Implement objects for nested class into PlayerChocieLogic void
3. Make Sure Code is understandable and readable (Better comments, better layout, ect.)

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

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

        // ==== Method (Actions/Functions) ====

        void GasAnalysis() { // Text/Logic for comaparing Gas prices by year 

            // code below can have incorrect comaprisons (something to do with variables), Gasyrsdifferences not being displayed properly
            // might need to put GasAnalysis in each nested calss instead
            

            

        }

        void SystemOutput() { // What the user sees (Method)

            cout << "These Are The Gas Brands That We Have Currently.\n\n";
    
            cout << "1. Shell\n"; // shell
            cout << "2. Exxon\n" ; // exxon
            cout << "3. Mobil\n"; // Mobil
            cout << "4. Chevron\n"; // chevron 
            cout << "5. Chev Tex (Texaco)\n"; // Chev tex
            cout << "6. BP" << endl; // BP 

            cout << "\nInput A Number For Desired Gas Station: ";
            cin >> UserChoice;

        }   
 
        void UserChoiceLogic() { // Logic For User input and Where Gas Brand Info is (Method)



            // ==== Objects/Instances For Gas Brands ====

            //Class Shell
            ShellInfo Shell;
            Shell.GasStationName = "Shell";
            Shell.CurrentYrGas = 3.40;
            Shell.LastYrGas = 2.75;
            Shell.GasYrsDifference;
            
            //Class Exxon
            ExxonInfo Exxon;
            Exxon.GasStationName = "Exxon";
            Exxon.CurrentYrGas = 3.30;
            Exxon.LastYrGas = 2.70;
            Exxon.GasYrsDifference;

            //Class Mobil
            MobilInfo Mobil;
            Mobil.GasStationName = "Mobil"; 
            Mobil.CurrentYrGas = 2.70;
            Mobil.LastYrGas = 3.32;
            Mobil.GasYrsDifference;

            //Clas Chevron
            ChevronInfo Chevron;
            Chevron.GasStationName = "Chevron";
            Chevron.CurrentYrGas = 3.45;
            Chevron.LastYrGas = 2.80;
            Chevron.GasYrsDifference;

            //Class Chev tex
            ChevTexInfo ChevTex;
            ChevTex.GasStationName = "ChevTex";
            ChevTex.CurrentYrGas = 3.40;
            ChevTex.LastYrGas = 2.70;
            ChevTex.GasYrsDifference;

            //Class BP
            BPInfo BP;
            BP.GasStationName = "BP";
            BP.CurrentYrGas = 3.25;
            BP.LastYrGas = 2.65;
            BP.GasYrsDifference;

            // Upcoming Gas Class Here
            

            // ==== User Input Logic ==== (Future Change of logic to switch flow statments)

            bool UserInput = false; //find out what this does

            if (UserChoice == GasNumber.at(0)) { // conditional for Shell (vector 0)

                Shell.GasYrsDifference = Shell.CurrentYrGas - Shell.LastYrGas; // calculation for how much prices have changed by

                cout << "\nCurrent Year Avg: $" << Shell.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Shell.LastYrGas << "/gal\n";
                cout << "Difference: " << Shell.GasYrsDifference << "$" << endl; // Shows Diffrence to user

            } else if (UserChoice == GasNumber.at(1)) { //conditional for Exxon (vector 1)

                Exxon.GasYrsDifference = Exxon.CurrentYrGas - Exxon.LastYrGas;
                
                cout << "\nCurrent Year Avg: $" << Exxon.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Exxon.LastYrGas << "/gal\n";
                cout << "Difference: " << Exxon.GasYrsDifference << "$" << endl;


            } else if (UserChoice == GasNumber.at(2)) { //conditional for Mobil (vector 2)

                Mobil.GasYrsDifference = Mobil.CurrentYrGas - Mobil.LastYrGas;
                
                cout << "\nCurrent Year Avg: $" << Mobil.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Mobil.LastYrGas << "/gal\n";
                cout << "Difference: " << Mobil.GasYrsDifference << "$" << endl;

            } else if (UserChoice == GasNumber.at(3)) { //conditional for Chevron (vector 3)

                Chevron.GasYrsDifference = Chevron.CurrentYrGas - Chevron.LastYrGas;
                
                cout << "\nCurrent Year Avg: $" << Chevron.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << Chevron.LastYrGas << "/gal\n";
                cout << "Difference: " << Chevron.GasYrsDifference << "$" << endl;

            } else if (UserChoice == GasNumber.at(4)) { //conditional for Chev Tex (vector 4)

                ChevTex.GasYrsDifference = ChevTex.CurrentYrGas - ChevTex.LastYrGas;
                
                cout << "\nCurrent Year Avg: $" << ChevTex.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << ChevTex.LastYrGas << "/gal\n";
                cout << "Difference: " << ChevTex.GasYrsDifference << "$" << endl;

            } else if (UserChoice == GasNumber.at(5)) { //conditional for BP (vector 5)

                BP.GasYrsDifference = BP.CurrentYrGas - BP.LastYrGas;
                
                cout << "\nCurrent Year Avg: $" << BP.CurrentYrGas << "/gal\n";
                cout << "Last Year Avg: $" << BP.LastYrGas << "/gal\n";
                cout << "Difference: " << BP.GasYrsDifference << "$" << endl;

            } else { // conditional for any other input by user 
                
                do { // does this first before trying to check for while
                    cout << "\nInvalid Input...\n";
                    cout << "Please enter numbers that match the gas numbers in the list." << endl;

                    cout << "\nInput A Number For Desired Gas Station: ";
                    cin >> UserChoice;

                    UserChoiceLogic(); // same logic again.

                    break; // get out of whole loop end else loop for next void/method within main

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
                void GasInfo() { // possible use for gas analysis in here

                }

            private:

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
                void GasInfo() { // possible use for gas analysis in here


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

    gpf.SystemOutput(); // void inside gpf class
    gpf.UserChoiceLogic(); // void inside gpf class
    gpf.GasAnalysis(); // void inside gpf class

    // Method/system for comapring gas prices ??


    return 0;
}


/*

GPF Plan (4/10/2026)

1. ask question
2. user inputs brand (invalid features)
3. system takes info from already made info of brand
4. displays info in a t chart/ board (future)

TODO:

1. Fix output in 'GasAnalysis' (figure out how to display gas difference in gas anaylsis) 
2. Better user of dollar sign for difference 
3. Understand the UCL (UserChocieLogic)
4. Make code easy to read and understandable
5. 

*/


/*

Save For Later


void SystemBoard() { // to be continued later

    cout << "           |           |           " << endl;
    cout << "___________|___________|___________" << endl;
    cout << "           |           |           " << endl;
    cout << "           |           |           " << endl;

}

if (CurrentYrGas < LastYrGas){ // Current yr gas less than last yr gas 

                cout << "\nAnalysis: Current year gas price are LESS than last years gas price by -" << GasYrsDifference << "." << endl;

            } else if (CurrentYrGas > LastYrGas){ // Current yr gas greater than las yr gas

                cout << "\nAnalysis: Current year gas prices are GREATER than last years gas price by +" << GasYrsDifference << "." << endl;

            } else { // both years are equal

                cout << "\nAnalysis: Both years have the same prices." << endl;
            }
*/

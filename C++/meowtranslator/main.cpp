#include <iostream>
#include <string>
#include "translator.hpp"

using namespace std;

// start main function here
int
main()
{
    string final;
    string inpfile;
    string choice;
    string outpfile;

    cout << "Scuffed as hell text file to cat morse translator" << endl;
    cout << endl;
    cout << "[t]ranslate into text file or" << endl; 
    cout << "translate and [p]rint result: " ; cin >> choice;

    if (choice == "t")
    {       
        cout << "type the full path of the file you want to translate: "; cin >> inpfile;
        final = translate(inpfile);
        cout << "type the full path to the file you want to save to: "; cin >> outpfile;
        
        ofstream saveto;
        saveto.open(outpfile);

        saveto << final;
        cout << "done" << endl;

        return 0;
    } else if (choice == "p")
    {
        cout << "type the full path of the file you want to translate: "; cin >> inpfile;
        final = translate(inpfile); 
        cout << final << endl;
        cout << endl;
        cout << "done" << endl;
    }
    
    
}

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

string 
translate(string infile) 
{
    string ch;
    string textToChange;
    string newText;

    ifstream readfromfile; 
    readfromfile.open(infile); 

    const char letters[37] = { 
                               ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 
                               'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 
                               'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' 
                             };
                            
    const string morseLetters[37] = {
                                        "    ", "ME,MEOW", "MEOW,ME,ME,MEOW", "MEOW,ME,MEOW,ME", "MEOW,ME,ME", "ME", "ME,ME,MEOW", "MEOW,MEOW,ME", "ME,ME,ME,ME", "ME,ME", 
                                        "ME,MEOW,MEOW,MEOW", "MEOW,ME,MEOW", "ME,MEOW,ME,ME",  "MEOW,MEOW", "MEOW,ME", "MEOW,MEOW,MEOW", "ME,MEOW,MEOW,ME", "MEOW,MEOW,ME,MEOW", 
                                        "ME,MEOW,ME", "ME,ME,ME", "MEOW", "ME,ME,MEOW", "ME,ME,ME,MEOW", "ME,MEOW,MEOW", "MEOW,ME,ME,MEOW", "MEOW,ME,MEOW,MEOW", 
                                        "MEOW,MEOW,ME,ME", "ME,MEOW,MEOW,MEOW,MEOW", "ME,ME,MEOW,MEOW,MEOW", "ME,ME,ME,MEOW,MEOW", "ME,ME,ME,ME,MEOW", "ME,ME,ME,ME,ME", "MEOW,ME,ME,ME,ME",
                                        "MEOW,MEOW,ME,ME,ME", "MEOW,MEOW,MEOW,ME,ME", "MEOW,MEOW,MEOW,MEOW,ME", "MEOW,MEOW,MEOW,MEOW,MEOW"
                                    };
    
    
    if (readfromfile.is_open())
    {
        while (readfromfile) 
        {
            readfromfile >> textToChange;
            transform(textToChange.begin(), textToChange.end(), textToChange.begin(), ::tolower);
    
            for (unsigned int i = 0; i < textToChange.size(); i++) 
            {
                for (unsigned short j = 0; j < 37; j++) 
                {
                    if (textToChange[i] == letters[j]) 
                    {
                        newText += morseLetters[j];
                        newText += " ; ";
                        break;
                    }                
                }
            }
        }
    }
    
    return newText;
}
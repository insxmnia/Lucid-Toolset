// Library imports/includes
#include <iostream>
#include <string>
#include <cstring>
#include "Variables.h"
#include "Functions.h"
// Namespace declerations
using namespace std;

// Main code
int main(int argc, char* arg[])
{
    // Check if any arguments are parsed, if none are then print help menu, and exit
    if (argc == 1) { cout << pvariables::helpMenu; return 0; }
    else {
        
        // Cant use char in a statement, so if statements will need to be used
        if (pfunctions::Argument(arg[1]) == "-h" && argc == 2) { cout << pvariables::helpMenu; return 0; }
        if (pfunctions::Argument(arg[1]) == "-u" && argc == 2) { cout << pvariables::utilMenu; return 0; }
        if (pfunctions::Argument(arg[1]) == "-e" && argc == 2) { cout << pvariables::encMenu; return 0; }
        if (pfunctions::Argument(arg[1]) == "-en" && argc == 2) { cout << pvariables::encoMenu; return 0; }
        if (pfunctions::Argument(arg[1]) == "-n" && argc == 2) { cout << pvariables::netMenu; return 0; }

        // If no suitable command detected, run following code
        if (argc > 2) { cout << "Error: Command overload"; return 0; }
        if (argc == 2) { cout << "Error: Command " << arg[1] << " not found"; return 0; }
    }

}

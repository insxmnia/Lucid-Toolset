// Library imports/includes
#include <iostream>
#include <string>
#include <cstring>

#include "Variables.h"
// Namespace declerations
using namespace std;

// Main Code
namespace pfunctions{
	string Argument(char *arg) {
		char* temp_arg = arg;
		string converted_value = temp_arg;
		return converted_value;
	}

	void UtilityCommands(int argc, char* args[]){
		if (Argument(args[2]) == "-md5" && argc == 3) {

		};
		if (Argument(args[2]) == "-md5" && argc != 3) cout << "Missing '<filepath>' argument\nUsage: lucid -u -md5 <filepath>"; return;
	}
	void EncryptionCommands(int argc, char* args[]){
	}
	void EncodingCommands(int argc, char* args[]){
	}
	void NetworkCommands(int argc, char* args[]){
	}

}


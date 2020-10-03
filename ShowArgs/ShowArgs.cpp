// ShowArgs.cpp : ShowArgs displays the command line arguments with which it was started.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "ShowArgs.exe 1.0 outputs its command line arguments:" << endl;
	cout << "   \"argc: nb_args\" is the number of arguments. nb_args is at least 1 because the program name is passed by the operating system as the 1st argument." << endl;
	cout << "   \"argv[x]: >arg_value<\" are the values of the arguments. Surrounding characters > < are delimiters, not part of the value." << endl;
	cout << endl;
	cout << "argc: " << argc <<  endl;
	for (int i = 0; i < argc; i++) {
		cout << "argv[" << i << "]: >" << argv[i] << "<" << endl;
	}

}

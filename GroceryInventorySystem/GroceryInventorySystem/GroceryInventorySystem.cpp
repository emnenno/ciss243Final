// GroceryInventorySystem.cpp : main project file.

#include "stdafx.h"				//standard header
#include <iostream>				//input/output header
#include <string>				//string header
#include <fstream>				//file stream header (I realize this should suffice)
#include <istream>				//string header - in (I included I & O just to be safe) 
#include <ostream>				//string header - out
using namespace std;
using namespace System;

int main(array<System::String ^> ^args)
{
Console::WriteLine(L"Testing GitHub / Pivotal integrationn");
ofstream invFile;				//creating stream object
invFile.open ("Inventory.txt"); //opening the file
invFile << "\t Vendor \t Department \t Item # \t Item Name \t # on Hand \t Max # \t Retail Price \t Whlsl Price \n"; //writing to the file
for (int ln = 1; ln <= 20; ln++)
	invFile << "Ln " << ln << endl;
	cout << "OK" << endl;
invFile.close();				//closing the file
return 0;
}


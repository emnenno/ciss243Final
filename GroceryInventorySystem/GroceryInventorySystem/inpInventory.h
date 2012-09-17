#pragma once
ref class inpInventory

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

{
public:
	inpInventory(void);
private:
	string inputInv()
	{
	string itNum;
	string itNam;
	string whslPr;
	string onHnd;
	string Max;
	string venName;
	string order;
	string retPr;
	string dept;
	ifstream invFile("Inventory.txt", ios::in);	//Append the input Stream
	
	while (invFile >> venName)
		{
		cout << itNum << itNam << whslPr << onHnd << Max << venName << order << retPr  << dept << endl;
		}//end while
	system ("pause");	//wait to exit
	return 0;
	}
	~inpInventory(void);
#pragma once
#ifndef InvData_h
#define InvData_h

#include "StdAfx.h"
#include "InvData.h"
#include <string>
#include <fstream>
#include <cstring>
;using namespace std;

ref class inventoryItems
{
public:
	inventoryItems(void);
	inventoryItems(string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = ""); //default constructor

	//accessor for item number
	void setitNum(string);
	string itNum Allocator::size_ size_itNum;
	size_string size(4) const;
		string getitNum();

	//accessor for item name
	void setitName(string);
	string itName Allocator::size_ size_itName;
	size_string size(12) const;
		string getitName();

	//accessor for item name
	void setwhslPr(string);
	string whslPr Allocator::size_ size_whslPr;
	size_string size(6) const;
		string getwhslPr();

	//accessor for Num on Hand
	void setnumHand(string);
	string numHand Allocator::size_ size_numHand;
	size_string size(3) const;
		string getnumHand();

	//accessor for Max Num 
	void setmaxNum(string);
	string maxNum Allocator::size_ size_maxNum;
	size_string size(3) const;
		string getmaxNum();

	//accessor for vendor name
	void setvendorName(string);
	string vendorName Allocator::size_ size_vendorName;
	size_string size(12) const;
		string getvendorName();

	//accessor for Order - reorder
	void setreOrder(string);
	string reOrder Allocator::size_ size_reOrder;
	size_string size(3) const;
	string getreOrder();

	//accessor for dept
	void setdeptName(string);
	string deptName Allocator::size_ size_deptName;
	size_string size(14) const;
		string getdeptName();

private:
	string itNum;
	string itNam;
	string whslPr;
	string onHnd;
	string Max;
	string venName;
	string order;
	string retPr;
	string dept;
};//end class - inventoryItems
#endif
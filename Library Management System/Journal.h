#pragma once
#include"Documents.h"
#include<string>
using std::string;
class Journal: public Documents
{
	int IssueNumber;
public:
	Journal();
	Journal(string, string, string, string, int, int);
	void SetIN(int);
	int GetIN() const;
	void Display() const;
};


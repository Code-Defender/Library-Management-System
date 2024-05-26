#pragma once
#include"Documents.h"
#include<string>
using std::string;
class Magazine : public Documents
{
	int IssueNumber;
public:
	Magazine();
	Magazine(string, string, string, string, int, int);
	void SetIN(int);
	int GetIN() const;
	void Display() const;
};


#pragma once
#include<string>
#include"Documents.h"
using std::string;
class Newspaper : public Documents
{
	int IssueNumber;
public:
	Newspaper();
	Newspaper(string, string, string, string, int, int);
	void SetIN(int);
	int GetIN() const;
	void Display() const;
};


#pragma once
#include <string>
#include "Documents.h"

using std::string;
class Book: public Documents
{
private:

	string Author;
	int ISBN;
	int Copies;
	int Copynum;
public:
	Book();
	Book(string , int, int, int, string, string, string, string, int);
	void SetAuthor(string);
	void SetISBN(int);
	void SetCopy(int);
	void SetCopyNum(int);

	string GetAuthor();
	int GetISBN() const;
	int GetCopy() const;
	int GetCopyNum() const;

   void DisplayInfo() const;


};


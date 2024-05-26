#pragma once
#include "User.h"
#include "Book.h"
#include"Documents.h"
#include <vector>
using std::vector;

class Student: public User
{
private:
	int Max_book;
	vector<Documents> IssueDoc;
public:
	Student();
	Student(int, int ,  string&,int , int Max_book = 3);
	void SetMb(int) ;
	void SetD(const Documents&);
	int GetMb() const;

	void  AddIssuedDocuments(const Documents&) override;
	void DisplayIssuedDocuments() const override;

	bool ReturnDocument(int);

	void PrintInfo() ;







};


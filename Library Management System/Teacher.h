#pragma once
#include "User.h"
#include <vector>
#include "Documents.h"
using std::vector;

class Teacher: public User
{
	int Max_Book;
	vector<Documents> IssueDoc;
public:
	Teacher();
	Teacher(int, int, string&, int);
	void SetMB(int);
	int GetMB() const;
	
	void SetDoc(const Documents&);

	void  AddIssuedDocuments(const Documents&) override;
	void DisplayIssuedDocuments() const override;

	bool ReturnDocument(int);
	void Print();





};


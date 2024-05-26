#pragma once
#include<string>
#include"Documents.h"
using std::string;
class User
{
private:
	int Id;
	int current_books;
	string return_date;
	int fine;
public:
	User();
	User(int, int, string&, int);
	void SetId(int);
	void SetCbook(int);
	void SetDate(const string&);
	void Setfine(int);
	int GetId() const;
	int GetCbook() const;
	string GetDate();
	int Getfine() const;

	virtual void AddIssuedDocuments(const Documents& doc) = 0;
	virtual void DisplayIssuedDocuments() const = 0;

	virtual void Display() const;

	virtual ~User() = default;


};


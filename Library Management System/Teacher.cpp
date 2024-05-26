#include "Teacher.h"
#include<iostream>
using std::cout;
using std::endl;

Teacher::Teacher(): Max_Book(10){}
Teacher::Teacher(int id, int CrntBok, string& date, int fine) : User(id, CrntBok, date, fine) , Max_Book(10){}

void Teacher::SetMB(int Maxbk)
{
	this->Max_Book = Maxbk;
}

int Teacher::GetMB() const
{
	return Max_Book;
}
void Teacher::SetDoc(const Documents& doc)
{
	if (IssueDoc.size() < Max_Book) {
		IssueDoc.push_back(doc);
		SetCbook(GetCbook() + 1);
		cout << "Document Issued Successfully" << endl;
	}
	else {
		cout << "Cannot Issue more than " << Max_Book << " Documents" << endl;
	}

}

void Teacher::AddIssuedDocuments(const Documents& doc)
{
	if (IssueDoc.size() < Max_Book) {
		IssueDoc.push_back(doc);
		SetCbook(GetCbook() + 1);
		cout << "Document Issued Successfully" << endl;
	}
	else {
		cout << "Cannot Issue more than " << Max_Book << " Documents" << endl;
	}
}

void Teacher::DisplayIssuedDocuments() const
{
	if (IssueDoc.empty()) {
		cout << "No Documents Issued" << endl;
		
		return;
	}
	cout << "-----Issued Documents-----\n";
	for (auto& d : IssueDoc) {
		d.DisplayInfo();
		cout << endl;
	}
}

bool Teacher::ReturnDocument(int code)

{
	for (auto erase = IssueDoc.begin(); erase != IssueDoc.end(); ++erase) {
		if (erase->GetCode() == code) {
			IssueDoc.erase(erase);
			SetCbook(GetCbook() - 1);
			cout << "Document Return Successfully!" << endl;
			return true;
		}
	}
	cout << "Document Not found" << endl;
	return false;
}

void Teacher::Print() {
	User::Display();
	std::cout<< "Maximun Allowed book for User = " << Max_Book << std::endl;
}


#include "Student.h"
#include"User.h"
#include"Documents.h"
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl; 

Student::Student(): Max_book(3){}

Student::Student(int id, int CrntBok, string& date, int fine, int Max_book ): User(id, CrntBok, date, fine) , Max_book(3){}


void Student::SetMb(int Maxb) {
	this->Max_book = Maxb;
}
void Student::SetD(const Documents& Doc)
{
	if (IssueDoc.size() < Max_book) {
		IssueDoc.push_back(Doc);
		SetCbook(GetCbook() + 1);
		cout << "Document Issued Successfully!" << endl;
	}
	else {
		cout << "Cannot Issue more than " << Max_book << " Documents " << endl;
	}
}

int Student::GetMb() const{
	return Max_book;
}

void Student::AddIssuedDocuments(const Documents& Doc)
{
	if (IssueDoc.size() < Max_book) {
		IssueDoc.push_back(Doc);
		SetCbook(GetCbook() + 1);
		cout << "Document Issued Successfully!" << endl;
	}
	else {
		cout << "Cannot Issue more than " << Max_book << " Documents " << endl;
	}
}

void Student::DisplayIssuedDocuments() const
{
	if (IssueDoc.empty()) {
		cout << "No Documents Issued" << endl;
		return;
	}
	cout << "------Issued Document ----" << endl;
	for (const auto& doc : IssueDoc) {
		doc.DisplayInfo();
		cout << endl;
	}

}

bool Student::ReturnDocument(int code)
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


void Student::PrintInfo() 
{
	User::Display();
	cout << "Maximun Allowed book for User = " << Max_book << endl;
}

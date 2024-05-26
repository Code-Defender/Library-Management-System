#include "Newspaper.h"
#include<iostream>
#include"Documents.h"

Newspaper::Newspaper() {

}
Newspaper::Newspaper(string title, string date, string status, string category, int code, int In) : Documents(title, date, status, category, code) {
	SetIN(In);
}
void Newspaper::SetIN(int In) {
	this->IssueNumber = In;
}
int Newspaper::GetIN() const{
	return IssueNumber;
}
void Newspaper::Display() const{

	Documents::DisplayInfo();
	std::cout << "Issue NUmber" << IssueNumber << std::endl;
}
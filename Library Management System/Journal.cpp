#include "Journal.h"
#include<iostream>

Journal::Journal() {

}
Journal::Journal(string title, string date, string status, string category, int code, int In) : Documents(title, date, status, category, code) {
	SetIN(In);

}
void Journal::SetIN(int In) {
	this->IssueNumber = In;
}
int Journal::GetIN() const{
	return IssueNumber;
}
void Journal::Display() const {
	Documents::DisplayInfo();
	std::cout << "IssueNumber = " << IssueNumber << std::endl;
}
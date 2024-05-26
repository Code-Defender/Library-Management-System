#include "Magazine.h"
#include<iostream>

Magazine::Magazine() {

}
Magazine::Magazine(string title, string date, string status, string category, int code, int In): Documents(title, date, status, category, code) {
	SetIN(In);
}

void Magazine::SetIN(int In) {
	this->IssueNumber = In;
}
int Magazine::GetIN() const{
	return IssueNumber;
}
void Magazine::Display() const{
	Documents::DisplayInfo();
	std::cout << "Issue NUmber" << IssueNumber << std::endl;
}
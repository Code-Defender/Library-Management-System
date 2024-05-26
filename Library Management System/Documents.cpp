#include "Documents.h"
#include<iostream>
using std::string;
using std::cout;
using std::endl;

Documents::Documents(): Title(""), Publish_Date(""), Status(""), Category(""), Code(0) {

}
Documents::Documents(string title, string date, string status, string category, int code) {
	SetTitle(title);
	SetPubDate(date);
	SetStatus(status);
	SetCategory(category);
	SetCode(code);

}
void Documents::SetTitle(string& title) {
	this->Title = title;
}
void Documents::SetPubDate(string date) {
	this->Publish_Date = date;
}
void Documents::SetStatus(string status) {
	this->Status = status;
}
void Documents::SetCategory(string category) {
	this->Category = category;
}
void Documents::SetCode(int code) {
	this->Code = code;
}
string Documents::GetTitle() {
	return Title;
}
string Documents::GetPubDate() {
	return Publish_Date;
}
string Documents::GetStatus() {
	return Status;
}
string Documents::GetCategory() {
	return Category;
}
int Documents::GetCode() const{
	return Code;

}
void Documents::DisplayInfo() const {
	cout << "Title: " << Title<<endl;
	cout << "Publish Date: " << Publish_Date << endl;
	cout << "Status of Book: " << Status<<endl;
	cout << "Category: " << Category << endl;
	cout << "Code: " << Code << endl;
}

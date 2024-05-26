#include "User.h"
#include<iostream>
using std::cout;
using std::endl;

User::User(): Id(0), current_books(0), return_date(""), fine(0){} //default constructor


User::User(int id,  int CrntBok,  string& date, int fine) {
	SetId(id);
	SetCbook(CrntBok);
	SetDate(date);
	Setfine(fine);

}
void User::SetId(int id) {
	this->Id = id;
}

void User::SetCbook(int CrntBok) {
	this->current_books = CrntBok;
}

void User::SetDate(const string& date) {
	this->return_date = date;
}
void User::Setfine(int fine) {
	this->fine = fine;
}
int User::GetId() const {
	return Id;
}

int User::GetCbook() const{
	return current_books;
}
string User::GetDate() {
	return return_date;
}
int User::Getfine() const {
	return fine;
}

void User::Display() const
{
	cout << "User Id = " << Id << endl;
	cout << "Current book of User = " << current_books << endl;
	cout << "Return Date of the book = " << return_date << endl;
	cout << "Fine on User = " << Getfine()<<endl;
}

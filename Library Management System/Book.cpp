#include "Book.h"
#include<string>
#include<iostream>
using namespace std;
Book::Book(): Documents() {
	Author = "";
	ISBN = 0;
	Copies = 0;
	Copynum = 0;
}

Book::Book(string author, int Isbn, int copies, int copynum, string title, string date, string status, string category, int code): Documents(title, date, status, category, code) {
	SetAuthor(author);
	SetISBN(Isbn);
	SetCopy(copies);
	SetCopyNum(copynum);
}
void Book::SetAuthor(string author) {
	this->Author = author;
}


void Book::SetISBN(int Isbn) {
	this->ISBN = Isbn;
}


void Book::SetCopy(int copies) {
	this->Copies = copies;
}
void Book::SetCopyNum(int copynum) {
	this->Copynum = copynum;
}

string Book::GetAuthor() {
	return Author;
}

int Book::GetISBN() const{
	return ISBN;
}


int Book::GetCopy() const {
	return Copies;
}
int Book::GetCopyNum() const{
	return Copynum;
}
void Book::DisplayInfo() const{
	cout << endl;
	Documents::DisplayInfo();
	cout << "Author: " << Author << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << "Copies of Book " <<Copies<< endl;
	cout << "CopiesNumber: " << Copynum << endl;
	
}
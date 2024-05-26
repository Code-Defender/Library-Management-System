#pragma once
#include "Book.h"
#include "Magazine.h"
#include "Journal.h"
#include "Newspaper.h"
#include<vector>

using namespace std;


const int limit = 50; 

class DirectoryDocument
{
private:
	vector<Book>  book_array;
	vector<Magazine> Magz_array;
	vector<Journal>  Jnl_array;
	vector<Newspaper> News_array;
	int c;
public:
	DirectoryDocument();
	void Add_Books(Book& book);
	Book* FindBook(int code);
	Magazine* FindMag(int code);
	Journal* FindJournal(int code);
	Newspaper* FindNews(int code);
	void Add_Magzine(Magazine& Magz);
	void Add_Newspaper(Newspaper& Newp);
    void Add_Journal(Journal& Jourl);
	void Search_Doc(int, int) ;



};


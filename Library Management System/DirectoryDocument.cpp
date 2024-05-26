#include "DirectoryDocument.h"
#include<iostream>

DirectoryDocument::DirectoryDocument(): c(0) {
	
}

void DirectoryDocument::Add_Books(Book& book) {
	if (book_array.size() < limit) {
		book_array.push_back(book);



		c++;
	}
	else {
		std::cout << "Book array is full. Cannot add more" << std::endl;
	}
}

void DirectoryDocument::Add_Newspaper(Newspaper& Newp) {
	if (News_array.size() < limit) {
		News_array.push_back(Newp);
		c++;
	}
	else {
		std::cout << "Array Full Can't Add more" << endl;
	}
}

void DirectoryDocument::Add_Magzine(Magazine& Magz) {
	if (c < limit) {
		Magz_array.push_back(Magz);
		c++;
	}
	else {
		std::cout << "Magazine array is full. Cannot add more" << std::endl;
	}
}

Book* DirectoryDocument::FindBook(int code)
{
	for (auto& book : book_array) {
		if (book.GetCode() == code) {
			return &book;
		
		}
	}
	return nullptr;
}

Magazine* DirectoryDocument::FindMag(int code){
	for (auto& Mag: Magz_array) {
		if (Mag.GetCode() == code) {
			return &Mag;
		}
	}
	return nullptr;
}

void DirectoryDocument::Add_Journal(Journal& Joul)
{
	if (Jnl_array.size() < limit) {
		Jnl_array.push_back(Joul);
		c++;
	}
	else {
		std::cout << "Journal Array is full. Can't add more" << std::endl;
	}

}

Newspaper* DirectoryDocument::FindNews(int code)
{
	for (auto & News : News_array) {
		if (News.GetCode() == code) {
			return &News;
		}
	}
	return nullptr;
}

Journal* DirectoryDocument::FindJournal(int code)
{
	for (auto& Jourl : Jnl_array) {
		if (Jourl.GetCode() == code);
		return &Jourl;
	}
	return nullptr;
}



void DirectoryDocument::Search_Doc(int code, int choice)  {
	bool found = false;
	if (choice == 1) {
		for (int i = 0; i < c; i++) {
			if (book_array[i].GetCode() == code) {
				std::cout << "Book Found!\n";
				book_array[i].DisplayInfo();
				found = true;
				break;
			}
		}
	}
	else if (choice == 2) {
		for (int i = 0; i < c; i++) {
			if (Magz_array[i].GetCode() == code) {
				std::cout << "Magzine Found!\n";
				Magz_array[i].Display();
				found = true;
				break;
			}
		}

	}
	else if (choice == 3) {
		for (int i = 0; i < c; i++) {
			if (News_array[i].GetCode() == code) {
				std::cout << "NewsPaper Found!\n";
				News_array[i].Display();
				found = true;
				break;
			}
		}
	}
	else {
		for (int i = 0; i < c; i++) {
			if (Jnl_array[i].GetCode() == code) {
				std::cout << "Journal Found!\n";
				Jnl_array[i].Display();
				found = true;
				break;
			}
		}

	}


	if (!found) std::cout << "Book Not Available" << std::endl;

	//code for pause the screen until user press enter button
	system("pause");
}
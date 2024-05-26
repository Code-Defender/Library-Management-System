#pragma once
#include<string>
using  std::string;
class Documents
{
protected:
	string Title;
	string Publish_Date;
	string Status;
	string Category;
	int Code;
public:
	Documents();
	Documents(string , string , string , string, int);
	void SetTitle(string&);
	void SetPubDate(string);
	void SetStatus(string);
	void SetCategory(string);
	void SetCode(int);

	string GetTitle() ;
	string GetPubDate();
	string GetStatus() ;
	string GetCategory();
	int GetCode() const;

   void DisplayInfo() const;





};


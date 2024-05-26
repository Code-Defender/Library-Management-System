#include <iostream>
#include <string>
#include<stdlib.h>
#include <iomanip>
#include "Book.h"
#include "Documents.h"
#include"DirectoryUser.h"
#include "Magazine.h"
#include "DirectoryDocument.h"
#include "Student.h"

using std::string;
using std::cout;
using std::endl;


void Start();

int main() {
    DirectoryDocument directory;
    DirectoryUser UserDirect;
    
    
    int n ,choice;
    

    do {
        cout << "\033[2J\033[H";
        Start();
    

        cout << "1-> Enter New Documents" << endl;
        cout << "2-> Search for  Documents" << endl;
        cout << "3-> Issue the  Documents" << endl;
        cout << "4-> Issued Documents Record" << endl; 
        cout << "5-> Return  Documents" << endl;
        cout << "0-> For Exit" << endl;
        cout << "Enter your choice::" << endl << endl;
        cin >> n;
        cin.ignore(); // Ignore the leftover newline character
        string title, author, pubYear, category, status , date;
        int id,crntbok, fine,  code, isbn, copies, copyNum, issuenumber;

        Book newBook("Ahsan", 5553, 5, 33, "computer basic", "june22 ", "Available", "CS", 123);
        directory.Add_Books(newBook);
        Magazine Mag("Today", "june24", "Available", "News", 12, 5555);
        directory.Add_Magzine(Mag);
        switch (n) {
        case 1:
            cout << "Enter 1-> For Books \n 2-> For Magzines \n 3-> For Newspaper \n 4-> For Journal ";
            cin >> choice;

        if(choice == 1){
            cout << "\033[2J\033[H";
            Start();
           
            cout << "Enter the Book Record/Info" << endl;
            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter Publication Year: ";
            getline(cin, pubYear);
            cout << "Enter Category: ";
            getline(cin, category);
            cout << "Enter Status: ";
            getline(cin, status);
            cout << "Enter Code: ";
            cin >> code;
            cin.ignore();
            cout << "Enter ISBN: ";
            cin >> isbn;
            cin.ignore();
            cout << "Enter Number of Copies: ";
            cin >> copies;
            cin.ignore();
            cout << "Enter Copy Number: ";
            cin >> copyNum;
            cin.ignore();

            Book newBook(author, isbn, copies, copyNum, title, pubYear, status, category, code);
            directory.Add_Books(newBook);
        }
        else if (choice == 2) {
            cin.ignore();

            cout << "Enter Magazine Title: ";

            getline(cin, title);
            cout << "Enter Publication Date: ";
            getline(cin, pubYear);
            cout << "Enter Status: ";
            getline(cin, status);
            cout << "Enter Category: ";
            getline(cin, category);
           
            cout << "Enter Code: ";
            cin >> code;
            cin.ignore();
            cout << "Enter Issue Number: ";
            cin >> issuenumber;
            cin.ignore();
            Magazine Mag(title, pubYear, status, category, code, issuenumber);
            directory.Add_Magzine(Mag);
            system("pause");
        }
        else if (choice == 3) {
            cin.ignore();

            cout << "Enter Newspaper Title: ";

            getline(cin, title);
            cout << "Enter Publication Date: ";
            getline(cin, pubYear);
            cout << "Enter Status: ";
            getline(cin, status);
            cout << "Enter Category: ";
            getline(cin, category);

            cout << "Enter Code: ";
            cin >> code;
            cin.ignore();
            cout << "Enter Issue Number: ";
            cin >> issuenumber;
            cin.ignore();
            Newspaper NewspaperObj(title, pubYear, status, category, code, issuenumber);
            directory.Add_Newspaper(NewspaperObj);
       
            system("pause");

        }
        else if (choice == 4) {
            cin.ignore();

            cout << "Enter Journal Title: ";

            getline(cin, title);
            cout << "Enter Publication Date: ";
            getline(cin, pubYear);
            cout << "Enter Status: ";
            getline(cin, status);
            cout << "Enter Category: ";
            getline(cin, category);

            cout << "Enter Code: ";
            cin >> code;
            cin.ignore();
            cout << "Enter Issue Number: ";
            cin >> issuenumber;
            cin.ignore();
            Journal JournlObj(title, pubYear, status, category, code, issuenumber);
            directory.Add_Journal(JournlObj);

        }
        else {
            
        }
        
            break;
        case 2: {
            cout << "Enter 1-> For Books \n 2-> For Magzines \n 3-> For Newspaper \n 4-> For Journal ";
            cin >> choice;
            if (choice == 1) {
                cout << "Enter the code of the book for Search " << endl;
                cin >> code;
                directory.Search_Doc(code, choice);
            }
            else if (choice == 2) {
                cout << "Enter the code of the Magzines for Search " << endl;
                cin >> code;
                directory.Search_Doc(code, choice);
            }
            else if (choice == 3) {
                cout << "Enter the code of the  Newspaper for Search " << endl;
                cin >> code;
                directory.Search_Doc(code, choice);
            }
            else if (choice == 4) {
                cout << "Enter the code of the Journal for Search " << endl;
                cin >> code;
                directory.Search_Doc(code, choice);
            }
            else
            {

            }
          
           
        }

            break;
        case 3:
        {
            cout << "\n 1-> For Student \n 2-> For Teacher\n ";
            cout << "Enter [1,2]" << endl;
            cin >> n;
            if (n == 1) {
                cin.ignore();
                cout << "Enter the Student Id" << endl;
                cin >> id;
                cout << "Enter the number books Student currently issued " << endl;
                cin >> crntbok;
                cout << "Enter the Return Date for the book" << endl;
                cin >> date;
                cout << "Enter the fine of the user If has any" << endl;
                cin >> fine;
                Student StudentObj(id, crntbok, date, fine);
                UserDirect.Add_Std(StudentObj);
                Student* std = UserDirect.FindStudent(id);
                if (std == nullptr) {
                    cout << "Student Not found!" << endl;
                    system("pause");
                    break;
                }
                cout << "Enter 1 for Book \n 2 for Magazines \n 3 for Newspaper \n 4 for  Journal" << endl;
                cin >> n;
                switch (n) {
                case 1:
                {
                    cout << "Enter the code of the book that you want to issue" << endl;
                    cin >> code;

                    Book* book = directory.FindBook(code);
                    if (book == nullptr) {
                        cout << "Book not found!" << endl;
                        system("pause");
                        break;
                    }

                    std->AddIssuedDocuments(*book);
                    system("pause");
                }
                    break;

                case 2:
                {
                    cout << "Enter the code of the Magazine that you want to issue" << endl;
                    cin >> code;
                    Magazine* Mag = directory.FindMag(code);
                    if (Mag == nullptr) {
                        cout << "Magazine not found" << endl;
                        system("pause");
                        break;
                    }
                    std->AddIssuedDocuments(*Mag);
                    system("pause");
                }
                    break;
                case 3:
                {
                    cout << "Enter the code of the Newspaper that you want to issue" << endl;
                    cin >> code;
                    Newspaper* News = directory.FindNews(code);
                    if (News == nullptr) {
                        cout << "Newspaper Not found" << endl;
                        system("pause");
                        break;
                    }
                    std->AddIssuedDocuments(*News);
                    system("pause");
                }
                    break;
                case 4: {
                    cout << "Enter the code of the Journal that you want to issue" << endl;
                    cin >> code;
                    Journal* Jourl = directory.FindJournal(code);
                    if (Jourl == nullptr) {
                        cout << "Journal Not found " << endl;
                        system("pause");
                        break;
                    }
                    std->AddIssuedDocuments(*Jourl);
                    system("pause");

                }
                    break;
                default: {
                    cout << "INvalid" << endl;
                }
                   
                }

               
                
 

              

            }

            else if (n == 2) {
                cin.ignore();
                cout << "Enter the Teacher Id" << endl;
                cin >> id;
                cout << "Enter the number books Teacher currently issued " << endl;
                cin >> crntbok;
                cout << "Enter the Return Date for the book" << endl;
                cin >> date;
                cout << "Enter the fine of the user If has any" << endl;
                cin >> fine;
                Teacher teacher(id, crntbok, date, fine);
                UserDirect.Add_Teacher(teacher);
                Teacher* techer = UserDirect.FindTeacher(id);
                if (techer == nullptr) {
                    cout << "Teacher Not found" << endl;
                    system("pause");
                    break;
                }
                cout << "Enter 1 for Book \n 2 for Magazines \n 3 for Newspaper \n 4 for  Journal" << endl;
                cin >> n;
                switch (n) {
                case 1:
                {
                    cout << "Enter the code of the book that you want to issue" << endl;
                    cin >> code;

                    Book* book = directory.FindBook(code);
                    if (book == nullptr) {
                        cout << "Book not found!" << endl;
                        system("pause");
                        break;
                    }

                    techer->SetDoc(*book);
                    system("pause");
                }
                break;

                case 2:
                {
                    cout << "Enter the code of the Magazine that you want to issue" << endl;
                    cin >> code;
                    Magazine* Mag = directory.FindMag(code);
                    if (Mag == nullptr) {
                        cout << "Magazine not found" << endl;
                        system("pause");
                        break;
                    }
                    techer->SetDoc(*Mag);
                    system("pause");
                }
                break;
                case 3:
                {
                    cout << "Enter the code of the Newspaper that you want to issue" << endl;
                    cin >> code;
                    Newspaper* News = directory.FindNews(code);
                    if (News == nullptr) {
                        cout << "Newspaper Not found" << endl;
                        system("pause");
                        break;
                    }
                    techer->SetDoc(*News);
                    system("pause");
                }
                break;
                case 4: {
                    cout << "Enter the code of the Journal that you want to issue" << endl;
                    cin >> code;
                    Journal* Jourl = directory.FindJournal(code);
                    if (Jourl == nullptr) {
                        cout << "Journal Not found " << endl;
                        system("pause");
                        break;
                    }
                    techer->SetDoc(*Jourl);
                    system("pause");

                }
                      break;
                default: {
                    cout << "INvalid" << endl;
                }

                }


            }
            system("pause");
        }
            break;

        case 4:
        {
            cout << "Issued Documents Record\n\n";
            vector<User*> users = UserDirect.GetAll_User();
            for (auto usr : users) {
                usr->Display();
           
                usr->DisplayIssuedDocuments();
                cout << endl;
            }
            system("pause");
        }
            break;
        case 5:
        {
            cout << "Enter 1-> For Student \n 2-> For Teacher" << endl;
            cin >> n;
            if (n == 1) {
                cout << "Enter the Student Id" << endl;
                cin >> id;
                cout << "Enter the code of the document to return" << endl;
                cin >> code;
                UserDirect.Return_stdDoc(id , code);
                system("pause");
            }
            else if (n == 2) {
                cout << "Enter the Teacher Id" << endl;
                cin >> id;
                cout << "Enter the code of the document to return" << endl;
                cin >> code;
                UserDirect.Return_teacherDoc(id, code);
                system("pause");
            }
            else {
                cout << "Invalid Option!" << endl;
            }














        }

            break;
        default:

            break;
        }
              

         
    } while (n != 0);

    return 0;
}

void Start() {
    cout << endl;
    cout << " " << setw(29) << setfill('-') << "-" << endl;
    cout << " | LIBRARY MANAGEMENT SYSTEM |" << endl;
    cout << " " << setw(29) << setfill('-') << "-" << endl<<endl;
}

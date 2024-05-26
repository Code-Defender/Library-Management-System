#pragma once
#include "Student.h"
#include "Teacher.h"
#include<vector>
using std::vector;

const int lim = 50;
class DirectoryUser 
{
private:
	vector<Student> std_array;
	vector<Teacher> Teacher_array;
	int c;

public:
	DirectoryUser();
	void Add_Std(Student& std);
	Student* FindStudent(int id);
	Teacher* FindTeacher(int);

	vector<User*> GetAll_User();

	void Return_stdDoc(int id, int code);
	void Return_teacherDoc(int, int);
	void Add_Teacher(Teacher& teacher);


	void Print();



};


#include "DirectoryUser.h"
#include<iostream>
using std::cout;
using std::endl;
DirectoryUser::DirectoryUser(): c(0){}

void DirectoryUser::Add_Std(Student& std)
{
	if (std_array.size() < lim) {
		std_array.push_back(std);

		c++;
	}
	else {
		cout << "Student Array is full . Canot add more" << endl;
	}

}

Student* DirectoryUser::FindStudent(int id)
{
	for (auto& student : std_array) {
		if (student.GetId() == id) {
			return &student;
		}
	}
	return nullptr;
}

Teacher* DirectoryUser::FindTeacher(int id)
{
	for (auto& teacher : Teacher_array) {
		if (teacher.GetId() == id) {
			return &teacher;
		}
	}
	return nullptr;
}

vector<User*> DirectoryUser::GetAll_User()
{
	vector<User*> user;
	for (auto& std : std_array) {
		user.push_back(&std);
	}
	for (auto& tcher : Teacher_array) {
		user.push_back(&tcher);
	}
	return user;
}

void DirectoryUser::Return_stdDoc(int id, int code)
{
	Student* std = FindStudent(id);
	if (std == nullptr) {
		cout << "Student NOt found" << endl;
	}
	else {
		std->ReturnDocument(code);
	}
}

void DirectoryUser::Return_teacherDoc(int id, int code)
{
	Teacher* tcher = FindTeacher(id);
	if (tcher == nullptr) {
		cout << "Teacher Not found\n";
	}
	else {
		tcher->ReturnDocument(code);
	}

}

void DirectoryUser::Add_Teacher(Teacher& teacher)
{
	if (Teacher_array.size() < lim) {
		Teacher_array.push_back(teacher);

		c++;
	}
	else {
		cout << "Teacher Array is full. can't add more" << endl;
	}
}

void DirectoryUser::Print() {
	for (int i = 0; i < c; i++) {
		std_array[i].PrintInfo();
	}
}

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student()
	{
		ID++;
	}
	void SetGroup(string group)
	{
		this->group = group;
	}
	void SetName(string name)
	{
		this->name = name;
	}
	void SetAge(int age)
	{
		this->age = age;
	}
	string GetGroup()
	{
		return group;
	}
	string GetName()
	{
		return name;
	}
	int GetAge()
	{
		return age;
	}

	void Birthday()
	{
		this->age++;
	}
	void Expulsion()
	{
		this->group = " ";
	}
	void Rename(string new_name)
	{
		this->name = new_name;
	}

	static int GetID()
	{
		return ID;
	}

	friend class Teacher;
private:
	string name = " ";
	string group = " ";
	int age = 0;
	static int ID;

};

class Teacher
{
public:
	void TransferToAnotherGroup(string group, Student& student)
	{
		student.group = group;
	}
};

int Student::ID = 0;

int main()
{

}
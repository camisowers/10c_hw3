#pragma once
#include <string>


class Student
{
public:		
	Student();						//default constructor
	Student(std::string id);		//takes string as parameter
	std::string get_id() const;		//accessor function
private:
	std::string student_id;		
};


class Employee 
{
public: 
	Employee();						//default constructor
	Employee(std::string id);		//takes string as parameter
	std::string get_id() const;		//accessor function
private:
	std::string employee_id;
};


// The class TeachingAssistant inherits from both Student and Employee.
class TeachingAssistant : public Student, public Employee			
{
public:
	TeachingAssistant();			//default constructor
	TeachingAssistant(std::string s_id, std::string e_id);		//takes 2 different strings as parameters
	std::string get_id() const;					//call Employee::get_id()
	std::string student_id() const;				//call Student::get_id()
};
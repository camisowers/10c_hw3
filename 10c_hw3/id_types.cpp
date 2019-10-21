#include "id_types.h"

//default constructor
Student::Student() : student_id(" ") {}

//constructor with parameters
Student::Student(std::string id) : student_id(id) {}

/*
	The get_id() function is an accessor member function. 
	@param: none
	@return: string student_id
*/
std::string Student::get_id() const
{
	return student_id;
}

//default constructor
Employee::Employee() : employee_id(" ") {}

//constructor with parameters
Employee::Employee(std::string id) : employee_id(id) {}

/*
	The get_id() function is an accessor member function.
	@param: none
	@return: string employee_id
*/
std::string Employee::get_id() const
{
	return employee_id;
}

//default constructor
TeachingAssistant::TeachingAssistant() : Student(), Employee() {}

//constructor with parameters
TeachingAssistant::TeachingAssistant(std::string s_id, std::string e_id) : Student(s_id), Employee(e_id) {}

/* 
	The get_id() function calls the Employee member function to access its member variable.
	@param: none
	@return: string employee_id
*/
std::string TeachingAssistant::get_id() const
{
	return Employee::get_id();
}

/*
	The student_id() function calls the Student member function to access its member variable.
	@param: none
	@return: string student_id
*/
std::string TeachingAssistant::student_id() const
{
	return Student::get_id();
}
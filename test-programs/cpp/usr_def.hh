#pragma once
#include <iostream>

class Person{
	private:
		std::string name;	
		int age;
	public:
		Person(std::string name, int age);
		std::string getName(void);
		int getAge(void);
};

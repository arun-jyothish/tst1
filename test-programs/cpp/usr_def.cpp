#include <iostream>
#include <string>
#include "usr_def.hh" 

/* using namespace std; */

/**
 * @brief Constructor for Person Class
 * @parm string name
 */
Person::Person(std::string name, int age){
	this->name = name;
	this->age = age;
}

std::string Person::getName(){
	std::cout<< "Person name: " << name << std::     endl;
	return name;
}

int Person::getAge(){
	std::cout<< "Person Age: " << age << std:: endl;
	return age;
}


/// main run code 

/*
   int main(){

   Person p1(" Arun jyothish k ", 25);
   p1.getAge();
   p1.getName();
   }
   */

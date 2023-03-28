#include <iostream>
#include <string>
using namespace std;
#define SUM 100

struct Person
{
private:
public:
	char name[50];
	int age;
	char sex[6];
	int weight;
	void getInfo(void);
	void putInfo(void);
	
};
void getInfo(Person& person)
{
	std::cout << "Enter your name: ";
	std::cin >> person.name;
	std::cout << "Enter your age: ";
	std::cin >> person.age;
	std::cout << "Sex(male of female): ";
	std::cin >> person.sex;
	std::cout << "Enter your weight: ";
	std::cin >> person.weight;
}

struct Student : public Person
{
Person person;
public:
	void getInfo(Person& person)
	{
		person.name;
		person.age;
		person.sex;
		person.weight;
	}
	
};


int main()
{
	Student student;
	string name, sex;
	int age, weight;
	int e;
	
	cout << "Enter training time(year):";
	cin >> e;
	if (e >= 1)
	{
		std::cout << student.name << std::endl;
		std::cin >> name;
		std::cout << "Enter your age: ";
		std::cin >> age;
		std::cout << "Sex(male of female): ";
		std::cin >> sex;
		std::cout << "Enter your weight: ";
		std::cin >> weight;
		cout << endl;
		std::cout << "Name: " << student.name << std::endl;
		std::cout << "Age: " << student.age << std::endl;
		std::cout << "Sex: " << student.sex << std::endl;
		std::cout << "Weight: " << student.weight << std::endl;
		
	}
	else
	{
		cout << "Go study.";
	}
	return 0;
}
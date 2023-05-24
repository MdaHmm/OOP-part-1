#include <iostream>
#include <string>
#include <vector>
#include <iterator> // �� �� ��� � ��������� �� ��� �������

// ��������� UTF-8

// ��� ������� �������� ���:
// ������������
// ������������
// �����������

// �������� ������
/*
// �����
// ������


// ������ �������� ������
class MyClass
{
private:
	int _data; // �������� ��� ����������� �������� ������
public:
	int data; // �������� ��� ����������� ������ ������ ������
//protected:
	//int data; // �������� ��� ����������� ������ ������ � ������ �������-�����������

public:
	int Summ(int data)// �����
		{
			return _data + data;
		};
};

class Stuff {

private:
	std::string _name;
	float _price;

public:
	// �����������
	Stuff(std::string name, float price) {
		_name = name;
		_price = price;
	}

	void Print() {
		std::cout << "���: " << _name << "\n";
		std::cout << "����: " << _price << "\n";
	}

	void SetName(std::string name) {
		_name = name;
	}

	void SetPrice(float price) {
		_price = price;
	}

	std::string GetName() {
		return _name;
	}

	float GetPrice() {
		return _price;
	}


};

//void SearchByName(std::string x) {
	//DataBase.Search(x);
//}

class Employee {
private:
	int _id;
	std::string _name;
public:
	Employee(int id, std::string name) {
		_id = id;
		_name = name;
	}

	void SetName(std::string name) {
		_name = name;
	}

	void SetId(int id) {
		_id = id;
	}

	void Print() {
		std::cout << "Id: " << _id << "\n";
		std::cout << "���: " << _name << "\n";
	}

	int GetId() {
		return _id;
	}

	std::string GetName() {
		return _name;
	}

};
*/

class Person {
private:
	std::string _name;
	int _age;
public:
	Person(std::string name, int age) : _name(name), _age(age)
	{
		//	_name = name;
		//	_age = age;
	}
	std::string GetName() {
		return _name;
	}

	void ShowData() {
		std::cout << "���: " << _name << '\n';
		std::cout << "�������: " << _age << '\n';
	}
};



int main() {
	setlocale(LC_ALL, "Russian");

	// ������ � ��������
	/*
	Stuff stuff1("�������", 99.99f);
	Stuff stuff2("����� � �������� �� ������ �����", 76);
	Stuff stuff3("��������� �����������", 54);
	Stuff* stuff4 = new Stuff("������", 150);

	stuff1.Print();
	stuff2.Print();
	stuff3.Print();
	stuff4->Print();
	delete(stuff4);
	std::cout << std::endl;

	Employee worker1(5, "Sanek");

	worker1.Print();


	//stuff1.SetName("Carrot");
	//stuff1.SetPrice(99.99f);
	//std::cout << stuff1.GetName();
	//std::cout << stuff1.GetPrice();
	//stuff1.Print();
	//SearchByName(stuff1.GetName());
	*/


	// �������
	/*
	std::vector<int>vec = { 1, 10, 20 };
	std::vector<int>::iterator it;
	it = vec.begin();
	//std::cout << it; // ������ �.�. ������ �����
	std::cout << *it; // 1

	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << ' ';

	it = vec.begin();

	vec.erase(it);

	std::cout << std::endl;

	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << ' ';
		*/

		/*
		vec.push_back(5); // ��������� ������ � ����� �������
		vec.size(); // ���������� ����������� �������� �������
		vec.pop_back(); // ������� ��������� �������
		vec.begin(); // ���������� ������ ������� �������
		vec.end(); // ���������� ��������� ������� �������
		vec.erase(vec.begin() + 2); // ������� ������ �������
		std::cout << vec.at(0); // ����� �������� �� �������
		*/


	Person* person1 = new Person("���1", 25);
	Person* person2 = new Person("���2", 35);
	Person* person3 = new Person("���3", 45);

	std::vector<Person*>people;
	std::vector<Person*>::iterator it;
	people.push_back(person1);
	people.push_back(person2);
	people.push_back(person3);

	for (it = people.begin(); it != people.end(); ++it) {
		(*it)->ShowData();
	}

	delete(person1);
	delete(person2);
	delete(person3);

	/*
	����

	Person person1("���1", 25);
	Person person2("���2", 35);
	Person person3("���3", 45);

	std::vector<Person>people;
	std::vector<Person>::iterator it;
	people.push_back(person1);
	people.push_back(person2);
	people.push_back(person3);

		for (it = people.begin(); it != people.end(); ++it) {
			people.at(*it).ShowData();
		}
		*/

		/*
		����

		auto it = names.begin();
		names.push_back(person1.GetName());
		names.push_back(person2.GetName());
		names.push_back(person3.GetName());
		//auto it = names.begin();
		for (const auto& it : names)
			std::cout << it << ' ';

		//for(it = names.begin(); it != names.end(); ++i)
		*/


	return 0;
}
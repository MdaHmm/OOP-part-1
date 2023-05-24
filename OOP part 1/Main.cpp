#include <iostream>
#include <string>
#include <vector>
#include <iterator> // то же что и указатели но для вектора

// Кодировка UTF-8

// Три главных принципа ООП:
// Инкапсуляция
// Наследование
// Полиморфизм

// Создание класса
/*
// Класс
// Объект


// Пример создания класса
class MyClass
{
private:
	int _data; // Доступно для модификации объектам класса
public:
	int data; // Доступно для модификации только внутри класса
//protected:
	//int data; // Доступно для модификации внутри класса и внутри классов-наследников

public:
	int Summ(int data)// Метод
		{
			return _data + data;
		};
};

class Stuff {

private:
	std::string _name;
	float _price;

public:
	// Конструктор
	Stuff(std::string name, float price) {
		_name = name;
		_price = price;
	}

	void Print() {
		std::cout << "Имя: " << _name << "\n";
		std::cout << "Цена: " << _price << "\n";
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
		std::cout << "Имя: " << _name << "\n";
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
		std::cout << "Имя: " << _name << '\n';
		std::cout << "Возраст: " << _age << '\n';
	}
};



int main() {
	setlocale(LC_ALL, "Russian");

	// Работа с классами
	/*
	Stuff stuff1("Морковь", 99.99f);
	Stuff stuff2("Пицца в магазине на первом этаже", 76);
	Stuff stuff3("Лимонадик вкусненький", 54);
	Stuff* stuff4 = new Stuff("Шаурма", 150);

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


	// Векторы
	/*
	std::vector<int>vec = { 1, 10, 20 };
	std::vector<int>::iterator it;
	it = vec.begin();
	//std::cout << it; // ошибка т.к. хранит адрес
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
		vec.push_back(5); // Добавляет объект в конец вектора
		vec.size(); // Возвращает колличество объектов вектора
		vec.pop_back(); // Удаляет последний элемент
		vec.begin(); // Возвращает первый элемент вектора
		vec.end(); // Возвращает последний элемент вектора
		vec.erase(vec.begin() + 2); // Удаляет объект вектора
		std::cout << vec.at(0); // Вывод элемента по индексу
		*/


	Person* person1 = new Person("Имя1", 25);
	Person* person2 = new Person("Имя2", 35);
	Person* person3 = new Person("Имя3", 45);

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
	чушь

	Person person1("Имя1", 25);
	Person person2("Имя2", 35);
	Person person3("Имя3", 45);

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
		чушь

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
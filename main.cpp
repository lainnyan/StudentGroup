#include <iostream>
#include <string>

using namespace std;

class StudentGroup
{
private:
	int count = 0;
	struct Student
	{
		string name, family, birthdate, phone;
	};
public:
	void Show();
	void Search();
	void Delete();
	void Add();
	void Sort();

};

void StudentGroup::Add()
{
	int N;
	cout << "Введите количество студентов ";
	cin >> N;
	count += N;
	cin.ignore(32767, '\n');
	Student* arr = new Student[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Введите имя: ";
		getline(cin, arr[i].name);
		cout << "Введите фамилию: ";
		getline(cin, arr[i].family);
		cout << "Введите дату рождения: ";
		getline(cin, arr[i].birthdate);
		cout << "Введите номер: ";
		getline(cin, arr[i].phone);
	}
}

int main()
{
	setlocale(0, "Rus");
	StudentGroup group;
	group.Add();
}

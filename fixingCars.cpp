#include <iostream>
#include <string>
#include <random>
#include <set>
#include <map>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;

class Car
{
private:
	string carName;
	set<string> brokenParts;
public:
	Car(string& carName) : carName(carName) {};
	vector<string> parts{ "���������", "����� ���������", "�������", "��������", "������� ����������", "����", "�����������", "������� �������", "��������� �����" };

	void generateBrokenParts() {
		brokenParts = set<string>();

		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distribution(0, parts.size() - 1);

		int quantityParts = distribution(gen);

		while (brokenParts.size() < quantityParts) {
			auto it = next(parts.begin(), distribution(gen));
			brokenParts.insert(*it);
		}
	}

	set<string> getBrokenParts() {
		return brokenParts;
	}

	void setName(string name) {
		carName = name;
	}

	string getName() {
		return carName;
	}
};

class CarService
{
public:
	static void analysisBrokenParts(Car& c) {
		map<string, double> parts = {
			{"���������", 95000.0},
			{"����� ���������", 400.0},
			{"�������", 10000.0},
			{"��������", 3000.0},
			{"������� ����������", 5000.0},
			{"����", 2500.0},
			{"�����������", 5500.0},
			{"������� �������", 5000.0},
			{"��������� �����", 2700.0}
		};
		cout << "��������� �������. ���������� ������ ������ �� ����� ������." << endl;
		cout << "��������...";

		// �������� �������� � ��������-�����
		for (int i = 0; i <= 100; ++i) {
			cout << "\r��������... [" << i << "%]";
			this_thread::sleep_for(chrono::milliseconds(50)); // �������� 50 �����������
			cout.flush();
		}
		cout << "\r��������... [100%]" << endl;
		cout << "�������� ���������!" << endl << endl;

		double totalPrice{};

		cout << "� ����� ������ ���� �������: " << endl;
		for (const auto& part : c.getBrokenParts()) {
			auto it = parts.find(part);
			if (it != parts.end()) {
				cout << "- " << part << ". ���� �� �������: " << it->second << endl;
				totalPrice += it->second;
			}
		}
		cout << "����� ��������� �������: " << totalPrice << endl;
	}

	void fix(Car& c) {
		c.getBrokenParts() = set<string>();
		cout << "������ ��������" << endl;
	}

};

int main() {
	setlocale(0, "ru");
	string name; cout << "������� �������� ����� ������: "; cin >> name;
	Car car1 = Car(name);
	car1.setName(name);
	car1.generateBrokenParts();
	CarService::analysisBrokenParts(car1);

}

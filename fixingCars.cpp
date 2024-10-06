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
	vector<string> parts{ "Двигатель", "Свечи зажигания", "Тормоза", "Подвеска", "Рулевое управление", "Фары", "Аккумулятор", "Коробка передач", "Тормозные диски" };

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
			{"Двигатель", 95000.0},
			{"Свечи зажигания", 400.0},
			{"Тормоза", 10000.0},
			{"Подвеска", 3000.0},
			{"Рулевое управление", 5000.0},
			{"Фары", 2500.0},
			{"Аккумулятор", 5500.0},
			{"Коробка передач", 5000.0},
			{"Тормозные диски", 2700.0}
		};
		cout << "Подождите немного. Происходит анализ данных по вашей машине." << endl;
		cout << "Загрузка...";

		// Имитация загрузки с прогресс-баром
		for (int i = 0; i <= 100; ++i) {
			cout << "\rЗагрузка... [" << i << "%]";
			this_thread::sleep_for(chrono::milliseconds(50)); // Задержка 50 миллисекунд
			cout.flush();
		}
		cout << "\rЗагрузка... [100%]" << endl;
		cout << "Загрузка завершена!" << endl << endl;

		double totalPrice{};

		cout << "В вашей машине были сломаны: " << endl;
		for (const auto& part : c.getBrokenParts()) {
			auto it = parts.find(part);
			if (it != parts.end()) {
				cout << "- " << part << ". Цена за починку: " << it->second << endl;
				totalPrice += it->second;
			}
		}
		cout << "Общая стоимость ремонта: " << totalPrice << endl;
	}

	void fix(Car& c) {
		c.getBrokenParts() = set<string>();
		cout << "Машина починена" << endl;
	}

};

int main() {
	setlocale(0, "ru");
	string name; cout << "Введите Название своей машины: "; cin >> name;
	Car car1 = Car(name);
	car1.setName(name);
	car1.generateBrokenParts();
	CarService::analysisBrokenParts(car1);

}

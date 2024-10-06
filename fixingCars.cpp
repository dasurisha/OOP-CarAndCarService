#include <iostream>
#include <string>
#include <random>
#include <set>
#include <map>
#include <chrono>
#include <thread>
using namespace std;

class CarService
{
public:
	void analysisBrokenPart() {
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
	}

	void generateBrokenPart() {
		cout << "В вашей машине были сломаны: " << endl;
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

		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distribution(0, parts.size() - 1);

		int quantityParts = distribution(gen);

		set<string> generatedParts;
		double price{};

		while (generatedParts.size() < quantityParts) {
			auto it = next(parts.begin(), distribution(gen));
			string partName = it->first;

			if (generatedParts.insert(partName).second) {
				cout << "- " << partName << " (Цена: " << it->second << " руб.)" << endl;
				price += it->second;
			}
		}
		cout << "Ваша общая оплата за ремонт составляет: " << price << " руб." << endl;
	}

	/*void letsFix(Car& name) {
		cout << "Ваша машина " << name.getName() << " отремонтирована!" << endl;
	}*/
};

class Car
{
private:
	string carName;
	CarService object;
public:
	friend class CarService;
	void setName(string name) {
		carName = name;
	}

	string getName() {
		return carName;
	}

	void showAanalysisBrokenPart() {
		object.analysisBrokenPart();
	}

	void getGenerateBrokenPart() {
		object.generateBrokenPart();
	}

	/*void fix() {
		object.letsFix(*this);
	}*/
};





int main() {
	setlocale(0, "ru");
	Car car1;
	string name; cout << "Введите Название своей машины: "; cin >> name;
	car1.setName(name);
	car1.showAanalysisBrokenPart();
	car1.getGenerateBrokenPart();
	//car1.fix();

}


//#include <iostream>
//#include <string>
//#include <random>
//#include <set>
//#include <map>
//#include <chrono>
//#include <thread>
//using namespace std;
//class Car{};
//class CarService {
//private:
//    friend class Car;
//public:
//    void analysisBrokenPart() {
//        cout << "Подождите немного. Происходит анализ данных по вашей машине." << endl;
//        cout << "Загрузка...";
//
//        // Имитация загрузки с прогресс-баром
//        for (int i = 0; i <= 100; ++i) {
//            cout << "\rЗагрузка... [" << i << "%]";
//            this_thread::sleep_for(chrono::milliseconds(50)); // Задержка 50 миллисекунд
//            cout.flush();
//        }
//        cout << "\rЗагрузка... [100%]" << endl;
//        cout << "Загрузка завершена!" << endl << endl;
//    }
//
//    void generateBrokenPart() {
//        cout << "В вашей машине были сломаны: " << endl;
//        map<string, double> parts = {
//            {"Двигатель", 95000.0},
//            {"Свечи зажигания", 400.0},
//            {"Тормоза", 10000.0},
//            {"Подвеска", 3000.0},
//            {"Рулевое управление", 5000.0},
//            {"Фары", 2500.0},
//            {"Аккумулятор", 5500.0},
//            {"Коробка передач", 5000.0},
//            {"Тормозные диски", 2700.0}
//        };
//
//        random_device rd;
//        mt19937 gen(rd());
//        uniform_int_distribution<> distribution(0, parts.size() - 1);
//
//        int quantityParts = distribution(gen);
//
//        set<string> generatedParts;
//        double price{};
//
//        while (generatedParts.size() < quantityParts) {
//            auto it = next(parts.begin(), distribution(gen));
//            string partName = it->first;
//
//            if (generatedParts.insert(partName).second) {
//                cout << "- " << partName << " (Цена: " << it->second << " руб.)" << endl;
//                price += it->second;
//            }
//        }
//        cout << "Ваша общая оплата за ремонт составляет: " << price << " руб." << endl;
//    }
//
//    void letsFix(Car& car) {
//        cout << "Ваша машина " << car.getName() << " отремонтирована!" << endl;
//    }
//};
//
//class Car {
//private:
//    string carName;
//    CarService object;
//
//public:
//    void setName(string name) {
//        carName = name;
//    }
//
//    string getName() {
//        return carName;
//    }
//
//    void showAanalysisBrokenPart() {
//        object.analysisBrokenPart();
//    }
//
//    void getGenerateBrokenPart() {
//        object.generateBrokenPart();
//    }
//
//    void fix() {
//        object.letsFix(*this);
//    }
//};
//
//int main() {
//    setlocale(0, "ru");
//    Car car1;
//    string name;
//    cout << "Введите Название своей машины: ";
//    cin >> name;
//    car1.setName(name);
//
//    car1.showAanalysisBrokenPart();
//    car1.getGenerateBrokenPart();
//    car1.fix();
//
//    return 0;
//}

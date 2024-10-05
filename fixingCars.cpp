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
	}

	void generateBrokenPart() {
		cout << "� ����� ������ ���� �������: " << endl;
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
				cout << "- " << partName << " (����: " << it->second << " ���.)" << endl;
				price += it->second;
			}
		}
		cout << "���� ����� ������ �� ������ ����������: " << price << " ���." << endl;
	}

	/*void letsFix(Car& name) {
		cout << "���� ������ " << name.getName() << " ���������������!" << endl;
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
	string name; cout << "������� �������� ����� ������: "; cin >> name;
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
//        cout << "��������� �������. ���������� ������ ������ �� ����� ������." << endl;
//        cout << "��������...";
//
//        // �������� �������� � ��������-�����
//        for (int i = 0; i <= 100; ++i) {
//            cout << "\r��������... [" << i << "%]";
//            this_thread::sleep_for(chrono::milliseconds(50)); // �������� 50 �����������
//            cout.flush();
//        }
//        cout << "\r��������... [100%]" << endl;
//        cout << "�������� ���������!" << endl << endl;
//    }
//
//    void generateBrokenPart() {
//        cout << "� ����� ������ ���� �������: " << endl;
//        map<string, double> parts = {
//            {"���������", 95000.0},
//            {"����� ���������", 400.0},
//            {"�������", 10000.0},
//            {"��������", 3000.0},
//            {"������� ����������", 5000.0},
//            {"����", 2500.0},
//            {"�����������", 5500.0},
//            {"������� �������", 5000.0},
//            {"��������� �����", 2700.0}
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
//                cout << "- " << partName << " (����: " << it->second << " ���.)" << endl;
//                price += it->second;
//            }
//        }
//        cout << "���� ����� ������ �� ������ ����������: " << price << " ���." << endl;
//    }
//
//    void letsFix(Car& car) {
//        cout << "���� ������ " << car.getName() << " ���������������!" << endl;
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
//    cout << "������� �������� ����� ������: ";
//    cin >> name;
//    car1.setName(name);
//
//    car1.showAanalysisBrokenPart();
//    car1.getGenerateBrokenPart();
//    car1.fix();
//
//    return 0;
//}

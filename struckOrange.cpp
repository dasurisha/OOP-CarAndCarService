//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Orange {
//public:
//	int type;
//	double quantity;
//	Orange(int type, double quantity) : type(type), quantity(quantity) {}	
//};
//
//int main() 
//{
//	srand(time(0));
//	setlocale(0, "ru");
//
//	vector<Orange> v;
//	v.reserve(10);
//
//	for (int i = 0; i < v.capacity(); ++i) //10
//	{
//		int type = 1 + rand() % 2;
//		int quantity = 1 + rand() % 100;
//		v.emplace_back(type, quantity); // v.push_back(Orange(type, quantity)); 
//	}
//
//	sort(v.begin(), v.end(), [](Orange o1, Orange o2) { return o1.quantity < o2.quantity; }); // lambda func
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		char buffer[64];
//
//		// int array[5]{};
//		// sizeof(array) / sizeof(*array);
//
//		snprintf(buffer, sizeof(buffer), "¹%i t: %i, q: %.0lf", i + 1, v[i].type, v[i].quantity);
//
//		cout << string(buffer) << endl;
//	}
//}
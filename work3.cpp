/*#include <iostream>
#include <string>
#include <conio.h>
int main() {
	setlocale(0, "ru");
	double num1 = 0;
	std::cout << "Вас приветствует <Калькулятор> ! Внимание: образцы возможных специальных символов - '+', '-', '*', '/' ." << std::endl;
	std::cout << "Введите первое число: ";
	std::cin >> num1;


	std::cout << "Введите специальный символ - '+', '-', '*', '/': ";
	char sign = _getch();
	std::cout << sign << std::endl;

	double num2 = 0;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	std::cout << "Введите специальный символ - '=' ";
	char equals = _getch();
	std::cout << sign << std::endl;

	if (sign == '+') {
		double addition = num1 + num2;
		if (equals == '=') {
			std::cout << addition;
		}
	}
	else if (sign == '-') {
		double subtraction = num1 - num2;
		if (equals == '=') {
			std::cout << subtraction;
		}
	}
	else if (sign == '*') {
		double multiplication = num1 * num2;
		if (equals == '=') {
			std::cout << multiplication;
		}
	}
	else if (sign == '/') {
		double division = num1 / num2;
		if (equals == '=') {
			std::cout << division;
		}
	}
};*/

//#include <iostream>
//#include <string>
//#include <conio.h>
//int main() {
//	setlocale(0, "ru");
//	//char sign;
//	double num1 = 0;
//	std::cout << "Вас приветствует <Калькулятор> ! Внимание: образцы возможных специальных символов - '+', '-', '*', '/' ." << std::endl;
//	std::cout << "Введите первое число: ";
//	std::cin >> num1;
//
//
//	std::cout << "Введите специальный символ - '+', '-', '*', '/': ";
//	char sign = getchar();
//	std::cout << sign << std::endl;
//
//	double num2 = 0;
//	std::cout << "Введите второе число: ";
//	std::cin >> num2;
//
//	if (sign == '+') {
//		std::cout << "Результат: " << num1 + num2;
//	}
//	else if (sign == '-') {
//		std::cout << "Результат: " << num1 - num2;
//	}
//	else if (sign == '*') {
//		std::cout << "Результат: " << num1 * num2;
//	}
//	else if (sign == '/') {
//		std::cout << "Результат: " << num1 / num2;
//	}
//}

//#include <iostream>
//int main() {
//	setlocale(0, "ru");
//	int a;
//	std::cout << "Введите число 'a': " ;
//	std::cin >> a;
//	int b = (a == 0) ? a + 2 : (a == 1) ? a * a : a;
//	std::cout << (a == 0 ? "Ваше число 'а' = 0" : (a == 1 ? "Ваше число 'а' = 1" : "Ваше число 'а' неравно 0 и 'а' неравно 1"));
//	std::cout <<", поэтому число 'b' равно: " << b << "\n\n";
//}


//#include <iostream>
//int main() {
//	setlocale(0, "ru");
//
//	int a = 3;
//	int b = 7;
//	std::cout << (a < b ? "а меньше чем b" : (a == b ? "а равно b" : "а больше чем b"));
//}




	//int numbers[5] = { 1,2,3,4,5 };

	/*for (int i = 0; i < 5; i++)
	{
		std::cout << "numbers[" << i << "] = ";
		std:: cin >> numbers[i];

	}*/
	/*for (int i = 0; i < 5; i++)
	{
		std::cout << "numbers[" << i << "] = " << numbers[i] << "\n";


	}*/

	/*char word[]{ "Hello" };
	cout << word[2];*/

	//char word[15] ; // строковый массив
	//std::cin.getline(word,15);//можно ввести строку с пробелами 
	//int i{};
	//while (word[i] != '\0') {
	//	std::cout << word[i++];
	//}
	/*std::string n;
	getline(cin, n);
	std::cout << n.size();*/

	//число элементов массива

	//numbers[0] = 7; //изменение значения элемента
	//int first = numbers[0];// присваивание переменной значение элемента
	//cout << "Длина массива: " << size(numbers);
	/*for (int i = 0; i < n; i++) {
		cout << numbers[i] << endl;
	}*/
	//int numbers[]{ 1,2,3,4 };//массив содержит 4 элемента
	//int sum{};
	//for (int i = 0; i < size(numbers); sum += numbers[i++]);
	//cout << "Сумма:" << sum;

	//const int max{ 6 };//массив
	//int numbers[max];
	//int i{};
	//cout << "Введите числа:" << endl;
	//while (i < max) {
	//	cin >> numbers[i];
	//	i++;
	//}
	//for (int i = 1; i <= max; ++i) {//чтобы перевернуть числа и вывести в обратном порядке
	//	cout << numbers[max-i] << "\t";
	//}
	/*const int max{ 100 };
	char string[max];

	cout << "Введите строку:";
	cin.getline(string, max);

	int count{};
	for (;count< max && string[count] != '\0';++count){}
	cout << "Кол-во символов:" << count;*/
	//const int max{ 100 };

//#include <iostream>
//#include <string>
//#include <istream>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	string word;
//	cout << "Введите строку: ";
//	cin >> word;
//	int lenght = size(word);
//	int i{};
//	int tr{};
//	for (int i = 0; i < lenght / 2; i++) {
//		if (word[i] == word[lenght - i - 1]) {
//			tr = 2;
//		}
//		else {
//			tr = 1;
//		}
//	}
//	if (tr == 2) {
//		cout << "Это полиндром!";
//	}
//	else if (tr == 1) {
//		cout << "Это не полиндром!";
//	}
//};
/*while (i < lenght / 2) {
		if (word[i] != word[lenght - i - 1]) {
			fl = 1;
		}
		else {
			tr = 2;
		}
		++i;
	}*/
	//#include <iostream>
	//#include <string>
	//#include <istream>
	//using namespace std;
	//int main() {
	//	setlocale(0, "ru");
		//char arr[]{ -32,-31,-30,-29,-28,-27,-26,-25,-24,-23,-22,-21,-20,-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0 };
		//int a{};
		//int b{};
		//cout << "Введите первый индекс: ";
		//cin >> a;
		//cout << "Введите второй индекс: ";
		//cin >> b;
		//for (int i = 0; a <= i <= b; i++) {
		//	cout << arr[i];
		//}
		///*char arr[]{ -32,-31,-30,-29,0 };
		//for (int i = 0; i < size(arr); ++i) {
		//	cout << "Введите букву: ";
		//	cin >> i;
		//	cout << arr[i] << endl;
		//	cout << arr;
		//}*/
		/*char start, stop;
		cin >> start >> stop;

		for (char i = start; i <= stop; i++)
		{
	//		cout << i << " ";
	//	}*/
	//}

	//#include <iostream>
	//int main() {
	//	setlocale(0, "ru");
	//	int n{};
	//	int m{};
	//	int matrix[10][10];
	//	std::cout << "Введите кол-во строк: ";
	//	std::cin >> n;
	//	std::cout << "Введите кол-во столбцов: ";
	//	std::cin >> m;
	//	int quantity = n * m;
	//	int sum{};
	//
	//	for (int i = 0; i < n; i++)
	//	{
	//		for (int j = 0; j < m; j++)
	//		{
	//			std::cin >> matrix[i][j];
	//			sum += matrix[i][j];
	//		}
	//	}
	//	std::cout << "Полученная матрица: " << std::endl;
	//	for (int i = 0; i < n; i++)
	//	{
	//		for (int j = 0; j < m; j++)
	//		{
	//			std::cout << matrix[i][j] << " ";
	//		}
	//		std::cout << std::endl;
	//	}
	//	std::cout << "Среднее арифметическое чисел этой матрицы: " << sum / quantity;
	//
	//}

	////ДЗ: строка, найти сумму цифр в строке 
	//#include <iostream>
	//#include <string>
	//using namespace std;
	//int main() {
	//	setlocale(0, "ru");
	//	string s;
	//	int sum{};
	//	cout << "Введите строку: ";
	//	cin >> s;
	//	for (auto& i : s) {
	//		if (i >= '0' && i <= '9') {
	//			sum += i - '0';
	//		}
	//	}

	//создать массив на 100 случайных элементов. Вывести адрес самого большого и самого маленького элемента
	//#include <iostream>
	//#include <string>
	//#include <algorithm>
	//using namespace std;
	//int main() {
	//	setlocale(0, "ru");
	//	srand(time(0));
	//	/*int a{};
	//	while (a != 5) {
	//		a = 1 + rand() % 100;
	//		cout << a << endl;
	//	}
	//	*/
	//	/*int a = 34;
	//	int* aPtr = &a;
	//	cout << a << endl;
	//	cout << aPtr;*/
	//	int quantity{};
	//	int s[100]{};
	//	for (int i = 0; i < 100; ++i) {
	//		s[i] = 1 + rand() % 100;
	//		cout << s[i] << endl;
	//		quantity++;
	//		
	//	}
	//	int* min = min_element(s, s + 100);
	//	int* max = max_element(s, s + 100);
	//	cout << *min << "Минимальное число :" << min<< "Его адрес: "<<endl;
	//	cout << *max << "Максимальное число:" << max<< "Его адрес: "<<endl;
	//	
	//	cout << quantity<<"РАЗОв";
	//}


	/*#include <iostream>
	#include <string>
	#include <algorithm>
	using namespace std;
	int main() {
		setlocale(0, "ru");
		srand(time(0));
		int s[100]{};
		cout << "Массив из 100 случайных элементов: ";
		for (int i = 0; i < 100; ++i) {
			s[i] =  1 + rand() % 100;
			cout << s[i] << "; ";
		}
		cout << "\n\n";
		int* min = min_element(s, s + 100);
		int* max = max_element(s, s + 100);
		cout << "Минимальный элемент: " << *min << " - адрес: " << min << endl;
		cout << "Максимальный элемент: " << *max << " - адрес: " << max << endl;
	}*/

	//#include <iostream>
	//#include <string>
	//using namespace std;
	//int main() {
	//	setlocale(0, "ru");
	//	srand(time(0));
	//	int quantity{};
	//	double a{};
	//	while (a != 3.1415) {
	//		a = (double)rand() / RAND_MAX;
	//		cout << a << endl;
	//		quantity++;
	//	}
	//	cout << quantity << " раз понадобилось чтобы сгенерировать 5!";
	//}

	//#include <random>
	//#include <iostream>
	//using namespace std;
	//
	//int main() {
	//	setlocale(0, "ru");
	//	srand(time(0));
	//	std::random_device rd;
	//	std::mt19937 gen(rd());//обьект генераора случ чисел gen
	//	double random_num = generate_canonical<double, 53>(gen) * 10.0 + 10.0;
	//	cout << random_num;
	//}



	//#include <random>
	//#include <iostream>
	//using namespace std;
	//
	//int main() {
	//	setlocale(0, "ru");
	//	srand(time(0));
	//	int quantity{};
	//	random_device rd;
	//	mt19937 gen(rd());
	//	uniform_int_distribution<> dist(1.0, 20.0);
	//	double ran_num{};
	//	while (ran_num != 3.1415) {
	//		ran_num = dist(gen);
	//		cout << ran_num << " ";
	//		quantity++;
	//	}
	//	cout << endl;
	//	cout << "Кол-во раз: " << quantity;
	//}


	//#include <random>
	//#include <iostream>
	//
	//int main() {
	//	std::random_device rd;
	//	std::mt19937 gen(rd());
	//	std::uniform_real_distribution<> dist(3.14158, 3.14159); // Диапазон от 1.0 до 20.0
	//	int quantity{};
	//	double random_number{};
	//	while (random_number != 3.14159) {
	//		random_number = dist(gen);
	//		std::cout << random_number << ", ";
	//		quantity++;
	//	}
	//	std::cout<<"Кол-во разов: "<< quantity;
	//}


/*ДЗ: создать массив на 100 случайных элементов. Вывести адрес самого большого и самого маленького элемента*/
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	srand(time(0));
//	long double matrix[10][10];
//	int n{};
//	int m{};
//	long double remains{};
//	cout << "Введите кол-во строк: ";
//	cin >> n;
//	cout << "Введите кол-во столбцов: ";
//	cin >> m;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			matrix[i][j] = rand() / 10000.0; //для генерации веществ чисел
//
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			remains = matrix[i][j] - (int)matrix[i][j];//для вывода остатка без целого
//			cout << remains << " ";//вывод остатка
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < n; ++i) {//для получения прогрессии
//		for (int j = 1; j < m; ++j) {
//			long double result = matrix[i][j] - matrix[i][j - 1];
//			cout << result << " ";
//		}
//		cout << endl;
//	}
//	
//}



/*ДЗ: дана матрица вещественных чисел, найти среднюю прогрессию ряда всех дробных частей чисел :) */
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	srand(time(0));
//	long double matrix[10][10];
//	int n{};
//	int m{};
//	int quantity{};
//	long double sum_remains{};
//	long double remains{};
//	cout << "Введите кол-во строк матрицы: ";
//	cin >> n;
//	cout << "Введите кол-во столбцов матрицы: ";
//	cin >> m;
//	cout << "Ваша сгенерированная матрица: " << endl;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			matrix[i][j] = rand() / 10000.0; //для генерации веществ чисел
//			cout << setw(10) << left << matrix[i][j];
//		}
//		cout << endl;
//	}
//	cout << "-------------------------------" << endl;
//	cout << "Ваша матрица со значениями без целой части: " << endl;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			remains = matrix[i][j] - (int)matrix[i][j];//для вывода остатка без целого
//			cout << setw(10) << left << remains;//вывод остатка
//			sum_remains += remains;
//			quantity++;
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "Среднее арифметическое дробной части чисел в матрице: " << sum_remains / quantity << endl;
//}


/*ДЗ: матрица отсортированная. напистаь быстырй алгоритм поиска элемента >:)*/
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	int n = 3;
//	int m = 3;
//	int matrix[3][3]{
//		{15, 20, 30},
//		{22, 24, 35},
//		{32, 36, 40}
//	};
//	int element = 36;
//	int row = 0;
//	int col = matrix[0][m - 1];
//	while (row < n && col >= 0) {
//		if (matrix[row][col] == element) {
//			cout << "Есть такое число";
//		}
//		else if (matrix[row][col] > element) {
//			col--;
//		}
//		else {
//			row++;
//		}
//	}
//
//
//}




/*Создать два массива и массив ссылок(не ссылку на массив) и сохранить в него
первую половину первого массива и вторую половину второго массива.Протестировать
работоспособность кода, выведя эти половины через массив ссылок*/
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	int first_arr[10]{ 1,2,3,4,5,6,7,8,9, 10 };
//	int second_arr[10]{ 20,21,22,23,24,25,26,27,28,29 };
//	int* link_arr[10];
//
//	for (int i = 0; i < size(first_arr)/2; ++i) {
//		link_arr[i] = &first_arr[i];
//		cout << *link_arr[i] << " ";
//	}
//
//	for (int i = size(second_arr)/2; i < size(second_arr); ++i) {
//		link_arr[i] = &second_arr[i];
//		cout << *link_arr[i] << " ";
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;
//struct Account {
//public:
//	string name;
//	string last_name;
//	string middle_name;
//	double id;
//	double balance{};
//	void get_data() {
//		cout << "Фамилия: ";
//		cin >> last_name;
//		cout << "Имя: ";
//		cin >> name;
//		cout << "Отчество: ";
//		cin >> middle_name;
//		
//	}
//	void show_data() {
//		cout << "Фамилия: " << last_name << endl;
//		cout << "Имя: " << name << endl;
//		cout << "Отчество: " << middle_name << endl;
//		cout << "Баланс: " << balance << endl;
//	}
//	void add(double summa) {
//		balance += summa;
//		cout << "Деньги успешно зачислены!" << endl;
//	}
//	void withdraw(double summa) {
//		if (summa > balance) {
//			cout << "Внимание! Недостаточно средств." << endl;
//		}
//		else {
//			balance -= summa;
//			cout << "Деньги успешно списаны!" << endl;
//		}
//	}
//};
//
//
//int main() {
//	setlocale(0, "ru");
//	cout << "Вас приветствует Банк N !" << endl;
//	cout << "Прежде чем использовать услуги нашего банка, необходима регистрация. Введите данные ниже!" << endl;
//
//	Account human1;
//	human1.get_data();
//	cout << endl;
//	cout << "Проверьте Ваши данные, если всё верно напишите '1', иначе '2' ." << endl;
//	human1.show_data();
//	int result;
//	cout << "Введите (1 или 2): ";
//	cin >> result;
//	switch (result) {
//	case 1:
//		cout << "Данные успешно сохранены!" << endl;
//		break;
//	case 2:
//		human1.get_data();
//		cout << "Вы успешно откорректировали данные! Аккаунт сохранён." << endl;
//		human1.show_data();
//		break;
//	}
//	cout << "------------------------------" << endl;
//	cout << "Клиент " << human1.name << " приветсвуем Вас в Главном меню. Выберете необходимое действие." << endl;
//	cout << "Введите цифру 1 - показать информацию клиента." << endl;
//	cout << "Введите цифру 2 - положить деньги на счёт." << endl;
//	cout << "Введите цифру 3 - снять деньги со счёта." << endl;
//	int result2{};
//	cin >> result2;
//	while (result2 < 5) {
//		cin >> result2;
//		switch (result2) {
//		case 1:
//			cout << "Ваши данные: " << endl;
//			human1.show_data();
//			break;
//		case 2:
//			cout << "Введите сумму, которую хотите положить: " << endl;
//			human1.add(300);
//			break;
//		case 3:
//			cout << "Введите сумму, которую хотите снять: " << endl;
//			human1.withdraw(400);
//			break;
//		default:
//			cout << "Такой цифры нет!";
//			break;
//		}
//	}
//	
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Orange {
//public:
//	int type;
//	double quantity;
//	Orange(int type, double quantity) : type(type), quantity(quantity) {}
//	void buy_orange1() {
//		while (type >=2) {
//			cout << "Выберите 1 или 2. Других видов апельсонов нет. Введите: ";
//			cin >> type;
//			if (type == 1) {
//				cout << "Цена за 1 шт - 35 рублей." << endl;
//				cout << "С вас " << quantity * 35 << " рублей.";
//				break;
//			}
//			else if (type == 2) {
//				cout << "Цена за 1 шт - 50 рублей." << endl;
//				cout << "С вас " << quantity * 50 << " рублей.";
//				break;
//			}
//		}
//	}
//};
//
//int main() {
//	setlocale(0, "ru");
//	srand(time(0));
//	cout << "Покупка апельсинов!" << "\n\n";
//	cout << "Апельсин-красный: 1 " << endl;
//	cout << "Апельсин-оранжевый: 2 " << endl;
//	int type_of_orange;
//	cout << "Выберите вид апельсинов: "; cin >> type_of_orange;
//	double quantity_oranges;
//	cout << "Введите кол-во апельсинов: "; cin >> quantity_oranges;
//	Orange fruct = Orange(type_of_orange, quantity_oranges);
//	fruct.buy_orange1();
//	vector<Orange> v;
//	v.reserve(10);
//	v.push_back() = 1 + rand() % 100;
//	cout << "\n\n";
//	sort(v.begin(), v.end());
//	for (auto i : v){
//		cout << i << " ";
//	}
//	
//}
   



//ДЗ сгенерировать вектор апельсинов и отсортировать по возрастанию quantity

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	srand(time(0));
//	setlocale(0, "ru");
//	vector<int> v(10);
//	for (int i = 0; i < v.size(); ++i) {
//		v[i] = 1 + rand() % 100;
//		cout << v[i] << " ";
//	}
//	cout << "\n\n";
//	sort(v.begin(), v.end());
//	for (auto i : v){
//		cout << i << " ";
//	}
//}

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
//		snprintf(buffer, sizeof(buffer), "№%i t: %i, q: %.0lf", i + 1, v[i].type, v[i].quantity);
//
//		cout << string(buffer) << endl;
//	}
//}

//ДОБАВЛЕНИЕ РАНДОМ ЧИСЕЛ В ВЕКТОР И ВЫВОД НА ЭКРАН С ПОМОЩЬЮ ИТЕРАТОРА
//#include <iostream>
//#include <vector>
//#include <random>
//using namespace std;
//int main() {
//	vector <int> v;
//	v.reserve(10);
//	for (int i = 0; i < v.capacity(); ++i) {
//		
//		v.push_back( 1 + rand() % 100);
//	}
//	for (auto it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//}



//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(0,"ru");
//	int a{};
//	cout << "Введите число: ";
//	cin >> a;
//	for (int i = 0; i <= a/2; ++i) {
//		if (a % i == 0) {
//			cout << i;
//			if (i != a/i) {
//				cout << a / i << " ";
//		    }
//		}
//	}
//}
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	int num=2;
//	int count{};
//	while (count < 5) {
//		int result = 1;
//		for (int i = 2; i <= num/2; ++i) {
//			if (num % i == 0) {
//				result += i;
//				if (i != num / i) {
//					result += num / i;
//				}
//			}
//		}
//		if (result == num) {
//			cout << num << " ";
//			count++;
//		}
//		num++;
//	}
//	cout << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	setlocale(0, "ru");
//	char start, stop;
//	cin >> start >> stop;
//
//	for (char i = start; i <= stop; ++i)
//	{
//		cout << i << " ";
//	}
//#include <iostream>
//#include <string>
//using namespace std;
//string getCharacter(char* first, char* second, int choice) {
//	string result;
//	for (char i = *second ; i >= *first; --i){
//		result += i;
//		if (i != *first) {
//			result += "  ";
//		}
//	}
//	return result;
//}
//
//int main() {
//	setlocale(0, "ru");
//	char start, stop;
//	cout << "Введите через пробел первую букву, а затем вторую: ";
//	cin >> start >> stop;
//	if (start > stop) {
//		swap(start, stop);
//	}
//	cout << getCharacter(&start, &stop);
//}


//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//enum ChoosingAction
//{
//	AllNums,
//	PositiveNums,
//	NegativeNums
//};
//
//
//string vectorToString(vector<int>::iterator begin, vector<int>::iterator end, int action = ChoosingAction::AllNums) {
//	string strokaAllNums;
//	string strokaPositiveNums;
//	string strokaNegativeNums;
//	for (auto i = begin; i < end; ++i) {
//		if (action == ChoosingAction::AllNums) {
//			strokaAllNums += to_string(*i) + " ";
//			return strokaAllNums;
//		}
//		else if (action == ChoosingAction::NegativeNums) {
//			if (*i < 0) {
//				strokaNegativeNums += to_string(*i) + " ";
//				return strokaNegativeNums;
//			}
//		}
//		else if (action == ChoosingAction::NegativeNums) {
//			if (*i > 0) {
//				strokaPositiveNums += to_string(*i) + " ";
//				return strokaPositiveNums;
//			}
//		}
//	}
//
//}
//
//int main() {
//	setlocale(0, "ru");
//	vector<int> v{ 1, 2, 3, -4, -5, 6, -7, -8, 9 };
//	int ch{};
//	cout << "Введите цифру действия - 0,1,2: ";
//	cin >> ch;
//	switch (ch)
//	{
//	case ChoosingAction::AllNums:
//		cout << "все" << endl;
//		cout << vectorToString(v.begin(), v.end());
//		break;
//	case ChoosingAction::PositiveNums:
//		cout << "позитив" << endl;
//		cout << vectorToString(v.begin(), v.end(), ChoosingAction::PositiveNums);
//		break;
//	case ChoosingAction::NegativeNums:
//		cout << "негатив" << endl;
//		cout << vectorToString(v.begin(), v.end(), ChoosingAction::NegativeNums);
//		break;
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;

//void printMesage(string s) { cout << s; }


// определение функции
//string getCharacters(char& first, char& second, bool reverse);
//
//
//int main() {
//	setlocale(0, "ru");
//	char start, stop;
//	cout << "Введите через пробел первую букву, а затем вторую: ";
//	cin >> start >> stop; // си ин
//	cout << getCharacters(start, stop, true);
//}

// реализация функции
//string getCharacters(char& first, char& second, bool reverse = false) {
//	string result;
//	for (char i = first; i <= second; ++i) {
//		result = (result + i) + ' ';
//	}
//	return result;
//}
// 
// 
// /////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//string vectorToString(vector<int>::iterator begin, vector<int>::iterator end);
//
//int main() {
//	vector<int> v = { 1, -2, 3, -4, 5 };
//	cout << vectorToString(v.begin(), v.end());
//}
//
//string vectorToString(vector<int>::iterator begin, vector<int>::iterator end) {
//	string stroka;
//	for (auto i = begin; i < end; ++i) {
//		stroka += to_string(*i) + " ";
//	}
//	return stroka;
//}





//#include <iostream>
//using namespace std;
//
//// C
//enum Color
//{
//	red,
//	Green,
//	Blue
//};
//
//// C++
//enum class ClassColor
//{
//	red,
//	Green,
//	Blue
//};
//
//int main()
//{
//	srand(time(0));
//	setlocale(0, "ru");
//
//	ClassColor cc = ClassColor::red;
//	Color ccc = (Color)1;
//}


//#include <iostream> 
//#include <cmath> 
//#include <stdexcept>
//using namespace std;
//struct Triangle {
//public:
//	Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}
//	double side1;
//	double side2;
//	double side3;
//	void showInfo() {
//		cout << "Первая сторона а - " << side1 << "\nВторая сторона b - " << side2 << "\nТретья сторона c - " << side3 << endl;
//	}
//	double getPerimeter(double& side1, double& side2, double& side3) {
//		return side1 + side2 + side3;
//	}
//	double getArea(double& side1, double& side2, double& side3) {
//		double s = (side1 + side2 + side3) / 2;
//		return sqrt(s * (s - side1) * (s - side2) * (s - side3));
//	}
//	bool triangleExists(double& side1, double& side2, double& side3) {
//		return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
//	}
//};
//
//int main() {
//	setlocale(0, "ru");
//	while (true)
//	{
//		double a;
//		cout << "Введите 1 сторону а: "; cin >> a;
//		double b;
//		cout << "Введите 2 сторону b: "; cin >> b;
//		double c;
//		cout << "Введите 3 сторону c: "; cin >> c;
//		Triangle triangle1 = Triangle(a, b, c);
//
//		try {
//			if (a < 0 || b < 0 || c < 0 ) {
//				throw runtime_error("Сторона треугольника не может быть отрицательной!");
//			}
//		}
//		catch (const runtime_error& ia) {
//			cerr << "Нельзя построить треугольник из этих сторон! " << ia.what() << endl;
//			continue;
//		}
//		if (triangle1.triangleExists(a, b, c)) {
//			triangle1.showInfo();
//			cout << "Периметр треугольника: " << triangle1.getPerimeter(a, b, c) << endl;
//
//			cout << "Площадь треугольника: " << triangle1.getArea(a, b, c) << endl;
//			break;
//		}
//		else {
//			cout << "Нельзя построить треугольник из этих сторон!" << endl;
//		}
//	}
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//enum ChoosingAction
//{
//	AllNums,
//	PositiveNums,
//	NegativeNums
//};
//
//string vectorToString(vector<int>::iterator begin, vector<int>::iterator end, int action = ChoosingAction::AllNums) {
//	string stroka;
//	for (auto i = begin; i < end; ++i) {
//		if (action == ChoosingAction::AllNums) {
//			stroka += to_string(*i) + " ";
//		}
//		else if (action == ChoosingAction::NegativeNums) {
//			if (*i < 0) {
//				stroka += to_string(*i) + " ";
//			}
//		}
//		else if (action == ChoosingAction::PositiveNums) {
//			if (*i > 0) {
//				stroka += to_string(*i) + " ";
//			}
//		}
//	}
//	return stroka;
//}
//
//int main() {
//	setlocale(0, "ru");
//	vector<int> v{ 1, 2, 3, -4, -5, 6, -7, -8, 9 };
//	int action{};
//	cout << "Выберите действие, которое хотите выполнить и введите цифру!\nВывести на экран все цифры вектора - 0 \nВывести на экран только положительные цифры вектора - 1 \nВывести на экран только отрицательные числа вектора - 2\nПоле ввода: ";
//	cin >> action;
//	switch (action)
//	{
//	case ChoosingAction::AllNums:
//		cout << vectorToString(v.begin(), v.end());
//		break;
//	case ChoosingAction::PositiveNums:
//		cout << vectorToString(v.begin(), v.end(), ChoosingAction::PositiveNums);
//		break;
//	case ChoosingAction::NegativeNums:
//		cout << vectorToString(v.begin(), v.end(), ChoosingAction::NegativeNums);
//		break;
//	}
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <functional>
//
//using namespace std;
//
//enum ChoosingAction { AllNums = 1, PositiveNums, NegativeNums };
//
//string vectorToString(vector<int>::iterator begin, vector<int>::iterator end, ChoosingAction action = ChoosingAction::AllNums);
//
//int main() {
//	setlocale(0, "ru");
//	vector<int> v{ 1, 2, 3, -4, -5, 6, -7, -8, 9 };
//	int action{};
//	cout << "Выберите действие, которое хотите выполнить и введите "
//		"цифру!\nВывести на экран все цифры вектора - 1 \nВывести на экран "
//		"только положительные цифры вектора - 2 \nВывести на экран только "
//		"отрицательные числа вектора - 3\nПоле ввода: ";
//	cin >> action;
//	cout << vectorToString(v.begin(), v.end(), (ChoosingAction)action);
//}
//
//string vectorToString(vector<int>::iterator begin, vector<int>::iterator end, ChoosingAction action)
//{
//	string stroka;
//
//	function<bool(int&)> statement;
//	switch (action)
//	{
//	case ChoosingAction::AllNums:
//		statement = [](int& a) {return true; };
//		break;
//	case ChoosingAction::PositiveNums:
//		statement = [](int& a) {return a > 0; };
//		break;
//	case ChoosingAction::NegativeNums:
//		statement = [](int& a) {return a < 0; };
//		break;
//	}
//
//	for (auto i = begin; i < end; ++i)
//	{
//		if (statement(*i))
//		{
//			stroka += to_string(*i) + " ";
//		}
//	}
//	return stroka;
//}
 
 
 
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	string romanNumString;
//	cout << "Введите римское число: "; cin >> romanNumString;
//
//	map<char, int> romanNumsMap = {
//		{'I', 1},
//		{'V',5},
//		{'X',10}, 
//		{'L',50}, 
//		{'C',100},
//		{'D',500}, 
//		{'M',1000},
//	};
//
//	int previousNum{};
//	int result{};
//
//	for (int i = romanNumString.size() - 1; i >= 0; --i) {
//		int currentNum = romanNumsMap[romanNumString[i]];
//		if (currentNum < previousNum) {
//			result -= currentNum;
//		}
//		else {
//			result += currentNum;
//		}
//		previousNum = currentNum;
//	}
//
//	cout << "Арабское число: " << result << endl;
//	cout << "Объяснение: " << endl;
//
//	for (int i = 0; i < romanNumString.size(); ++i) {
//		cout << romanNumString[i] << "=" << romanNumsMap[romanNumString[i]] << endl;
//	}
//}


//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <functional>
//
//using namespace std;
//
//enum ChoosingAction { AllNums = 1, PositiveNums, NegativeNums };
//
//template <typename T>
//struct Vector {
//private:
//	T* pointerToAnArray;
//	size_t size = 0;
//	size_t capacity;
//
//public:
//	Vector(size_t startValues) : capacity(startValues) {
//		pointerToAnArray = new T[capacity];
//	}
//	struct Iterator;
//
//	size_t getSize() { return size; }
//
//	size_t getCapacity() { return capacity; }
//
//	void setCapacity(size_t newCapacity) {
//		capacity = newCapacity;
//		T* newArray = new T[capacity];
//		std::copy(pointerToAnArray, pointerToAnArray + size, newArray);
//		delete[] pointerToAnArray;
//		pointerToAnArray = newArray;
//	}
//
//	void insert(const T& number, const T& value) {
//		if (size == capacity) {
//			setCapacity(capacity * 1.5);
//		}
//		for (int i = size - 1; i > number; --i) {
//			pointerToAnArray[i] = pointerToAnArray[i - 1];
//		}
//		pointerToAnArray[number] = value;
//		++size;
//	}
//
//	void showVector() {
//		for (int i = 0; i < size; ++i) {
//			cout << pointerToAnArray[i] << " ";
//		}
//	}
//
//	T& operator[](size_t i) {
//		if (i > size - 1) {
//			throw out_of_range("Ошибка. Выход за пределы вектора.");
//		}
//		return pointerToAnArray[i];
//	}
//
//	friend ostream& operator<<(ostream& out, const Vector& vec) {
//		for (int i = 0; i < vec.size; ++i) {
//			out << vec.pointerToAnArray[i]<<" ";
//		}
//		return out;
//	}
//
//	void push_back(const T& number) {
//		if (size == capacity) {
//			setCapacity(capacity * 1.5);
//		}
//		pointerToAnArray[size++] = number;
//	}
//
//	void push_front(const T& number) {
//		if (size == capacity) {
//			setCapacity(capacity * 1.5);
//		}
//		for (int i = size; i > 0; --i) {
//			pointerToAnArray[i] = pointerToAnArray[i - 1];
//		}
//		pointerToAnArray[0] = number;
//		++size;
//	}
//
//	size_t findIndex(const T& number) {
//		if (contains(number)) {
//			for (int i = 0; i < size; ++i) {
//				if (pointerToAnArray[i] == number) {
//					return i;
//				}
//			}
//		}
//		else {
//			cout << "Индекса такого значения нет." << endl;
//		}
//	}
//
//	bool contains(const T& number) {
//		for (int i = 0; i < size; ++i) {
//			if (pointerToAnArray[i] == number) {
//				return true;
//			}
//		}
//		return false;
//	}
//
//	void pop_back() {
//		if (size > 0) {
//			pointerToAnArray[--size] = 0;
//		}
//	}
//
//	bool empty() {
//		return size == 0;
//	}
//
//	size_t front() {
//		if (size == 0) {
//			throw out_of_range("Ошибка. Вектор пустой.");
//		}
//		return pointerToAnArray[0];
//	}
//
//	Iterator begin() {
//		return Iterator(pointerToAnArray);
//	}
//
//	Iterator end() {
//		return Iterator(pointerToAnArray + size);
//	}
//
//	size_t back() {
//		if (size == 0) {
//			throw out_of_range("Ошибка. Вектор пустой.");
//		}
//		return pointerToAnArray[size - 1];
//	}
//
//	void clear() {
//		while (size > 0) {
//			pointerToAnArray[--size] = 0;
//		}
//	}
//
//	struct Iterator {
//		T* iterator;
//
//		Iterator(T* iterator) : iterator(iterator) {}
//
//		T& operator*() {
//			return *iterator;
//		}
//
//		bool operator!=(const Iterator& value) {
//			return iterator != value.iterator;
//		}
//
//		friend std::ostream& operator<<(std::ostream& stream, Iterator counter)
//		{
//			stream << *counter;
//			return stream;
//		}
//
//		Iterator& operator++() {//постфиксный 
//			iterator++;
//			return *this;
//		}
//
//		Iterator operator++(int) {//префиксный
//			Iterator temp = *this;
//			++iterator;
//			return temp;
//		}
//
//		Iterator& operator+(int num) {
//			iterator += num;
//			return *this;
//		}
//	};
//
//	static string vectorToString(Iterator begin, Iterator end, ChoosingAction action = AllNums)
//	{
//		string str;
//
//		function<bool(T&)> statement;
//		switch (action)
//		{
//		case ChoosingAction::AllNums:
//			statement = [](T& a) {return true; };
//			break;
//		case ChoosingAction::PositiveNums:
//			statement = [](T& a) {return a > 0; };
//			break;
//		case ChoosingAction::NegativeNums:
//			statement = [](T& a) {return a < 0; };
//			break;
//		}
//
//		for (auto i = begin; i != end; ++i)
//		{
//			if (statement(*i))
//			{
//				str += to_string(*i) + " ";
//			}
//		}
//		return str;
//	}
//};
//int main() {
//	setlocale(0, "ru");
//	Vector<int> v(4);
//	v.push_back(1);
//	v.push_back(-2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(-5);
//
//	//int action{};
//	/*cout << "Выберите действие, которое хотите выполнить и введите "
//		"цифру!\nВывести на экран все цифры вектора - 1 \nВывести на экран "
//		"только положительные цифры вектора - 2 \nВывести на экран только "
//		"отрицательные числа вектора - 3\nПоле ввода: ";
//	cin >> action;*/
//
//	//cout << Vector<int>::vectorToString(v.begin(), v.end(), (ChoosingAction)action
//	cout << v;
//}

//#include <iostream>
//#include <list>
//using namespace std;
//
//template <typename T>
//void showList(const list<T> &lst) {
//	for (auto i = lst.cbegin(); i != lst.cend(); ++i) {
//		cout << *i << " ";
//	}
//}
//
//int main() {
//	setlocale(0, "ru");
//	list<int> myList{ 6, 5, 4, 3, 2, 1 };
//	//cout <<"Размер: " << myList.size() << endl;
//	auto it = myList.begin();
//	advance(it, 2);
//	showList(myList);
//
//	cout << endl;
//
//	myList.emplace(it, 0);
//	showList(myList);
//
//}

//#include <iostream>
//#include <string>
//#include <list>
//using namespace std;
//
//void addTask(list<string>& list) {
//	string task;
//	cout << " Введите новую задачу: ";
//	cin.ignore();
//	getline(cin, task);
//	list.push_back(task);
//}
//
//void deleteTask(list<string>& list) {
//	int numberDeleted;
//	cout << " Введите номер задачи которую хотите удалить: "; cin >> numberDeleted;
//	
//	if (numberDeleted > 0 && numberDeleted <= list.size()) {
//		auto it = list.begin();
//		advance(it, numberDeleted-1);
//		list.erase(it);
//	}
//	else {
//		cout << " Некорректный номер задачи. Попробуйте ещё раз.";
//	}
//}
//
//void changeTask(list<string>& list) {
//	int numberCorrected;
//	cout << " Введите номер задачи которую хотите удалить: "; cin >> numberCorrected;
//	
//	if (numberCorrected > 0 && numberCorrected <= list.size()) {
//		auto it = list.begin();
//		advance(it, numberCorrected-1);
//		list.erase(it);
//		string newTask;
//		cout << "\n Введите задачу: ";
//		cin.ignore();
//		getline(cin, newTask);
//		list.insert(it, newTask);
//	}
//	else {
//		cout << " Некорректный номер задачи. Попробуйте ещё раз.";
//	}
//}
//
//void showTasks(list<string>& list) {
//	if (list.size() == 0) {
//		cout << " У вас нет задач.";
//	}
//	else {
//		int i = 1;
//		cout << " Ваши задачи на день: " << endl;
//		for (auto it = list.begin(); it != list.end(); ++it) {
//			cout << i << "." << *it << endl;
//			++i;
//		}
//	}
//	
//}
//
//int main() {
//	setlocale(0, "ru");
//	list<string> tasks;
//	cout << " < Программа для создания списка задач на день! > \n\n Возможные действия:\n Добавить новую задачу - 1. \n Удалить задачу - 2. \n Изменить задачу - 3. \n Показать все задачи - 4.";
//	
//	while (true) {
//		int choice;
//		cout << "\n\n Укажите номер действия: "; cin >> choice;
//
//		if (choice <= 4) {
//			switch (choice) {
//			case 1:
//				addTask(tasks);
//				continue;
//			case 2:
//				deleteTask(tasks);
//				continue;
//			case 3:
//				changeTask(tasks);
//				continue;
//			case 4:
//				showTasks(tasks);
//				continue;
//			}
//		}
//		else {
//			cout << " Такого номера действия нет. Введите допусимые действия!";
//			continue;
//		}
//	};
//}



//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Bank {
//public:
//	int accountNumber{};
//	int balance{};
//	string accountHolder{};
//	int typeAccount{};
//	string currency{};
//	int interestRate{};
//
//	void addMoney(const int& value) {
//		balance += value;
//	}
//
//	void withdraw(const int& value) {
//		if (value > balance) {
//			cout << "Снятие средств невозможно!" << endl;
//			return;
//		}
//		balance -= value;
//	}
//
//	int currentBalance() {
//		return balance;
//	}
//
//	void transferMoney(Bank& account1, Bank& account2) {
//		int value{};
//		cout << "Ведите сумму которую хотите перевести: "; cin >> value;
//		if (value > balance) {
//			cout << "Снятие средств невозможно!" << endl;
//			return;
//		}
//		account1.balance -= value;
//		account2.balance += value;
//	}
//	
//};
//
//int main() {
//	setlocale(0, "ru");
//
//	/*vector<Bank> user1;
//	user1.reserve(6);
//
//	for (int i = 0; i < user1.capacity(); ++i) {
//		int number{};
//		number++;
//		user1.emplace_back(number);
//	}*/
//
//	Bank account1;
//	Bank account2;
//	int a;
//	cout << "Введите сумму пополнения 1 счёт: "; cin >> a;
//	account1.addMoney(a);
//	cout << "Текущий баланс 1 счёт: " << account1.currentBalance() << endl;
//	
//	cout << "Текущий баланс 2 счёт: " << account2.currentBalance() << endl;
//
//	account1.transferMoney(account1, account2);
//
//	cout << "Текущий баланс 2 счёт: " << account2.currentBalance() << endl;
//	cout << "Текущий баланс 1 счёт: " << account1.currentBalance() << endl;
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	vector<int> v1{ 2,4,1,5,10,3,78,1,4,5,2 };
//	vector<int> v2(10);
//
//	generate(v2.begin(), v2.end(), []() {return rand() % 10 + 1; });
//
//	for (auto num : v2) {
//		cout << num << " ";
//	}
//	/*sort(v1.begin(), v1.end());
//	auto it = unique(v1.begin(), v1.end());
//	v1.erase(it, v1.end());
//
//	for (auto num : v1) {
//		cout << num << " ";
//	}*/
//
//	/*auto it = find(v1.begin(), v1.end(), 1);
//	if (it != v1.end()) {
//		std::cout << "Элемент 1 найден, его индекс: " << distance(v1.begin(), it) << std::endl;
//	}
//	else {
//		std::cout << "Элемент 1 не найден" << std::endl;
//	}*/
//
//
//	/*string d = "123645";
//	if (all_of(d.begin(), d.end(), [](char s) {return isdigit(s); })) {
//		cout << "Все элементы явл-ся числами";
//	}
//	else {
//		cout << "Не все элементы явл-ся числами";
//	}*/
//
//
//	/*if (any_of(v1.begin(), v1.end(), [](int num) {return num % 2 == 0; })) {
//		cout << "Один четный элемент есть";
//	}
//	else {
//		cout << "Нет четных";
//	}*/
//
//
//	/*if (all_of(v1.begin(), v1.end(), [](int num) {return num % 2 == 0; })) {
//		cout << "Все четные";
//	}
//	else {
//		cout << "Не все четные";
//	}*/
//
//
//	/*auto it = min_element(v1.begin(), v1.end());
//	cout << *it << endl;
//	auto i = max_element(v1.begin(), v1.end());
//	cout << *i;*/
//
//
//	/*copy_if(v1.begin(), v1.end(), back_inserter(v2), [](int num) {return num % 2 == 0; });
//
//	for (auto num : v2) {
//		cout << num << " ";
//	}*/
//
//
//	/*transform(v1.begin(), v1.end(),v1.begin(), [](int num) {return num * 2; });
//
//	sort(v1.begin(), v1.end());
//
//	for (auto num : v1) {
//		cout << num << " ";
//	}*/
//
//
//	/*int a{}; cin >> a;
//	if (binary_search(v1.begin(), v1.end(), a)) {
//		cout << "Число есть";
//	}
//	else {
//		cout << "Нет числа";
//	}*/
//
//}


//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//struct DailyPlanner {
//	void addTask() {
//		string fileName = "task.txt";
//		ifstream ifile(fileName);
//		string task;
//		int numberTask = 1;
//		if (ifile.is_open()) {
//			while (getline(ifile, task)) {
//				cout << numberTask << ". " << task << endl;
//				numberTask++;
//			}
//			ifile.close();
//		}
//		cout << "Введите текст новой задачи (если больше не нужно создавать задачи введите '-') : " << endl;
//		while (true){
//			cout << numberTask << ". ";
//			getline(cin, task);
//
//			if (task == "-") {
//				break;
//			}
//
//			ofstream ofile(fileName, ios::app);
//			if (ofile.is_open()) {
//				ofile << numberTask << ". " << task << endl;
//				ofile.close();
//			}
//
//			numberTask++;
//		}
//	}
//};
//
//
//int main() {
//	setlocale(0, "ru");
//	cout << " < Программа для создания списка задач на день! > \n\n Возможные действия:\n Добавить новую задачу - 1. \n Удалить задачу - 2. \n Изменить задачу - 3.";
//
//	DailyPlanner obj;
//	obj.addTask();

	
	//while (true) {
	//	int choice;
	//	cout << "\n\n Укажите номер действия: "; cin >> choice;

	//	if (choice <= 4) {
	//		switch (choice) {
	//		case 1:
	//			addTask(tasks);
	//			continue;
	//		case 2:
	//			deleteTask(tasks);
	//			continue;
	//		case 3:
	//			changeTask(tasks);
	//			continue;

	//		}
	//	else {
	//		cout << " Такого номера действия нет. Введите допусимые действия!";
	//		continue;
	//	}
	//	};
	//}
//}



//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct DailyPlanner {
//	int numberTask;
//	string task;
//};
//
//
//vector<DailyPlanner> readTasks(const string& fileName) {
//	vector <DailyPlanner> tasks;
//	ifstream ifile(fileName);
//	if (ifile.is_open()) {
//		string task;
//		int numTask;
//		string textTask;
//		while (getline(ifile, task)) {
//			size_t pos = task.find('.');
//			if (pos != string::npos) {
//				numTask = stoi(task.substr(0, pos));
//				textTask = task.substr(pos + 2);
//				tasks.push_back({ numTask,textTask });
//			}
//		}
//		ifile.close();
//	}
//	return tasks;
//}
//
//
//void writeTask(const string& fileName, vector<DailyPlanner>& tasks) {
//	ofstream ofile(fileName);
//	
//	for (const auto& task : tasks) {
//		ofile << task.numberTask << ". " << task.task << endl;
//	}
//	ofile.close();
//	
//}
//
//
//
//
//int main() {
//	setlocale(0, "ru");
//	string fileName = "tasks.txt";
//	cout << "Ваши задачи на день: " << endl;
//	vector<DailyPlanner> tasks = readTasks(fileName);
//
//	for (const auto& task : tasks) {
//		cout << task.numberTask << ". " << task.task << endl;
//	}
//
//	cout << " < Программа для создания списка задач на день! > \n\n Возможные действия:\n Добавить новую задачу - 1. \n Удалить задачу - 2. \n Изменить задачу - 3. \n Сохранение- 4.";
//	while (true) {
//		int choice{};
//		cout << "\n\n Укажите номер действия: "; cin >> choice;
//		cin.ignore();
//
//		switch (choice) {
//		case 1: {
//			string newTask;
//			cout << "Введите текст новой задачи: ";
//			getline(cin, newTask);
//			if (tasks.empty()) {
//				tasks.push_back({ 1,newTask });
//			}
//			else {
//				tasks.push_back({ tasks.back().numberTask + 1,newTask });
//			}
//			writeTask(fileName, tasks);
//			break;
//		}
//		case 2: {
//			int nTask{};
//			cout << "Введите номер задачи, которую хотите удалить: "; cin >> nTask;
//
//			for (auto it = tasks.begin(); it != tasks.end(); ++it) {
//				if (it->numberTask) {
//					tasks.erase(it);
//					for (size_t i = 0; i < tasks.size(); ++i) {
//						tasks[i].numberTask = i + 1;
//					}
//					writeTask(fileName, tasks);
//					break;
//				}
//			}
//			break;
//		}
//		case 3: {
//			int nuTask{};
//			cout << "Введите номер задачи, которую хотите изменить: "; cin >> nuTask;
//
//			for (auto& task : tasks) {
//				if (task.numberTask == nuTask) {
//					cout << "Введите новый текс для задачи: ";
//					string newTask;
//					getline(cin, newTask);
//					task.task = newTask;
//					writeTask(fileName, tasks);
//					break;
//				}
//			}
//			break;
//		}
//		case 4: {
//			cout << "Успешно сохранено. пока";
//			return 0;
//		}
//		default:
//			cout << "Неверный номер действия!" << endl;
//		}
//		
//	}
//	
//}



//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//	setlocale(0, "ru");
//	vector<string> tasks;
//	string fileName = "tasks.txt";
//	cout << " < Программа для создания списка задач на день! > \n\n Возможные действия:\n Добавить новую задачу - 1. \n Удалить задачу - 2. \n Изменить задачу - 3. \n Сохранение- 4." << endl;
//	
//		while (true) {
//
//			int a = 1;
//			for (auto& task : tasks) {
//				cout << a << ". " << task << endl;
//				a++;
//			}
//			ifstream ifile(fileName);
//			if (ifile.is_open()) {
//				string line;
//				int a = 1;
//				while (getline(ifile, line)) {
//					tasks.push_back(line);
//					//cout << a << line << endl;
//					//a++;
//				}
//				ifile.close();
//			}
//
//			/*for (int i = 0; i < tasks.size(); ++i) {
//					cout << tasks[i] << endl;
//				}*/
//		
//			
//			int choice{};
//			cout << "\n\n Укажите номер действия: "; cin >> choice;
//			cin.ignore();
//	
//			switch (choice) {
//			case 1: {
//				string newTask;
//				cout << "Введите текст новой задачи: ";
//				getline(cin, newTask);
//				tasks.push_back(newTask);
//				break;
//			}
//			case 2: {
//				if (tasks.empty()) {
//					cout << "У вас пока нет задач! Введите цифру, чтобы начать работу!" << endl;
//					break;
//				}
//				int numTask;
//				cout << "Введите номер задачи, которую хотите удалить: "; cin >> numTask;
//
//				if (numTask <= 0 || numTask > tasks.size()) {
//					cout << "Номера такой задачи нет!";
//					break;
//				}
//				//ifstream infile(fileName);
//				//if (infile.is_open()) {
//				//	string line;
//				//	while (getline(infile, line)) { ////////////////////////////////////////////////
//				//		tasks.push_back(line);
//				//	}
//				//	infile.close();
//				//}
//				
//				
//				
//				tasks.erase(tasks.begin() + numTask - 1);
//				break;
//			
//			}
//			case 3: {
//				if (tasks.empty()) {
//					cout << "У вас пока нет задач! Введите цифру, чтобы начать работу!" << endl;
//					break;
//				}
//				size_t numberTask;
//				cout << "Введите номер задачи, которую хотите изменить: "; cin >> numberTask;
//				cin.ignore();
//				//ifstream infile(fileName);
//				//if (infile.is_open()) {
//				//	string line;
//				//	while (getline(infile, line)) { //////////////////////////////////////////////
//				//		tasks.push_back(line);
//				//	}
//				//	infile.close();
//				//}
//
//				/*for (int i = 0; i < tasks.size(); ++i) {
//					cout << tasks[i] << endl;
//				}*/
//
//				if (numberTask <= 0 || numberTask > tasks.size()) {
//					cout << "Номера такой задачи нет!" << endl;
//					break;
//				}
//
//				string newText;
//				cout << "Введите текст новой задачи: ";
//				getline(cin, newText);
//				
//				
//				tasks[numberTask-1] = newText;
//				break;
//			}
//			case 4: {
//				ofstream ofile(fileName);
//				
//				for (const auto& task : tasks) {
//					ofile << task << endl;
//					
//				}
//				ofile.close();
//				cout << "Задачи успешно сохранены!" << endl;
//
//				break;
//			}
//			default:
//				cout << "Неверный номер действия!" << endl;
//			}
//			
//		}
//		
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(0, "ru");
//	int n{};
//	int m{};
//	int r{};
//	int c{};
//	int matrix[100][100]{};
//	
//
//	std::cout << "Введите кол-во строк изначальной матрицы: ";
//	std::cin >> m;
//	std::cout << "Введите кол-во столбцов изначальной матрицы: ";
//	std::cin >> n;
//
//	int quantity = m * n;
//
//	if (1 <= m && n <= 100) {
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				std::cin >> matrix[i][j];
//
//			}
//		}
//	}
//	else {
//		cout << "Недопустимые значения";
//	}
//
//
//
//	cout << "Ваша изначальная матрица: " << endl;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			std::cout << matrix[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	cout << endl;
//
//
//
//	std::cout << "Введите кол-во строк нового вида матрицы: ";
//	std::cin >> r;
//	std::cout << "Введите кол-во столбцов нового вида матрицы: ";
//	std::cin >> c;
//
//	if (c == quantity) {
//		int newMatrix[100][300]{};
//		int k{};
//		int quantity2 = r * c;
//		for (int i = 0; i < r; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				int oRow = k / n;
//				int oCol = k % n;
//				newMatrix[i][j] = matrix[oRow][oCol];
//				k++;
//
//			}
//			
//		}
//		if (quantity == quantity2) {
//			for (int i = 0; i < r; i++)
//			{
//				for (int j = 0; j < c; j++)
//				{
//					cout << newMatrix[i][j] << " ";
//				}
//				cout << endl;
//
//			}
//		}
//		else {
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < m; j++)
//				{
//					std::cout << matrix[i][j] << " ";
//				}
//				std::cout << std::endl;
//			}
//
//		}
//
//	}
//	else {
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				std::cout << matrix[i][j] << " ";
//			}
//			std::cout << std::endl;
//		}
//		
//	}
//
//	
//
//}

//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//string getshifr(const string& text) {
//	string result = "";
//
//	for (char ch : text) {
//		if (isalpha(ch)) {
//			if (ch == 'Z') {
//				result += 'A';
//			}
//			else if (ch == 'z') {
//				result += 'a';
//			}
//			else {
//				result += char((ch + 1));
//			}
//		}
//		else if (isdigit(ch)) {
//			int digit = ch - '0';
//			result += char(('0' + (9 - digit) % 10));
//		}
//		else {
//			result += ch;
//		}
//	}
//
//	for (size_t i = 0; i < result.size(); ++i) {
//		if (isalpha(result[i])) {
//			if (i % 2 == 0) {
//				result[i] = toupper(result[i]);
//			}
//			else {
//				result[i] = tolower(result[i]);
//			}
//		}
//	}
//
//	reverse(result.begin(), result.end());
//
//	return result;
//}
//
//int main() {
//	setlocale(0, "ru");
//	cout << "Введите исходный текст: ";
//	string text;
//	getline(cin, text);
//	cout << "Полученный шифр: ";
//	cout << getshifr(text) << endl; 
//}


//#include <algorithm>
////#include <iostream>
////#include <string>
////#include <functional>
////
////#include <gtest/gtest.h>
////
////using namespace std;
////
////enum ChoosingAction { AllNums = 1, PositiveNums, NegativeNums };
////
////template <typename T>
////struct Vector {
////private:
////	T* pointerToAnArray;
////	size_t size = 0;
////	size_t capacity;
////
////public:
////	Vector(size_t startValues) : capacity(startValues) {
////		pointerToAnArray = new T[capacity];
////	}
////	struct Iterator;
////
////	size_t getSize() { return size; }
////
////	size_t getCapacity() { return capacity; }
////
////	void setCapacity(size_t newCapacity) {
////		capacity = newCapacity;
////		T* newArray = new T[capacity];
////		std::copy(pointerToAnArray, pointerToAnArray + size, newArray);
////		delete[] pointerToAnArray;
////		pointerToAnArray = newArray;
////	}
////
////	void insert(const T& number, const T& value) {
////		if (size == capacity) {
////			setCapacity(capacity * 1.5);
////		}
////		for (int i = size - 1; i > number; --i) {
////			pointerToAnArray[i] = pointerToAnArray[i - 1];
////		}
////		pointerToAnArray[number] = value;
////		++size;
////	}
////
////	void showVector() {
////		for (int i = 0; i < size; ++i) {
////			cout << pointerToAnArray[i] << " ";
////		}
////	}
////
////	T& operator[](size_t i) {
////		if (i > size - 1) {
////			throw out_of_range("Ошибка. Выход за пределы вектора.");
////		}
////		return pointerToAnArray[i];
////	}
////
////	friend ostream& operator<<(ostream& out, const Vector& vec) {
////		for (int i = 0; i < vec.size; ++i) {
////			out << vec.pointerToAnArray[i]<<" ";
////		}
////		return out;
////	}
////
////	void push_back(const T& number) {
////		if (size == capacity) {
////			setCapacity(capacity * 1.5);
////		}
////		pointerToAnArray[size++] = number;
////	}
////
////	void push_front(const T& number) {
////		if (size == capacity) {
////			setCapacity(capacity * 1.5);
////		}
////		for (int i = size; i > 0; --i) {
////			pointerToAnArray[i] = pointerToAnArray[i - 1];
////		}
////		pointerToAnArray[0] = number;
////		++size;
////	}
////
////	size_t findIndex(const T& number) {
////		if (contains(number)) {
////			for (int i = 0; i < size; ++i) {
////				if (pointerToAnArray[i] == number) {
////					return i;
////				}
////			}
////		}
////		else {
////			cout << "Индекса такого значения нет." << endl;
////			return -1;
////		}
////	}
////
////	bool contains(const T& number) {
////		for (int i = 0; i < size; ++i) {
////			if (pointerToAnArray[i] == number) {
////				return true;
////			}
////		}
////		return false;
////	}
////
////	void pop_back() {
////		if (size > 0) {
////			pointerToAnArray[--size] = 0;
////		}
////	}
////
////	bool empty() {
////		return size == 0;
////	}
////
////	size_t front() {
////		if (size == 0) {
////			throw out_of_range("Ошибка. Вектор пустой.");
////		}
////		return pointerToAnArray[0];
////	}
////
////	Iterator begin() {
////		return Iterator(pointerToAnArray);
////	}
////
////	Iterator end() {
////		return Iterator(pointerToAnArray + size);
////	}
////
////	size_t back() {
////		if (size == 0) {
////			throw out_of_range("Ошибка. Вектор пустой.");
////		}
////		return pointerToAnArray[size - 1];
////	}
////
////	void clear() {
////		while (size > 0) {
////			pointerToAnArray[--size] = 0;
////		}
////	}
////
////	struct Iterator {
////		T* iterator;
////
////		Iterator(T* iterator) : iterator(iterator) {}
////
////		T& operator*() {
////			return *iterator;
////		}
////
////		bool operator!=(const Iterator& value) {
////			return iterator != value.iterator;
////		}
////
////		friend std::ostream& operator<<(std::ostream& stream, Iterator counter)
////		{
////			stream << *counter;
////			return stream;
////		}
////
////		Iterator& operator++() {//постфиксный 
////			iterator++;
////			return *this;
////		}
////
////		Iterator operator++(int) {//префиксный
////			Iterator temp = *this;
////			++iterator;
////			return temp;
////		}
////
////		Iterator& operator+(int num) {
////			iterator += num;
////			return *this;
////		}
////	};
////
////	static string vectorToString(Iterator begin, Iterator end, ChoosingAction action = AllNums)
////	{
////		string str;
////
////		function<bool(T&)> statement;
////		switch (action)
////		{
////		case ChoosingAction::AllNums:
////			statement = [](T& a) {return true; };
////			break;
////		case ChoosingAction::PositiveNums:
////			statement = [](T& a) {return a > 0; };
////			break;
////		case ChoosingAction::NegativeNums:
////			statement = [](T& a) {return a < 0; };
////			break;
////		}
////
////		for (auto i = begin; i != end; ++i)
////		{
////			if (statement(*i))
////			{
////				str += to_string(*i) + " ";
////			}
////		}
////		return str;
////	}
////};
////
////
////
////TEST(VectorTest, PushBack) {
////	//Arrange
////	Vector<int> v(5);
////	//Act
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	//Assert
////	ASSERT_EQ(v.getSize(), 3);
////	ASSERT_EQ(v.getCapacity(), 5);
////}
////
////TEST(VectorTest, PushBackWithResize) {
////	Vector<int> v(2);
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	ASSERT_EQ(v.getSize(), 3);
////	ASSERT_EQ(v.getCapacity(), 3);
////}
////
////TEST(VectorTest, PushFront) {
////	Vector<int> v(5);
////	v.push_front(1);
////	v.push_front(2);
////	v.push_front(3);
////	ASSERT_EQ(v.getSize(), 3);
////	ASSERT_EQ(v.getCapacity(), 5);
////}
////
////TEST(VectorTest, PushFrontWithResize) {
////	Vector<int> v(2);
////	v.push_front(1);
////	v.push_front(2);
////	v.push_front(3);
////	ASSERT_EQ(v.getSize(), 3);
////	ASSERT_EQ(v.getCapacity(), 3);
////}
////
////TEST(VectorTest, Insert) {
////	Vector<int> v(5);
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	v.insert(1, 4);
////	ASSERT_EQ(v.getSize(), 4);
////	ASSERT_EQ(v.getCapacity(), 5);
////	ASSERT_EQ(v[1], 4);
////}
////
////TEST(VectorTest, InsertWithResize) {
////	Vector<int> v(2);
////	v.push_back(1);
////	v.push_back(2);
////	v.insert(1, 4);
////	ASSERT_EQ(v.getSize(), 3);
////	ASSERT_EQ(v.getCapacity(), 3);
////	ASSERT_EQ(v[1], 4);
////}
////
////TEST(VectorTest, FindIndex) {
////	Vector<int> v(5);
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	ASSERT_EQ(v.findIndex(2), 1);
////}
////
////TEST(VectorTest, FindIndexNotFound) {
////	Vector<int> v(5);
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	ASSERT_EQ(v.findIndex(4), -1);
////}
////
////TEST(VectorTest, Contains) {
////	Vector<int> v(5);
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	ASSERT_TRUE(v.contains(2));
////}
////
////TEST(VectorTest, ContainsNotFound) {
////	Vector<int> v(5);
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	ASSERT_FALSE(v.contains(4));
////}
//


// #include <gtest/gtest.h>
// #include <string>
// #include <algorithm>
// using namespace std;


// string reverse_string(const string & str) {
// 	std::string reversed = str;
// 	std::reverse(reversed.begin(), reversed.end());
// 	return reversed;
// }

// using namespace ::testing;

// class ReverseStringTest : public TestWithParam<pair<string, string>> {};

// TEST_P(ReverseStringTest, ReturnReversedString) {
// 	// Arrange
// 	auto& inputData = GetParam();
// 	const string& inputStr = inputData.first;
// 	const string& expectedResult = inputData.second;

// 	// Act
// 	string result = reverse_string(inputStr);

// 	// Assert
// 	ASSERT_EQ(result, expectedResult);
// }

// INSTANTIATE_TEST_CASE_P
// (
// 	ReverseStringTestCase,
// 	ReverseStringTest,
// 	testing::Values
// 	(
// 		make_pair<string, string>("cat", "tac"),
// 		make_pair<string, string>("7Ab1ob2a5", "5a2bo1bA7"),
// 		make_pair<string, string>("StaRs", "sRatS"),
// 		make_pair<string, string>("FLOWERS", "SREWOLF"),
// 		make_pair<string, string>("123456", "654321"),
// 		make_pair<string, string>("", "")
// 	)
// );


//#include <string>
//#include <gtest/gtest.h>
//using namespace std;
//
//int findSubstring(string & text, string & pattern)
//{
//	if (pattern.empty())
//	{
//		return 0;
//	}
//	
//	size_t pos = text.find(pattern);
//
//	if (pos != string::npos)
//	{
//		return int(pos);
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//using namespace ::testing;
//
//class FindSubstringTest : public TestWithParam<tuple<string, string, int>> {};
//
//TEST_P(FindSubstringTest, FindSubstring)
//{
//	// Arrange
//	auto& inputData = GetParam();
//	string mText = get<0>(inputData);
//	string mPattern = get<1>(inputData);
//	int exPos = get<2>(inputData);
//
//	// Act
//	int position = findSubstring(mText, mPattern);
//
//	// Assert
//	ASSERT_EQ(position, exPos);
//}
//
//INSTANTIATE_TEST_CASE_P
//(
//	FindSubstringTestCase,
//	FindSubstringTest,
//	testing::Values
//	(
//		make_tuple("Meow meow cat", "cat", 10),
//		make_tuple("Hello, world!", "Hello", 0),
//		make_tuple("Good day", " ", 4),
//		make_tuple("bobobo", "aboba", -1),
//		make_tuple("", "cat", -1)
//	)
//);

//#include <iostream>
//using namespace std;
//
//static  int factorial(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	return n + (factorial(n + 1));
//}
//
//int main() {
//	setlocale(0, "ru");
//	int n{};
//	cin >> n;
//	cout << factorial(n);
//}


//#include <iostream>
//#include <vector>
//#include <gtest/gtest.h>
//using namespace std;
//
//int getFibonacciNum(int n, vector<int>& v)
//{
//	if (n == 0) {
//		v.push_back(0);
//		return 0;
//	}
//
//	if (n == 1 || n == 2) {
//		v.push_back(1);
//		return 1;
//	}
//	int num = getFibonacciNum(n - 1, v) + getFibonacciNum(n - 2, v);
//	v.push_back(num);
//	return num;
//}

//using namespace ::testing;
//class TestFibonacci : public TestWithParam<pair<int,int >>{};
//TEST_P(TestFibonacci, getFibNumbers) {
//	//Arrange
//	auto& inputData = GetParam();
//	int quantityNumfib = inputData.first;
//	int expectedFibNum = inputData.second;
//
//	//Act
//	int result = getFibonacciNum(quantityNumfib);
//
//	//Accert
//	ASSERT_EQ(result, expectedFibNum);
//}
//
//INSTANTIATE_TEST_CASE_P
//(
//	TestFibonacciTestCase,
//	TestFibonacci,
//	testing::Values
//	(
//		make_pair<int, int>(0, 0),
//		make_pair<int, int>(1, 1),
//		make_pair<int, int>(2, 1),
//		make_pair<int, int>(3, 2),
//		make_pair<int, int>(4, 3),
//		make_pair<int, int>(5, 5),
//		make_pair<int, int>(6, 8),
//		make_pair<int, int>(7, 13),
//		make_pair<int, int>(8, 21),
//		make_pair<int, int>(9, 34)		
//	)
//);

//int main() {
//	setlocale(0, "ru");
//	int n;
//	cout << "Введите кол-во чисел Фибоначи, которые хотите получить: "; cin >> n;
//	cout << "Результат: ";
//    vector<int> v;
//	getFibonacciNum(n, v);
//	for (int i = 0; i < v.size(); ++i) {
//		cout << v[i] << " ";
//	}
//}









































































//#include <iostream>
//#include <gtest/gtest.h>
//#include <set>
//#include <string>
//
//using namespace std;
//
//bool isValidTime(const string& time) {
//    if (time.length() != 5 || time[2] != ':') {
//        return false;
//    }
//    int hour = stoi(time.substr(0, 2));
//    int minute = stoi(time.substr(3, 4));
//
//    return (hour >= 8 && hour <= 19 && minute >= 0 && minute <= 59);
//}
//
//using namespace ::testing;
//class RightTime :public TestWithParam<pair<string, int>> {};
//
//TEST_P(RightTime, rightTimeTests) {
//    //Arrange
//    auto& inputDate = GetParam();
//    string values = inputDate.first;
//    bool expected = inputDate.second;
//    //Act
//    bool result = isValidTime(values);
//    //Accert
//    ASSERT_EQ(result, expected);
//}
//
//INSTANTIATE_TEST_CASE_P
//(
//    RightTimeCaseTest,
//    RightTime,
//    testing::Values
//    (
//        make_pair<string, bool>("10:00", true),
//        make_pair<string, bool>("10:35", true),
//        make_pair<string, bool>("101:00", false),
//        make_pair<string, bool>("10:010", false),
//        make_pair<string, bool>("1000", false),
//        make_pair<string, bool>("abra", false),
//        make_pair<string, bool>("07:00", false),
//        make_pair<string, bool>("20:00", false)
//    )
//);
//
//int main() {
//    setlocale(0, "ru");
//    set<string> coupons;
//    string time;
//    cout << "< ��������� ��� ������ � ����� - ������ �������! >" << endl;
//    cout << "�������� �������� � 08:00 �� 19:00! ��� ������ ������� ����� ���������!\n\n������� �� ���� ������� ��� ���!\n";
//
//    while (true) {
//        cout << "\n������� ����� �� ������� ������ ���������� � ������� (HH:MM): ";
//        cin >> time;
//
//        if (!isValidTime(time)) {
//            cout << "������������ ������ �������. ������� ����� � ������� HH:MM." << endl;
//            continue;
//        }    
//           
//        if (coupons.find(time) != coupons.end()) {
//            cout << "����� ����� ��� ����!" << endl;
//        }
//
//        else {
//            coupons.insert(time);
//            cout << "������ �� " << time << " ������� �������!" << endl;
//        }
//        cout << "\n������� ���������� �� �������:\n";
//        for (auto& info : coupons) {
//            cout << info << endl;
//        }
//        cout << endl;
//    }
//}

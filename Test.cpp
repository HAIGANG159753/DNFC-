#include<iostream>
#include<cmath>
#include<string>
int main() {

	using namespace std;

	//cout << "������������������";
	//cout << endl;
	//cout << "1232342342342342" << endl;
	//int carrots = 25;
	//cout << carrots;
	//cout << "carrots. ";
	//cout << endl;
	//carrots = carrots - 1;
	//cout << "I Have " << carrots << " carrots." << endl;

	//cout << "����������Ҫ��������"<<endl;
	//cin >> carrots;
	//cout << "����2���Ժ� ";
	//carrots = carrots + 2;

	//cout << "���ڵ����� " << carrots << " carrots." << endl;
	//double x = sqrt(6.25);
	//std::cout << x<< std::endl;
	//double xx = pow(5, 8);
	//std::cout << xx<< std::endl;
	//double xxx = rand();
	//std::cout << xxx<< std::endl;
	//bucks(15.2);
	/*cout << "����Сʱ�� ";
	int hours;
	cin >> hours;
	cout << "������ӣ� ";
	int min;
	cin >> min;
	cout << "Time: "<< hours << ":"<< min;*/

	//char ch = 'M';
	//cin >> ch;
	//int i = ch;
	//cout << i;
	//char alarm = '7';
	//cout << alarm;

	/*cout << "\a���� \"����\"��_____________\b\b\b\b\b\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\a�������� " << code<< "...\n";*/

	/*wchar_t b = L'P';
	wcout << L"tall" << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	cout << tub * 1.0e6;*/

	//int aa[3] = { 52,21,5 };//��int aa[3] { 52,21,5 }; һ��
	//cout << aa[0] << "\n";//52
	//cout << aa[1] << "\n";//21
	//cout << aa[2] << "\n";//5
	//const int ArSize = 20;
	//char name[ArSize];
	//char dessert[ArSize];  //�캣�� ƻ��
	//cout << "�������֣�\n";
	//cin >> name;
	//cout << "���������ʳ�\n";
	//cin >> dessert;
	//cout << "����һЩ��ζ�� " << dessert
	//     << " ���㣬 " << name << endl;
	/*char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "����һ��feline: ";
	cin >> charr1;
	cout << "������һ��feline: ";
	cin >> str1;
	cout << "����������һЩfelines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2
		<< endl;
	cout << charr2[2] << endl;
	cout << str2[2] << endl;*/

	/*int aa = 6;
	double bb = 6.24;

	cout << &aa << endl;

	cout << &bb;*/

	/*int nights = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "nights value= ";
	cout << nights << ": location " << &nights << endl;

	cout << "int ";
	cout << "value= " << *pt << ":location= " << pt << endl;*/

	double* p3 = new double[3];

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;

	cout << "now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;
	delete[] p3;
	return 0;




}
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <memory> 
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <set>
#include <thread> 
#include <chrono> 
#include <algorithm>
#include <numeric>
#include <mutex>
using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	int a, b;

	cout << "������� ����������� �����: " << endl;

	cin >> a;

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		b = a % 10;
		
		cout << i << "����� �����:   " << b << endl;
		
		a = a / 10;

	}






	return 0;
}

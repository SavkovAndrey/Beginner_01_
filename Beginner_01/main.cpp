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
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int a, b;

	cout << "Введите пятизначное число: " << endl;

	cin >> a;

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		b = a % 10;
		
		cout << i << "цифра равна:   " << b << endl;
		
		a = a / 10;

	}






	return 0;
}

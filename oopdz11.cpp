// oopdz11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "head.h"

int main(){
	{
		DB db1;
		vector<wstring> x;
		vector<wstring> y;
		x.clear();
		y.clear();
		wifstream input("test.hpg");
		wstring a;
		wstring t;
		bool sw=0;
		getline(input, a);
		for (int i = a.length(); i > 1; i--)
		{
			if ((a[i] == 'U') && (sw == 0))
			{
				while (a[i] != 'D')
				{
					if (a[i] == 'C') {
						sw = 1;
						break;
					}
					if (a[i] == 'A')
					{

						t.clear();
						t = a[i + 1];
						t += a[i + 2];
						t += a[i + 3];
						t += a[i + 4];
						x.push_back(t);
						t.clear();
						t = a[i + 6];
						t += a[i + 7];
						t += a[i + 8];
						t += a[i + 9];
						y.push_back(t);
					}
					i--;
					
				}
				while ((a[i] != 'A')&&(sw==0)) i--;
				if (sw == 0) {
					t.clear();
					t = a[i + 1];
					t += a[i + 2];
					t += a[i + 3];
					t += a[i + 4];
					x.push_back(t);
					t.clear();
					t = a[i + 6];
					t += a[i + 7];
					t += a[i + 8];
					t += a[i + 9];
					y.push_back(t);
					if (x.size() <= 3)
					{
						db1.push_back(new SmallObject(x, y));
						x.clear();
						y.clear();
					}
					else
					{
						db1.push_back(new BigObject(x, y));
						x.clear();
						y.clear();
					}
				}
			}
		}
		for (int i = db1.size(); i >0; i--) {
			cout << db1.size()-i << ": " << typeid(*db1[db1.size() - i]).name() << " start point :";
			wcout << "(" << db1[db1.size() - i]->x[db1[db1.size() - i]->x.size()-1] << "," << db1[db1.size() - i]->y[db1[db1.size() - i]->y.size()-1] << ")" << endl;
			cout << "points: " << endl;
			for (int j = 0; j < db1[db1.size() - i]->x.size()-1; j++)
				wcout << "(" << db1[db1.size() - i]->x[j] << "," << db1[db1.size() - i]->y[j] << ")" << endl;
		}
	}
	_CrtDumpMemoryLeaks();
}
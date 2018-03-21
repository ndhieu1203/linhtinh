#include <iostream>
#include<fstream>
#include<windows.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	ifstream file;
	file.open("xephinh.txt");
	int a[20];
	int n;
	file >> n;
	cout<<"em muon xep hinh kieu "<<n<<endl;
	file.close();
	
	ofstream diemcao("diemcao.txt");
	diemcao<<99;
	diemcao.close();
	system("pause");
}

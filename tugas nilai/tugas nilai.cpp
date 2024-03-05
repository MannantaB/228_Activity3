#include <iostream>
using namespace std;

int main()
{
	float matematika, fisika, rerata;
	string status;
	cout << "Masukan nilai matematika : " << endl;
	cin >> matematika;
	cout << "Masukan nilai fisika : " << endl;
	cin >> fisika;
	rerata = (matematika + fisika) / 2;
	if (matematika >= 70)
	{
		status = "lulus";
	}
	else if (rerata > 60)
	{
		status = "lulus";
	}
	else
	{
		status = "gagal";
	}
	cout << "Rerata = " << rerata << endl;
	cout << "Status Kelulusan = " << status << endl;
}
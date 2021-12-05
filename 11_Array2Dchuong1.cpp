#include <iostream>
#include<ctime>
using namespace std;
#define row 14
#define col 7
void nhap(char arr[row][col]);
void xuat(char arr[row][col]);
void vitrithuonggia(char  arr[row][col], int& r, int& c);
void vitriphothong(char  arr[row][col], int& r, int& c);
void vitritietkiem(char  arr[row][col], int& r, int& c);
int main()
{
	srand(time(0));
	int r, c, ve, tip;
	char arr[row][col];
	char o;
	nhap(arr);
	do {
		system("cls");
		xuat(arr);
		cout << endl;
		cout << " X la vi tri da duoc nguoi khac dat !! \n";
		cout << " * la vi tri con trong !! \n";
		cout << "1. ve thuong gia(hang 1 - 2 )." << endl;
		cout << "2. Ve pho thong (hang 3 -> 7 )." << endl;
		cout << "3. Ve tiet kiem (hang 8 -> 13 )." << endl;
		cout << "Moi quy khach chon loai ve : ";
		cin >> ve;
		switch (ve)
		{
		case 1 :
		{
			vitrithuonggia(arr, r, c);
			break;
		}
		case 2 :
		{
			vitriphothong(arr, r, c);
			break;
		}
		case 3 :
			vitritietkiem(arr, r, c);
			break;
		default :
			cout << " chon sai !";
		}
		cout<<endl << " Co muon tiep tuc dat ve khong ? ";
		cin >> o;
	} while (o!='k' && o!='K');
	system("cls");
	cout << endl << " (^.^) Cac vi tri ghe quy khach da dat (nhung vi tri 'O') : \n";
	xuat(arr);
	cout << endl << " Cam on vi da su  dug dich vu!! (^.^) " << endl;
	return 0;
}
void nhap(char arr[row][col])
{

	for (int i = 1; i < row; i++)
	{
		for (int j = 1; j < col; j++)
		{
			if (rand() % 2 == 0)
			{
				arr[i][j] = '*';
			}
			else
			{
				arr[i][j] = 'X';
			}
		}
	}
}
void xuat(char arr[row][col])
{
	cout << "Ghe :     ";
	for (int i = 1; i < 7; i++)
	{
		cout << i << "       ";
	}
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
	for (int i = 1; i < row; i++)
	{ 
		cout << "Hang " << i << " |  ";
		for (int j = 1; j < col; j++)
		{
			cout << arr[i][j] << "       ";
		}
		cout << endl;
	}
}
void vitrithuonggia(char  arr[row][col], int& r, int& c)
{
	char l;
	bool co;
	do {
		do {
			co = true;
			cout << "moi chon vi tri: " << endl << " Hang :";
			cin >> r;
			cout << endl << "ghe so : ";
			cin >> c;
			if (r > 2 || c > 6)
			{
				cout << "nhap sai nhap lai ";
				continue;
			}
			if (arr[r][c] == 'X')
			{
				cout << " vi tri da co!,xin quy khach chon lai : ";
				co = false;
			}
			} while (r > 2 || c > 6 || co == false);
		arr[r][c] = '$';
		cout << "quy khach co muon chon tiep ve loai nay nua khong ? : ";
		cin >> l;
	} while (l != 'k' && l != 'K');
}
void vitriphothong(char  arr[row][col], int& r, int& c)
{
	char l;
	bool co;
	do {
		do {
			co = true;
			cout << "moi chon vi tri: " << endl << " Hang :";
			cin >> r;
			cout << endl << "Ghe so : ";
			cin >> c;
			if (r <=2 || r> 7 || c > 6)
			{
				cout << "nhap sai nhap lai " << endl;
				continue;
			}
			if (arr[r][c] == 'X')
			{
				cout << "vi tri da co !! moi quy khach chon lai \n";
				co = false;
			}
			} while (r<=2 || r> 7 || c > 6 || co==false);
		arr[r][c] = '$';
		cout << "quy khach co muon chon tiep ve loai nay nua khong ? : ";
		cin >> l;
	} while (l != 'k' && l != 'K');
}
void vitritietkiem(char  arr[row][col], int& r, int& c)
{
	char l;
	bool co;
	do {
		do {
			co = true;
			cout << "moi chon vi tri: " << endl << " Hang :";
			cin >> r;
			cout << endl << "Ghe so : ";
			cin >> c;
			if (r < 8 || r > 13 || c > 6)
			{
				cout << "nhap sai nhap lai " << endl;
				continue;
			}
			if (arr[r][c] == 'X')
			{
				cout << "vi tri da co : ";
				co = false;
			}
		} while ((r < 8 || r > 13 || c > 6 || co == false));
		arr[r][c] = '$';
		cout << "quy khach co muon chon tiep ve loai nay nua khong ? : ";
		cin >> l;
	} while (l != 'k' && l != 'K');
}
//bool kiemtra(char arr[row][col], int& r, int& c)
//{
//	bool k = false;
//	if (r > 13 || c > 6)
//	{
//		k = false;
//		return k;
//	}
//	if (arr[r][c] == 'X')
//	{
//		k = true;
//	}
//	return k;
//}


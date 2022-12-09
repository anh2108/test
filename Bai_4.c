#include<stdio.h>

void Bai_1() {

	int n;

	do
	{

		printf("\nNhap vao gia tri n = ");
		scanf_s("%d", &n);

	} while (n < 5);
	
	int tong = 0;

	for (int i = 0; i <= n; i++)
	{

		tong += i;

	}
	printf("\nTong cac so nguyen tu 1 => n la: %d", tong);

}

void Bai_2() {

	int n;
	
	do
	{

		printf("\nSo diem ban mong muon cua mon C: ");
		scanf_s("%d", &n);

	} while (n <= 0);
	

	if (n >=3 && n <= 4)
	{
		printf("\nLuoi hoc qua");
	}
	else if (n >= 5 && n <= 6)
	{

		printf("\nCham chi hon");

	}
	else if (n >=7 && n <= 8)
	{

		printf("\nKien thuc on");
		 
	}
	else if (n >= 9 && n <= 10)
	{

		printf("\nTiep tuc phat huy");

	}

}

void Bai_3() {

	int n;
	printf("\nNhap vao so loai thuc pham: ");
	scanf_s("%d", &n);

	int tienTra[100];

	for (int i = 0; i < n; i++)
	{

		printf("\nSo tien phai tra cua loai thuc pham %d la: ", i);
		scanf_s("%d", &tienTra[i]);

	}

	int dem = 0;
	for (int i = 0; i < n; i++)
	{

		if (n > 20 && n <100)
		{

			dem++;
			printf("\nDem = %d", dem);

		}

	}
	printf("\nCac loai thuc pham co gia tu 20k den 100k la: %d", dem);

	double trungBinhtien;
	int tong = 0;

	for (int i = 0; i < n; i++)
	{

		tong = tong + i;

		printf("\n Tong = %d", tong);

	}

	trungBinhtien = tong / n;
	printf("\nTrung binh tien cua tat ca cac loai thuc pham la: %d", trungBinhtien);

	int giamDan;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (tienTra[i] > tienTra[j])
			{

				giamDan = tienTra[i];

				tienTra[i] = tienTra[j];

				tienTra[j] = giamDan;
				
			}
			

		}
	}

	printf("\nSo tien phai tra giam dan: %d");

	for (int i = 0; i < n; i++)
	{

		printf("\n%d", tienTra[i]);

	}

}

int main() {

	int luaChon;

	do
	{

		printf("\n|*********************** Menu bai tap ******************************|");
		printf("\n|              1.  Tinh tong so n                                   |");
		printf("\n|              2. Diem mon C                                        |");
		printf("\n|              3. Thong tin ve cac loai thuc pham                   |");
		printf("\n|             CHU Y:  Nhap vao so 4 de thoat khoi chuong trinh      |");
		printf("\n|*******************************************************************|");

		printf("\nNhap vao lua chon cua ban: ");
		scanf_s("%d", &luaChon);
		  
		switch (luaChon)
		{

		case 1 :

			Bai_1();

			break;


		case 2 :

			Bai_2();

			break;

		case 3 :

			Bai_3();

			break;

		default:

			printf("\nChuc nang ban chon khong hop le, xin moi chon lai ! ");
			
			break; 

		}

	} while (luaChon != 4);

	return 0;
}
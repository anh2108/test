#include<stdio.h>

void Bai_1() {

	printf("Bai 1: Thong tin so ngay mua trong thang");

	printf("\n|============== Nhap vao thong tin =============|");

	char tenQuocgia[100];
	printf("\nNhap vao vao ten quoc gia: ");
	gets_s(tenQuocgia, 100);

	int thang;
	printf("\nNhap vao thang: ");
	scanf_s("%d", &thang);

	int nam;
	printf("\nNhap vao nam: ");
	scanf_s("%d", &nam);

	int soNgaymua;
	printf("\nNhap vao so ngay mua: ");
	scanf_s("%d", &soNgaymua);

	printf("\n|============== Thong tin so ngay mua ==============|");

	printf("\nQuoc gia: %s", tenQuocgia);
	printf("\nThang: %d", thang);
	printf("\nNam: %d", nam);
	printf("\nSo ngay mua: %d", soNgaymua);

}

void Bai_2() {

	printf("Baui 2: Tinh giai thua");

	int n;
	int giaiThua = 1;

	do
	{

		printf("\nNhap vao gia tri n = ");
		scanf_s("%d", &n);

	} while (n < 4);

	for (int i = 1; i <= n; i++)
	{

		giaiThua *= i;

	}
	printf("\n %d! = %d", n, giaiThua);
}

void Bai_3() {

	printf("Bai 3: Thong tin ve cac thanh vien trong gia dinh");

	int n;
	printf("\nNhap vao so thanh vien trong gia dinh: ");
	scanf_s("%d", &n);

	int tienTieu[100];

	printf("\n|========== Nhap thong tin =========|");

	for (int i = 0; i < n; i++)
	{
		printf("\nTien tieu cua thanh vien %d la: ", i);
		scanf_s("%d", &tienTieu[i]);
	}

	printf("\n|=============== Thong tin cac thanh vien trong gia dinh ===================|");

	printf("\n So luong thanh vien trong gia dinh la: %d", n);

	int max = tienTieu[0];
	int viTri = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < tienTieu[i]) {

			max = tienTieu[i];
			viTri = i;

		}
	}
	printf("\nThanh vien tieu tien max = %d tai vi tri %d", max, viTri);

	double trungBinhtientieu;
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + tienTieu[i];
	}
	printf("\nTong tien tieu = %d", tong);
	trungBinhtientieu = tong / n;
	printf("\nTrung binh tien tieu cua moi thnah vien la: %.1lf", trungBinhtientieu);


	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (tienTieu[i] > 3000000) {
			dem++;
		}
	}
	printf("\nSo thanh vien tieu tien > 3000000 la: %d", dem);

	int giamDan;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (tienTieu[i] < tienTieu[j]) {

				giamDan = tienTieu[i];

				tienTieu[i] = tienTieu[j];

				tienTieu[j] = giamDan;
				
			}

		}
	}
	printf("\nSo tien tieu giam dan cua tung thanh vien: ");

	for (int i = 0; i < n; i++)
	{
		printf("\n%d", tienTieu[i]);
	}

}

int main() {

	int luaChon;

	do
	{

		printf("\n|------------------ Menu bai thi --------------------|");
		printf("\n|    1. Thong tin ve so ngay mua trong thang         |");
		printf("\n|                  2. Giai  thua                     |");
		printf("\n|     3. Thong tin ve cac thanh vien trong gia dinh  |");
		printf("\n|         Chu y: Nhap 0 de thoat khoi menu!          |");
		printf("\n|----------------------------------------------------|");

		printf("\nNhap vao lua chon: ");
		scanf_s("%d", &luaChon);

		getchar();

		switch (luaChon)
		{

		case 1:

			Bai_1();

			break;

		case 2:

			Bai_2();

			break;

		case 3:

			Bai_3();

			break;

		default:
			break;
		}

	} while (luaChon != 0);

	return 0;
}
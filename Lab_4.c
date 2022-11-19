#include<stdio.h>

int main() {

	//bai 1
	printf("BAI 1: ");
	int min, max;
	printf("\nNhap vao gia tri min = ");
	scanf_s("%d", &min);
	printf("\nNhap vao gia tri max = ");
	scanf_s("%d", &max);
	int i = min;
	double tong, bienDem, trungBinhcong;
	tong = bienDem = 0;

	while (i <= max) {
		if (i % 2 == 0) {
			tong = tong + i;
			bienDem++;
		}
		i++;
	}
	trungBinhcong = tong / bienDem;
	printf("Trung binh cong cac so chia het cho 2 = %.2lf", trungBinhcong);

	//Bai 2
	printf("\nBai 2 ");
	int x;
	printf("\nNhap vao gia tri x = ");
	scanf_s("%d", &x);
	int Biendem = 0;

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0) {
			Biendem++;
		}
	}
	if (Biendem == 0) {
		printf("\n%d la so nguyen to", x);
	}
	else {
		printf("\n%d khong la so nguyen to", x);
	}

	//Bai 3
	printf("\nBai 3: ");
	int n, count;
	count = 0;
	printf("\nNhap vao so x = ");
	scanf_s("%d", &n);

	for (int i = 1; i < n; i++)
	{
		if (i * i == x) {
			count++;
			break;
		}
	}
	if (count == 0) {
		printf("\n x la so chinh phuong");
	}
	else {
		printf("\n x khong la so chinh phuong");
	}

	//bai 4
	printf("\nBai 4: ");

	int luaChon;

	do
	{
		printf("\n+-------------------------------+");
		printf("\n|1. Tinh trung binh cong        |");
		printf("\n|2. Tim so nguyen to            |");
		printf("\n|3. Tim so chinh phuong         |");
		printf("\n|4. Xay dung menu 3 bai tren    |");
		printf("\n+-------------------------------+");

		printf("\nNhap vao so bat ki de thoat");
		printf("\nNhap vao 0 de tiep tuc");
		printf("\nNhap vao lua chon: ");
		scanf_s("%d", &luaChon);

		switch (luaChon) {
		case 1:
			printf("\n1. Tinh trung binh cong");
			break;
		case 2:
			printf("\n2. Tim so nguyen to");
			break;
		case 3:
			printf("\n3. Tim so chinh phuong ");
			break;
		case 4:
			printf("\n4. Tao menu 3 bai tren");
			break;
		default:
			printf("\nHet bai");
			break;
		}

	} while (luaChon != 0);

	return 0;
}
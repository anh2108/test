#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int TimMax(int a, int b, int c) {

	int max = a;

	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	
	printf("So lon nhat trong ba so %d, %d, %d la: %d", a, b, c, max);
	return max;

}

int tinhNamnhuan(int nam) {

	int demNam = 0;

	if (nam % 400 == 0) {

		printf("\n %d la nam nhuan", nam);

		return nam, 1;

	}
	if (nam % 4 == 0 && nam % 100 != 0) {

		printf("\n %d la nam nhuan", nam);

		return nam, 1;
		
	}
	else {
		
		printf("\n %d Khong phai nam nhuan", nam);

		return nam, 0;
	}
	
}

int main() {

	int luaChon;

	do
	{

		printf("\n^------------------------------------------------^");
		printf("\n|        CN1. Tim so lon nhat trong 3 so         |");
		printf("\n|       CN2. Xay dung ham tinh nam nhuan         |");
		printf("\n+------------------------------------------------+");

		printf("\nNhap vao 1 va 2 de chon chuc nang");
		printf("\nNhap vao 0 de thoat va khong su dung chuc nang");

		printf("\nNhap vao lua chon: ");
		scanf_s("%d", &luaChon);

		switch (luaChon) {
		case 1 :
			printf("\nCN1. Tim so lon nhat trong 3 so");

			int max = TimMax (5, 3, 4 );

			break;

		case 2 :
			printf("\nChuong trinh tinh nam nhuan");

			int tinhNam = tinhNamnhuan(2005);

			break;
		}

	} while (luaChon != 0);

	return 0;

}
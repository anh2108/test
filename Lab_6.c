#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void arrBai_1(int a[], int x) {

	printf("BAi 1: ");

	printf("\n======Nhap vao thong tin mang========");

	for (int i = 0; i < x; i++)
	{
		printf("\na[%d] =  ", i);
		scanf_s("%d", &a[i]);
	}

	printf("\n=======Tong tin mang========");

	for (int i = 0; i < x; i++)
	{
		printf("\n%d", a[i]);
	}

	float tong, trungBinh;
	int dem = 0;
	tong = 0;

	for (int i = 0; i < x; i++)
	{
		if (a[i] % 3 == 0) {
			tong = tong + a[i];
			printf("\ntong: %lf", tong);
			dem++;
			printf("\nDem = %.1d", dem);
		}
	}
	trungBinh = tong / dem;
	printf("\nTrung binh cac so chia het cho 3 la: %.1lf", trungBinh);
}

void arrBai_2(int a[], int x) {

	printf("\nBAi 2: ");

	int min = a[0];

	for (int i = 0; i < x; i++)
	{

		if (min > a[i]) {
			min = a[i];

		}

	}
	printf("MIN cua mang = %d", min);

	int max = a[0];

	for (int i = 0; i < x; i++)
	{

		if (max < a[i]) {
			max = a[i];

		}

	}
	printf("\nMAX cua mang = %d ", max);

}



void arrBAi_3(int a[], int x) {

	int tangDan;

	for (int i = 0; i < x; i++) {
		{
			for (int j = 0; j < x; j++)
			{
				if (a[i] < a[j]) {

					tangDan = a[i];

					a[i] = a[j];

					a[j] = tangDan;

				}
			}
		}
	}

	printf("\nMAng da sap xep lai theo thu tu tang dan la: ");


	for (int i = 0; i < x; i++)
	{
		printf("%d ", a[i]);
	}

	int giamDan;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{

			if (a[i] > a[j]) {

				giamDan = a[i];

				a[i] = a[j];

				a[j] = giamDan;

			}

		}

	}

	printf("\nMang da duoc sap xep lai theo thu tu giam dan la: ");

	for (int i = 0; i < x; i++)
	{
		printf("%d ", a[i]);
	}

}


int main() {


	int a[50];

	int x;
	do
	{
		printf("Nhap vao so luong phan tu: ");
		scanf_s("%d", &x);

	} while (x <= 0 || x > a);


	arrBai_1(a, x);

	arrBai_2(a, x);

	arrBAi_3(a, x);
	

	return 0;
}
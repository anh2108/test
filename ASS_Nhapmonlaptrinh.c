#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Bai_1() {

	printf("BAi 1: ");

	printf("\nCN1. Kiem Tra So Nguyen\n");

	int c;
	printf("Nhap vao so c = ");
	scanf_s("%d", &c);

	if (c >= 0) {
		printf("\n%d la so nguyen", c);
	}
	else {
		printf("%d khong la so nguyen", c);
	}

	int Biendem = 0;

	for (int i = 2; i < c; i++)
	{
		if (c % i == 0) {
			Biendem++;
		}
	}
	if (Biendem == 0) {
		printf("\n%d la so nguyen to", c);
	}
	else {
		printf("\n%d khong la so nguyen to", c);
	}

	int count = 0;
	for (int i = 1; i < c; i++)
	{
		if (i * i == c) {
			count++;
			break;
		}
	}
	if (count == 0) {
		printf("\n %dla so chinh phuong", c);
	}
	else {
		printf("\n %d khong la so chinh phuong\n", c);
	}

}

void Bai_2() {

	printf("Bai 2 :");

	printf("\nCN2. Tim Uoc so chung nho nhat va Boi so chung nho nhat\n");

	int a, b, USCLN{}, BSCNN{};
	printf("\nNhap vao gia tri a = ");
	scanf_s("%d", &a);
	printf("\nNhap vao gia tri b = ");
	scanf_s("%d", &b);


	while (a != b)
	{

		if (a > b) {
			a = a - b;

		}
		else {
			b = b - a;

		}
		USCLN = a;
	}
	printf("\nUSCLN = %d", USCLN);

	int a1, b1;
	printf("\nNhap vao gia tri a1 = ");
	scanf_s("%d", &a1);
	printf("\nNhap vao gia tri b1 = ");
	scanf_s("%d", &b1);
	for (int i = a1; i <= a1 * b1; i++) {
		if (i % a1 == 0 && i % b1 == 0)//neu i chia het cho ca a va b
		{
			BSCNN = i;
			break;
		}
	}
	//in ket qua ra man hinh
	printf("\nBCNN(%d, %d) = %d", a1, b1, BSCNN);
}

void Bai_3() {

	printf("Bai 3: ");

	printf("\nCN3. Tinh tien quan Karaoke\n");

	int gioBatdau, gioKetthuc;

	printf("Gio bat dau = ");
	scanf_s("%d", &gioBatdau);
	printf("\nGio ket thuc = ");
	scanf_s("%d", &gioKetthuc);

	double giaTien, hoaDOn;

	if (gioBatdau <= gioKetthuc && gioBatdau >= 12 && gioKetthuc <= 23) {
		if (gioBatdau >= 14 && gioBatdau <= 17) {
			if (gioKetthuc - gioBatdau <= 3) {
				giaTien = 150000;
				hoaDOn = (gioKetthuc - gioBatdau) * giaTien - ((gioKetthuc - gioBatdau) * giaTien) * 0.1;
				printf("Tien = %.lf VND", hoaDOn);
			}
			else {
				giaTien = 150000;
				hoaDOn = (3 * giaTien) + ((gioKetthuc - (gioBatdau + 3)) * giaTien) - (((gioKetthuc - (gioBatdau + 3)) * giaTien) * 0.3);
				double them10 = hoaDOn * 0.1;
				printf("Tien = %.lf VND", hoaDOn - them10);
			}
		}
		else
		{
			if (gioKetthuc - gioBatdau <= 3) {
				giaTien = 150000;
				hoaDOn = (gioKetthuc - gioBatdau) * giaTien;
				printf("Tien = %.lf VND", hoaDOn);
			}
			else {
				giaTien = 150000;
				hoaDOn = (3 * giaTien) + ((gioKetthuc - (gioBatdau + 3)) * giaTien) - (((gioKetthuc - (gioBatdau + 3)) * giaTien) * 0.3);
				printf("Tien = %.lf VND", hoaDOn);
			}
		}

	}
	else {
		printf("\n Gio sai");
	}

}

void Bai_4() {

	printf("Bai 4:");

	printf("\nCN4. Tinh tien dien\n");

	double giaDien1, giaDien2, giaDien3, giaDien4, giaDien5, giaDien6;
	giaDien1 = 1.678;
	giaDien2 = 1.734;
	giaDien3 = 2.014;
	giaDien4 = 2.536;
	giaDien5 = 2.834;
	giaDien6 = 2.927;

	double soKWHtieuthu, soTienphaitra;
	printf("\nNhap vao so dien tieu thu: ");
	scanf_s("%lf", &soKWHtieuthu);

	if (soKWHtieuthu >= 0 && soKWHtieuthu <= 50) {
		soTienphaitra = soKWHtieuthu * giaDien1;
		printf("\nSo tien phai dong o bac 1 la: %.3lf VND", soTienphaitra);
	}
	else if (soKWHtieuthu >= 51 && soKWHtieuthu <= 100) {
		soTienphaitra = 50 * giaDien1 + (soKWHtieuthu - 50) * giaDien2;
		printf("\nSo tien phai dong o bac 2 la: %.3lf VND", soTienphaitra);
	}
	else if (soKWHtieuthu >= 101 && soKWHtieuthu <= 200) {
		soTienphaitra = 50 * giaDien1 + 50 * giaDien2 + (soKWHtieuthu - 100) * giaDien3;
		printf("\nSo tien phai dong o bac 3 la: %.3lf VND", soTienphaitra);
	}
	else if (soKWHtieuthu >= 201 && soKWHtieuthu <= 300) {
		soTienphaitra = 50 * giaDien1 + 50 * giaDien2 + 100 * giaDien3 + (soKWHtieuthu - 200) * giaDien4;
		printf("\nSo tien phai dong o bac 4 la: %.3lf VND", soTienphaitra);
	}
	else if (soKWHtieuthu >= 301 && soKWHtieuthu <= 400) {
		soTienphaitra = 50 * giaDien1 + 50 * giaDien2 + 100 * giaDien3 + 200 * giaDien4 + (soKWHtieuthu - 300) * giaDien5;
		printf("\nSo tien phai dong o bac 5 la: %.3lf VND", soTienphaitra);
	}
	else if (soKWHtieuthu >= 401) {
		soTienphaitra = 50 * giaDien1 + 50 * giaDien2 + 100 * giaDien3 + 200 * giaDien4 + 300 * giaDien5 + (soKWHtieuthu - 400) * giaDien6;
		printf("\nSo tien phai dong o bac 6 la: %.3lf VND", soTienphaitra);
	}
}

void Bai_5() {

		int soTien;
		int arrmenhGia[100] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soTotien[9];


		do
		{
			printf("moi ban nhap so tien: ");
			scanf_s("%d", &soTien);

		} while ( soTien < 0);

		for (int i = 0; i < 9; i++)
		{
			soTotien[i] = soTien / arrmenhGia[i];
			soTien = soTien % arrmenhGia[i];
			
				printf("\nco %d to %d", soTotien[i], arrmenhGia[i]);
				
		}
		
		/*int namTram = q / 500;
		q = q % 500;
		int haiTram = q / 200;
		q = q % 200;
		int motTram = q / 100;
		q = q % 100;
		int namMuoi = q / 50;
		q = q % 50;
		int haiMuoi = q / 20;
		q = q % 20;
		int Muoi = q / 10;
		q = q % 10;
		int nam = q / 5;
		q = q % 20;
		int hai = q / 2;
		q = q % 20;
		int mot = q / 1;
		q = q % 1;*/


		/*printf("Ket qua: \n");
		printf("\n%d to 500 ", namTram, q);
		printf("\n%d to 200  ", haiTram, q);
		printf("\n%d to  100 ", motTram, q);
		printf("\n%d to 50", namMuoi, q);
		printf("\n%d to 20", haiMuoi, q);
		printf("\n%d to 10", Muoi, q);
		printf("\n%d to 5", nam, q);
		printf("\n%d to 2", hai, q);
		printf("\n%d to 1", mot, q);*/
		
		
	}

void Bai_6() {

	printf("Bai 6: ");

	printf("\nCN6. Tinh tien lai ngan hang\n");

	int tienVay, laiXuat, thoiHan;
	printf("\nSo tien can phai vay la: ");
	scanf_s("%d", &tienVay);
	printf("\nLai suat: ");
	scanf_s("%d", &laiXuat);
	printf("\nThoi han tra: ");
	scanf_s("%d", &thoiHan);

	int tienLai, Tienphaitra, tienGocphaitra;
	int Tienconlai = tienVay;

	for (int i = 1; i <= 12; i++) {
		tienLai = Tienconlai * 5 / 100;
		tienGocphaitra = tienVay / 12;
		Tienphaitra = tienLai + tienGocphaitra;
		Tienconlai = Tienconlai - tienGocphaitra;

		printf("\nSo tien lai thang %d la: %d VND", i, tienLai);

		printf("\nSo tien goc phai tra thang %d la %d VND", i, tienGocphaitra);

		printf("\nSo phai tra thang %d la: %d VND", i, Tienphaitra);

		printf("\nSo tien con lai thang %d la: %d VND\n", i, Tienconlai);
	}

}

void Bai_7() {



}

int main() {

	int luaChon;
	int c;

	do
	{
		printf("\n|---------------------------------------|");
		printf("\n|       CN1. Kiem tra so nguyen         |");
		printf("\n|  CN2. Tim uoc so chung, Boi so chung  |");
		printf("\n|CN3. Chuong trinh tinh tien qua karaoke|");
		printf("\n|          CN4. Tinh tien dien          |");
		printf("\n|             CN5. Doi tien             |");
		printf("\n|     CN6. Tinh lai xuat ngan hang      |");
		printf("\n|        CN7. CT vay tien mua xe        |");
		printf("\n|   CN8. Sap xep thong tin sinh vien    |");
		printf("\n|    CN9. Xay dung game FPOLY - LOTT    |");
		printf("\n|       CN10. CT tinh toan phan so      |");
		printf("\n|---------------------------------------|");

		printf("\nNhap vao lua chon: ");
		scanf_s("%d", &luaChon);

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

		case 4:

			Bai_4();
			break;

		case 5:

			Bai_5();

			break;

		case 6:

			Bai_6();
			break;

		case 7:


		default:
			printf("\nHet bai");
			break;
		}

	} while (luaChon != 0);

	return 0;
}







#include<stdio.h>

int main() {

	//bai 1
	/*printf("Bai 1:");
	double diem;
	Nhaplai ://lenh goto, diem khoi chay lai
	printf("\nNhap vao diem = ");
	scanf_s("%lf", &diem);

	if (diem < 0 || diem > 10) {
		printf("\nDiem khong hop le, so diem phai tu 0 den 10");
		goto Nhaplai;//lenh goto, sau khi cau lenh if sai khoi chay lai 
	}
	
	if (diem >= 9) {
		printf("\nHoc luc xuat sac");
	}
	else if (diem >= 8) {
		printf("\nHoc luc gioi");
	}
	else if (diem >= 6.5) {
		printf("\nHoc luc kha");
	}
	else if (diem >= 5) {
		printf("\nHoc luc trung binh");
	}
	else if (diem >= 3.5) {
		printf("\nHoc luc yeu");
	}
	else if (diem < 3.5) {
		printf("\nHoc luc kem");
	}*/

	//bai 3
	printf("\nBai 3:");
	double giaDien1, giaDien2, giaDien3, giaDien4, giaDien5, giaDien6;
	giaDien1 = 1.678;
	giaDien2 = 1.734;
	giaDien3 = 2.014;
	giaDien4 = 2.536;
	giaDien5 = 2.834;
	giaDien6 = 2.927;

	double sokWhtieuthu, soTiendong;
	printf("\nNhap vao so dien tieu thu la: ");
	scanf_s("%lf", &sokWhtieuthu);

	if (sokWhtieuthu >= 0 && sokWhtieuthu <= 50) {
		soTiendong = sokWhtieuthu * giaDien1;
		printf("\nSo tien phai dong o bac 1 la: %.3lf VND", soTiendong);
	}
	else if (sokWhtieuthu >= 51 && sokWhtieuthu <= 100) {
		soTiendong = 50 * giaDien1 + (sokWhtieuthu - 50) * giaDien2;
		printf("\nSo tien phai dong o bac 2 la: %.3lf VND", soTiendong);
	}
	else if (sokWhtieuthu >= 101 && sokWhtieuthu <= 200) {
		soTiendong = 50 * giaDien1 + 50 * giaDien2 + (sokWhtieuthu - 100) * giaDien3;
		printf("\nSo tien phai dong o bac 3 la: %.3lf VND", soTiendong);
	}
	else if (sokWhtieuthu >= 201 && sokWhtieuthu <= 300) {
		soTiendong = 50 * giaDien1 + 50 * giaDien2 + 100 * giaDien3 + (sokWhtieuthu - 200) * giaDien4;
		printf("\nSo tien phai dong o bac 4 la: %.3lf VND", soTiendong);
	}
	else if (sokWhtieuthu >= 301 && sokWhtieuthu <= 400) {
		soTiendong = 50 * giaDien1 + 50 * giaDien2 + 100 * giaDien3 + 200 * giaDien4 + (sokWhtieuthu - 300) * giaDien5;
		printf("\nSo tien phai dong o bac 5 la: %.3lf VND", soTiendong);
	}
	else if (sokWhtieuthu >= 401) {
		soTiendong = 50 * giaDien1 + 50 * giaDien2 + 100 * giaDien3 + 200 * giaDien4 + 300 * giaDien5 + (sokWhtieuthu - 400) * giaDien6;
		printf("\nSo tien phai dong o bac 6 la: %.3lf VND", soTiendong);
	}

	return 0;

}
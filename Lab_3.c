#include<stdio.h>
#include<math.h>

int main() {

	// bai 1
	printf("Bai 1:");
	double diem;
Nhaplai://lenh goto, diem khoi chay lai
	printf("\nNhap vao diem = ");
	scanf_s("%lf", &diem);

	if (diem < 0 || diem > 10) {
		printf("\nDiem khong hop le, so diem phai tu 0 den 10");
		goto Nhaplai;//lenh goto, sau khi cau lenh if sai khoi chay lai 
	}

	if (diem >= 9) {
		printf("\nHoc luc xuat sac\n");
	}
	else if (diem >= 8) {
		printf("\nHoc luc gioi\n");
	}
	else if (diem >= 6.5) {
		printf("\nHoc luc kha\n");
	}
	else if (diem >= 5) {
		printf("\nHoc luc trung binh\n");
	}
	else if (diem >= 3.5) {
		printf("\nHoc luc yeu\n");
	}
	else if (diem < 3.5) {
		printf("\nHoc luc kem\n");
	}

	//Bai 2
	printf("\nBai 2.1:");
	double a, b, x;
	printf("\nNhap vao cac gia tri cua phuong trinh: ");
	printf("\na = ");
	scanf_s("%lf", &a);
	printf("\nb = ");
	scanf_s("%lf", &b);
	x = -b / a;

	if (a == 0) {
		if (b == 0) {
			printf("\nPhuong trinh co vo so nghiem");
		}
		else {
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else {
		printf("\nPhuong trinh co nghiem x = %f", x);
	}



	printf("\nBai 2.2 :");
	double d, e, f, x0, denta, x1, x2;
	printf("Nhap vao cac he so cua phuong trinh bac 2: ");
	printf("\nd= ");
	scanf_s("%lf", &d);
	printf("\ne = ");
	scanf_s("%lf", &e);
	printf("\nf = ");
	scanf_s("%lf", &f);

	if (d == 0) {
		printf("\nPhuong trinh tro thanh ex - f = 0");
		if (e == 0) {
			if (f == 0) {
				printf("\nPhuong trinh co vo so nghiem");
			}
			else {
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else {
			x0 = -f / e;
			printf("\nPhuong trinh co nghiem x = %.2lf", x0);
		}

	}
	else {
		denta = pow(e, 2) - 4 * d * f;
		if (denta < 0) {
			printf("\n Phuong trinh vo nghiem");
		}
		else if (denta == 0) {
			x0 = -e / (2 * d);
			printf("\nPhuong trinh co nghiem kep x = %.2lf", x0);
		}
		else {
			x1 = (-e - sqrt(denta)) / (2 * d);
			x2 = (-e + sqrt(denta)) / (2 * d);
			printf("\nPhuong trinh co hai nghiem phan biet x1 = %.2lf \n x2 = %.2lf", x1, x2);
		}
	}



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

	//bai 4
	printf("\nBai 4: ");
	printf("\n******       BAI TAP      ******");
	printf("\n<*****1. Xep loai hoc sinh*****>");
	printf("\n<****2.Giai bat phong trinh****>");
	printf("\n<******3. Tinh tien dien*******>");
	printf("\n<*4. MeNU chuong trinh bai tap*>");

	int baiTapcanlam;
	printf("\nBai tap can lam la : ");
	scanf_s("%d", &baiTapcanlam);

	switch (baiTapcanlam)
	{
	case 1 :
		printf("\nBai 1: Xep loai hoc sinh");
		break;
	case 2 :
		printf("\nBai 2: Giai bat phuong trinh");
		break;
	case 3 :
		printf("\nBai 3: Tinh tien dien");
		break;
	case 4 :
		printf("\nBai 4 : Menu chuong trinh bai tap");

	default :
		printf("\nDa het bai tap");
		break;
	}

		return 0;

}


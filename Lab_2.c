#include<stdio.h>

int main() {

	//bai1 
	printf("Bai 1 : \n");

	int a, b;
	printf("Nhap vao so a = ");
	scanf_s("%d", &a);
	printf("\nNhap vao so b = ");
	scanf_s("%d", &b);

	int Tong, Hieu;
	Tong = a + b;
	Hieu = a - b;

	printf("\nTong hai so a va b = %d\n", Tong);
	printf("\nHieu hai so a va b = %d\n", Hieu);

	//bai2
	printf("\nBai 2:");

	int length, width;
	printf("\nNhap vao gia tri Length = ");
	scanf_s("%d", &length);
	printf("\nNhap vao gia tri Width = ");
	scanf_s("%d", &width);

	printf("\nChu vi hinh chu nhat la: %d", (length + width) * 2);
	printf("\nDien tich hinh chu nhat la: %d\n", length * width);

	//bai 3
	printf("\nBai 3:");
	double r, pi;
	printf("\nNhap vao ban kinh R = ");
	scanf_s("%lf", &r);
	printf("\nNhap vao so Pi = ");
	scanf_s("%lf", &pi);

	printf("\nChu vi cua hinh tron la: %.1f", 2 * r * pi);
	printf("\nDien tich cua hinh tron la: %.1lf\n", r * r * pi);

	//bai 4
	printf("\nBai 4:");
	double diemToan, diemLi, diemHoa;
	printf("\nNhap vao diem Toan = ");
	scanf_s("%lf", &diemToan);
	printf("\nNhap vao diem Li = ");
	scanf_s("%lf", &diemLi);
	printf("\nNhap vao diem Hoa = ");
	scanf_s("%lf", &diemHoa);

	double diemTrungbinh;
	diemTrungbinh = ((diemToan * 3) + (diemLi * 2) + (diemHoa * 1)) / 3;
	printf("Diem Trung Binh 3 mon la: %.1f", diemTrungbinh);

	return 0;
}
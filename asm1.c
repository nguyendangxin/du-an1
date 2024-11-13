#include<stdio.h>
#include<math.h>
> void menu (){-
} 
// khai bao ham  
int main(){
	int maChuongTrinh;
	float x1;
	int a, b, x, y;
	float soDien;
	int gioDau, gioCuoi;
	do{
	printf("\n\nYeu cau nhap ma:");
	printf("\n1. Kiem tra so nguyen");
	printf("\n2. Tim uoc so chung va boi so chung cua 2 so");
	printf("\n3. tinh tien quan karaoke");
	printf("\n4. tinh tien dien");
	printf("\n5. Thoat");
	printf("\nNhap yeu cau ban muon (1-5):");
	scanf("%d", &maChuongTrinh);
	switch(maChuongTrinh){
		case 1:
				printf("Nhap x1=");
	scanf("%f", &x1);
	if(x1 == (int) x1){
		printf("\n%f la so nguyen", x1);
	} else {
		printf("\n%f khong phai so nguyen", x1);
	}
	int i, count= 0;
	for(i=2; i < x1; i++){
		if((int)x1%i==0){
			count ++;
		}
	}
	if(count ==0){
		printf("\n%f la so nguyen to", x1);
	} else{
		printf("\n%f khong phai so nguyen to", x1);
	}
	float canX1= sqrt(x);
	int lamTronCanX1 = canX1;
	printf("\ncanX = %f", canX1);
	printf("\ncanX = %d", lamTronCanX1);
	if(canX1 == lamTronCanX1){
		printf("\nx la so chinh phuong");
	}else{
		printf("\nx khong phai so chinh phuong");
	}
			break;
		case 2:
				printf("Nhap 2 so a va b");
	printf("\na= ");
	scanf("%d", &a);
	printf("\nb= ");
	scanf("%d", &b);
	for(x=a; x>1; x--){
		if(a%x==0 && b%x==0){
			printf("UCLN cua %d va %d la: %d", a, b,x);
			break;
		}
	}
	for(y=2;;y++){
		if(y%a==0 && y%b==0){
			printf("\nBCNN cua %d va %d la: %d", a, b, y);
			break;
		}
	}
		    break;
		case 3:
			 printf("Nhap gio bat dau: ");
    scanf("%d", &gioDau);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &gioCuoi);

    if (gioDau < 12 || gioCuoi > 23) {
        printf("Quan karaoke chi hoat dong trong khoang gio tu 12h den 23h.\n");
        return 0;
    }

    int gioHat = gioCuoi - gioDau;
    int soTien = 0;

    if (gioHat <= 3) {
        soTien = gioHat * 50000;
    } else {
        soTien = 150000 + (gioHat - 3) * 35000;
    }

    if (gioDau >= 14 && gioDau <= 17) {
        soTien *= 0.9;
    } else if (gioHat >= 4) {
        soTien *= 0.7;
    }

    printf("Gia tien can thanh toan: %d VND\n", soTien);
		    break;
		case 4:
			printf("Chuong trinh tinh tien dien");
  printf("\nNhap so dien tieu thu thang nay:");
  scanf("%f", &soDien);
  if(soDien < 0){
  printf("Loi");
  }
    else if(soDien <= 50){
  	printf("Tien dien thang nay la: %f", soDien*1.678);
  }
  else if(soDien <= 100){
   printf("Tien dien thang nay la: %f", 50*1.678+(soDien-50)*1.734);
  }
  else if(soDien <= 200){
   printf("Tien dien thang nay la: %f", 50*1.678+50*1.734+(soDien-100)*2.014);
  }
  else if(soDien <= 300){
   printf("Tien dien thang nay la: %f", 50*1.678+50*1.734+100*2.014+(soDien-200)*2.536);
  }
  else if(soDien <= 400){
   printf("Tien dien thang nay la: %f", 50*1.678+50*1.734+100*2.014+100*2.536+(soDien-300)*2.834);
  }
     else {
       printf("Tien dien thang nay la: %f", 50*1.678+50*1.734+100*2.014+100*2.536+100*2.834+(soDien-400)*2.927);
       if(soDien >=1000)
       {
       	float quatai = (050*1.678+50*1.734+100*2.014+100*2.536+100*2.834+(soDien-400)*2.927)*2 ;
       	printf(" Qua tai dien");
       	printf(" So tien dien bi nhan doi");
       	printf("so tien can phai dong lai la \n\n %f", quatai) ;
		    
		   
	   }
  }
		    break;
		case 5:
		    break;    
		default:
		printf("\nNhap sai, xin moi nhap lai");
		    break;		
	}
}	while(maChuongTrinh != 5);
	return 0;
}

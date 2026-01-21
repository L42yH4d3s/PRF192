#include <stdio.h>
int main(){
	int NOK , t ;
	printf("Nhap so dien : ");
	scanf("%d", &NOK);
	if(NOK<100 && NOK>=0){
		t = NOK*950;
	}
	else if(NOK>=100 && NOK<150 && NOK>=0){
		t = 950*100 + (NOK-100)*1250;
	}
		else if(NOK>=150 && NOK<200 && NOK >=0){
		t = 950*100 + 50*1250 + (NOK-150)*1350;
		}
			else
				t = 950*100 + 50*1250 + 50*1350 + (NOK-200)*1550;	
	printf("So tien dien la: %d dong" ,t);
}
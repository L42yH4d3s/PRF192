#include<stdio.h>
// Dung if else
int main(){
	float a,b,c,max;
	printf("Nhap a,b,c :",a,b,c);
	scanf(" %f %f %f",&a,&b,&c);
	if(a>b && a>c)
			max = a ;
	else{
		if(b>c) 
			max = b;
		else
			max = c;
	}
	printf("So lon nhat la:%0.2f",max);
	return 0;
}
# include <stdio.h>
# include <math.h>
int main(){
	int a;
	printf ("nhap a=");
	scanf ("%d", &a);
	int b;
	printf ("nhap b=");
	scanf ("%d", &b);
	int c;
	printf ("nhap c=");
	scanf ("%d", &c);
	if(a=0){
		if (b=0){
			if (c=0){
				printf ("phuong trinh vo so nghiem");
			}else{
				printf ("phuong trinh vo nghiem");
			}
		}else{
			float x= -c/((float)b);
			printf ("phuong trinh co nghiem : %f",x);
		}
	}else{
		int d= b*b-4*a*c;
		if(d<0){
			printf ("phuong trinh vo nghiem");
		}else{
			if (d=0){
				float x= (-b)/((float)2*a);
				printf ("phuong trinh co nghiem: %f",x);
			}else{
				float x1= (-b+sqrt (d))/(2*a);
				float x2= (-b-sqrt (d))/(2*a);
				printf ("nghiem thu nhat: %f/n",x1);
				printf ("nghiem thu hai: %f",x2);
			}
		}
	}
}

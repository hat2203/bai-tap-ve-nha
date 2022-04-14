# include <stdio.h>
int main (){
	int a;
	scanf ("%d", &a);
	int b;
	scanf ("%d", &b);
	int c;
	scanf ("%d", &c);
		if (a < b){
			if (a < c){
				printf ("a min");
			}else{
				printf("c min");
				
			}
		
		}else{
		if (b<c){
			printf ("b min");
		}else{
			printf("c min");
		}	
		}
}



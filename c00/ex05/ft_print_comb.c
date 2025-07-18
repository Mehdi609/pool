#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_comb(void){
	for(int a = 0 ; a <= 9; a++){

		for(int b = 0 ; b <= 9; b++){
			if(a>=b){	
			       	continue;
			}
				
			for(int c = 0 ; c <= 9; c++){
				
				if(b>=c){	
				       	continue;
				}
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if(a != 7 || b != 8 || c != 9){
			 		ft_putchar(',');
					ft_putchar(' ');
				}else {	
			 		ft_putchar('\n');
				}
			}
		}
	}
}


int main(){
	ft_print_comb();
	return 0;
}

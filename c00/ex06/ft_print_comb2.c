#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);

}


void ft_put_duo_nbr(int n){
	char e = n % 10 + '0';
	char d = n / 10 + '0';
	ft_putchar(d);
	ft_putchar(e);


}




void ft_print_comb2(void){
   	int a = 0;
	while(a < 99){
		int b = a + 1;
		while(b <= 99){
			ft_put_duo_nbr(a);
			ft_putchar(' ');
			ft_put_duo_nbr(b);
			if(a != 98 || b != 99){
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	
	}
}


int main(){
	ft_print_comb2();
	return 0;

}

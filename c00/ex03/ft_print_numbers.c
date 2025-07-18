#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}


void ft_print_numbers(void){
	for(int i = 0; i<=9; i++){
	   char c = i + '0';
   	   ft_putchar(c);	   
	}
	write(1, "\n" , 1);
}

int main(){
	ft_print_numbers();
	return 0;
}

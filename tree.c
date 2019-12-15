#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void make_tree(void);
void print_lane(char, int, int);

int main(){
	
	while(1){
		make_tree();
	}
	
	return 0;
}

void make_tree(void){
	int random = rand () % (30 - 1 + 1) + 1;  
	char character; 
	int i;
	
	
	for( i = 1; i < 23; i+=2 ){
		int random2 = rand() % (random - 1 + 1) + 1; 
		
		if( i == 1 )
			character = '$';
		else if( random2 % 4 == 0) 
			character = 'o';
		else if( random2 % 3 == 0 )
			character = 'i';
		else
			character = '*';
			
		print_lane(character, i, 33);
	}
	
 	print_lane('|', 3, 33);
	print_lane('|', 3, 33);
	sleep(1);
	system("CLS");
}

void print_lane(char ch, int repeat, int width){
    int i;
	int pad = ( width - repeat ) / 2;
	
    for (i = 0; i < pad; i++) {
        printf(" ");
    }
    for (i = 0; i < repeat; i++) {
        printf("%c", ch);
    }
    for (i = 0; i < pad; i++) {
        printf(" ");
    }
    printf("\n");
}


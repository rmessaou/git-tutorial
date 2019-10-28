#include <stdio.h>
#include "espl_lib.h"

int main(){

printf("Hello ESPL\n");
char answer = 'y';
int num = 0;
while(answer == 'y'){
	printf("please write a number: ");	
	scanf("%d",&num);
	char* word = num_to_words(num);
	char tmp = getchar();
	printf("=====================\nyour number is %s\n=====================\n", word);
	printf("Do you want to cintinue [y]? or quit [q]?: ");
	scanf("%c", &answer);
}

return 0;
}

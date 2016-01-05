#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_text[256] = "";
    int input_number;
	while (strcmp("exit",&input_text) != 0){
		printf("Type a number, or type exit to quite!\n");
		scanf("%s", &input_text);

		if(strcmp("exit",&input_text)== 0){
            printf("Bye bye\n");
    }
    else{
        input_number = atoi(&input_text);
        printf("You typed %d!\n", input_number);
      }
  }
  return 0;
}

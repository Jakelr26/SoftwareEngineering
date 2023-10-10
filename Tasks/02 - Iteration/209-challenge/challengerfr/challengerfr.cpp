#include <stdio.h> // language type 

int main() // indicate the start of the main code 
{
	printf("letter guesser: \n");
	printf("Type a letter in then press the enter key (lower case) \n");
	printf(".	.	. \n");

	for (float a = 0; a < 10; a += 0.5) // start the for loop 
	{
		char K = getchar(); // read the charachter input
		if (K != 'p')
		{
			printf("Try again\n");
			printf("Do you want a hint \n");
			printf("If yes press Y else press any key \n");
			char YorN = getchar();
			if ((YorN != 'y') && (YorN != 'Y'))
			{
				printf("try again\n");
			}
			else
			{
				printf("stuck out toung\n");
			}
		}
	}
	printf("weldone and thank you for playing");
}

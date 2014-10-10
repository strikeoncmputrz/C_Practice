//This program is a rudimentry calculator
#include <stdio.h>
#include <stdbool.h>
int main(void){

	float number, accumulator, ans;
	char operand;
	bool end = false;
	printf("Enter a number and an operand to begin calculations.\n");
	printf("Allowed operands are +, -, *, /, S, E.\nS sets the accumulator, E ends the calculation.\n");
	printf("Begin Calculations\n");
	while(!end)
	{
		scanf("%f %c", &number, &operand);
		if(operand == 'E')
		{
			printf("%f E	End of Program.\n");
			printf("= %f \nEnd of Calculations.\n", ans);
			end = true;
		} else if(operand == 'S')
		{
			accumulator = number;
			printf("	Set Accumulator to %f\n", accumulator);
			printf("= %f	Contents of Accumulator\n ", accumulator);
		
		} else 
		{
			switch (operand)
			{
				case '+':
					ans = accumulator + number;
					accumulator = ans;
					printf("Add %f\n", number);
					printf("= %f	Contents of Accumulator\n", accumulator);
					break;
				case '-':
					ans = accumulator - number;
					accumulator = ans;
					printf("Subtract %f\n", number);
					printf("= %f	Contents of Accumulator\n", accumulator);
					break;
				case '*':
					ans = accumulator * number;
					accumulator = ans;
					printf("Multiply by %f\n", number);
					printf("= %f	Contents of Accumulator\n", accumulator);
					break;
				case '/':
					if(number == 0)
					{
						printf("Can't divide by 0!\n");
						end = true;
					}else
					{
						ans = accumulator / number;
						accumulator = ans;
						printf("	Divide by %f\n", number);
						printf("= %f	Contents of Accumulator\n", accumulator);

					}
					break;
				default:
					printf("Unknown operand!\n");
					end = true;
					break;
			}
		}
	}
	return 0;
}

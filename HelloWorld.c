#include <stdio.h>

//Simple hello world program that will greet the user by their name. 
int main () {
	char username[100];
	printf("Enter Your Name\n");
	scanf("%s", username);
	printf("Hello %s\n", username);
}
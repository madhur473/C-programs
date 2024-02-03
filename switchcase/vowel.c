#include<stdio.h>
int main(){
	char ch;
	printf("Enter any Character: ");
	scanf("%c",&ch);
	 switch(ch)
	 {
	 	case 'a':
	 	case 'e':
	 	case 'i':
	 	case 'o':
	 	case 'u':
	 		printf("\n%c is Small Vowel",ch);
	 		break;
	 	case 'A':
	 	case 'E':
	 	case 'I':
	 	case 'O':
	 	case 'U':
	 		printf("\n%c is Capital Vowel",ch);
	 		break;
	 	default:
	 		printf("\n%c is other character",ch);
	 	
	 }
}

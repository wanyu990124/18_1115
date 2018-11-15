#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SEC_PER_MIN 60
int main() {
	int sec, min, left;
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds(<= 0 to quit):\n");
	scanf("%d", &sec);
	while (sec > 0) {
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes,%d seconds.\n", sec, min, left);
		printf("Enter the next value (<=0 to quit ):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");
	return 0;
}

int main() {
	char ch;
	int i;
	float f1;
	f1 = i = ch = 'C';
	printf("ch=%c,i=%d,f1=%2.2f\n", ch, i, f1);
	ch = ch + 1;
	i = f1 + 2 * ch;
	f1 = 2.0*ch + i;
	printf("ch=%c,i=%d,f1=%2.2f\n", ch, i, f1);
	ch = 1107;
	printf("Now ch = %c\n",ch);
	ch = 80.89;
	printf("Now ch = %c\n",ch);
	system("pause");
	return 0;
}

void pound(int n) {
	while (n-- > 0) {
		printf("#");
	}
	printf("\n");
}
int main() {
	int times = 5;
	char ch = '!';
	float f = 6.0f;
	pound(times);
	pound(ch);
	pound(f);
	system("pause");
	return 0;
}

int main() {
	int n[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i, j, temp;
	printf("Ô­Ê¼¾ØÕó£º\n");
	for (i = 0; i<3; i++) {
		for (j = 0; j<3; j++)
			printf("%d  ", n[i][j]); 
		printf("\n");
	}
	for (i = 0; i<3; i++) {
		for (j = 0; j < 3; j++) {
			if (j > i) {
				temp = n[i][j];
				n[i][j] = n[j][i];
				n[j][i] = temp;
			}
		}
	printf("×ªÖÃ¾ØÕó£º\n");
	for (i = 0; i<3; i++) {
		for (j = 0; j<3; j++)
			printf("%d  ", n[i][j]);  
		printf("\n");
	}
	system("pause");
	return 0;
}

int fun(char *a, char *h, char *p) {
	int i, j;
	for (i = 0, j = 0; &h[i] < p; i++) {
		if (h[i] != '*') {
			h[j++] = h[i];
		}
	}
	for (i = 0; p[i]; i++, j++) {
		h[j] = p[i];
		h[j] = '\0';
	}
	return 0;
}

int main() {
	char s[81];
	char* t;
	char* f;
	printf("Enter a string :\n");
	gets(s); 
	t = f = s;  
	while (*t) {
		t++;
	}
	t--;  
	while (*t == '*') {
			t--;
		}
	while (*f == '*') {
		f++;
	}
	fun(s, f, t);
	printf("The string after deleted:\n");  
	puts(s);
	return 0;
}
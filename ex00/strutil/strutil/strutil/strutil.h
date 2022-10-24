typedef unsigned int	uint8;

int str_length(char* str) {
	int len = 0;
	for (char* c = str; *c != 0; *c++)
		len++;
	return len;
}

void str_lower(char* str) {
	while (*str) {
		if (*str >= 65 && *str <= 90)
			*str += 32;
		*str++;
	}
}

bool str_compare(char* a, char* b) {
	while (*a || *b) {
		if (*a++ != *b++)
			return 0;
	}
	return 1;
}

void str_copy(char* dst, char* src) {
	while (*src)
		*dst++ = *src++;
	*dst = 0;
}

char* str_dup(char* str) {
	char* dup = new char[str_length(str) + 1];
	str_copy(dup, str);
	return dup;
}

void str_append(char* str1, char* str2) {
	while (*str1)
		*str1++;
	while (*str2)
		*str1++ = *str2++;
	*str1 = 0;
}

char* str_find(char* str, char* sub) {
	char* f = str;
	char* s = sub;
	while (*str) {
		if (*str == *sub) {
			while (*sub) {
				if (*str++ != *sub++)
					return f;
			}
			return s;
		}
		*str++;
	}
	return s;
}

void str_trim(char* str) {
	int l = str_length(str);
	int s_l = 0;
	int e_l = 0;
	for (int i = 0; i < l; i++) {
		if (str[i] == ' ')
			s_l++;
		else
			break;
	}
	for (int j = l-1; j > 0; j--) {
		if (str[j] == ' ')
			e_l++;
		else
			break;
	}
	int c_l = l - s_l - e_l;
	while (c_l-- && *str) {
		*str = *(str + s_l);
		*str++;
	}
	*str = 0;
}

char* find_max_run(char* str, int* r_l) {
	int s = 0;
	int max = 0;
	int l = 1;
	char c = *str;
	for (int i = 1; i < str_length(str)+1; i++) {
		if (c == str[i])
			l++;
		else {
			if (l > max) {
				max = l;
				s = i-l;
			}
			c = str[i];
			l = 1;
		}
	}
	*r_l = max;
	return (str+s);
}


void print_square(int offset, int w, int h, int l) {
	for (int i = 0; i < h; i++) {
		for (int b = 0; b < offset*l; b++)
			printf(" ");
		for (int j = 0; j < w; j++)
			printf("*");
		printf("\n");
	}
}

void paint_star(int Y, int xoffset, int w, int h) {
	for (int i = 0; i < Y; i++)
		print_square(xoffset, w, h, i);
}










//char* get_distance(uint8* R, uint8* Q, bool isL1, float* d) {
//	uint8* r = R;
//	uint8* q = Q;
//	printf("%d\n", sizeof R);
//	printf("%d\n", sizeof Q);
//	return "ABC";
//}

void paint_square(int Y, int xoffset, int w, int h) {
	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < h; j++) {
			for (int i2 = 0; i2 < xoffset*i; i2++)
				printf(" ");
			for (int j2 = 0; j2 < w; j2++)
				printf("*");
			printf("\n");
		}
	}
}

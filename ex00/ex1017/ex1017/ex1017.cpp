#include "ex1017.h"
#include "Rect.h"

int calc() {
	return 1;
}
int main(int argc, char* argv[]) {
	//Arr2D<char> arr = Arr2D<char>(10, 10);
	//arr.init('*');
	//arr.show();

	//arr.at(0, 0) = '-';
	//arr.at(0, 1) = '-';
	//arr.at(1, 0) = '-';
	//arr.at(1, 1) = '-';
	//arr.show();

	//arr.fill(2, 2, 5, 5, '-');
	//arr.show();
	//arr.fill(0, 0, 10, 10, 'b');
	//arr.show();

	//Rect r0 = Rect(0, 0, 10, 10);
	//Rect r1 = Rect(2,2,3,3);
	//Rect r2 = Rect(5,5,5,5);
	//r0.show();
	//r1.show();
	//r2.show();

	//r1.inflate(3, 3);
	//r1.show();
	//Rect r3 = r1.Union(r2);
	//r3.show();

	//Rect r4 = r3.Intersect(r0);
	//r4.show();

	//Rect r5 = r1.Intersect(r0);
	//r5.show();

	//char str[100];
	//scanf("%s", &str);
	
	<int> nums;

	char str[100] = "3+4+(5-1+(5-(1+2)+(5+2)+1)";
	char oper[100];
	char nums[100];
	char brackets[100];
	int o_i = 0, n_i = 0, b_i = 0;
	
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == '+' || str[i] == '-') { // operator
			oper[o_i++] = o_i++;
		}
		if (str[i] == '(' || str[i] == ')') { // bracket
			brackets[b_i++] = str[i];
		}
		if (str[i] >= '1' && str[i] <= '9') { // nums
			nums[n_i++] = str[i];
		}
		//printf("%c\n", str[i]);
		i++;
	}

	printf("%s\n", oper);
	printf("%s\n", nums);
	printf("%s\n", brackets);


	return 0;
}

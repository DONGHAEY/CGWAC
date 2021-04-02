#include <stdio.h>
void func(){
	static int num1=0;
	printf("%d\n", num1);
	num1 = num1 + 1;
}
int main(){
	func();
	func();
	func();
	func();
	func();
	func();
	return 0;
}

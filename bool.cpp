#include <stdio.h>
#include <stdbool.h>

int main()

{
	bool b1 = false;
	
	bool b2 = true;
	
	if (b1) { //b1�� ���̸�
		printf("b1=���̴�\n");
	}
	
	else {
		printf ("b1=�����̴�\n");
	}
	 //���࿡ b1�� �����̸� ������ ���̸� ���� ����ϴ� ��ɾ �������. 
	 
	if (!b2) { //~b2
		printf ("b2=�����̴�");
	}
	
	else {
		printf ("b2=���̴�");
	} 
	
	return 0;
	
}

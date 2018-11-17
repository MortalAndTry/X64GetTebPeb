#include<stdio.h>
#include<intrin.h>
#include"X64asm.h"

int main() {
	//__debugbreak();
	PVOID teb;
	PVOID peb;
	teb = GetTeb();
	peb = GetPeb(teb);
	printf("teb: %p\n", teb);
	printf("peb: %p\n", peb);
	system("pause");

}
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	char huruf[50];

strlwr(huruf);
cout<<"Input karakter huruf kecil	: "; gets(huruf);
cout<<endl;

strupr(huruf);
cout<<"Hasil Perubahan dari huruf kecil ke huruf besar	: "<<huruf<<endl;
getch();
}

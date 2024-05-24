#include<stdio.h>
#include<list>
#include <iostream>
using namespace std;

int main()
{
	list<const char*> lst{"Tokyo","kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otuka","Ikebukuro","Mejiro","takadanobaba",
		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatucho","Shimbashi","Yurakucho"};

	list<const char*>::iterator itr;

	printf("昭和3年の路線図(鉄道省時代)\n\n");

	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}

	for (itr = lst.begin(); itr != lst.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = lst.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	printf("\n昭和47年の路線図(国鉄時代)\n\n");

	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}

	for (itr = lst.begin(); itr != lst.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = lst.insert(itr, "Takanawa-Gateway");
			++itr;
		}
	}

	printf("\n令和5年の路線図(JR時代)\n\n");

	for (auto itr = lst.begin(); itr != lst.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}

	return 0;

}

/******
*ohjelman nimi: harjoitus 10
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
sy�tt�m�ll� luku 0.

Tulostus:
Sy�tit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteens� 10 kpl 100.00%

*versio 1.0
*pvm: 8.10.2014
*/
#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	int luku;
	int neg = 0;
	int pos = 0;

	do
	{
		cout << "Anna luku, syota 0 lopettaaksesi.";
		cin >> luku;
		if (luku > 0) pos++;
		if (luku < 0) neg++;
	} while (luku != 0);
	cout << "Syotit kokonaislukuja seuraavasti:\n---------------------";
	cout << "\nNegatiiviset: " << neg << " kpl " << ((float)neg / (neg + pos))* 100 << "%";
	cout << "\nPositiiviset: " << pos << " kpl " << ((float)pos /(neg + pos)) * 100 << "%";
	cout << "\nYhteensa: " << pos + neg << " kpl " << ((float)(neg + pos) / (neg + pos)) * 100 << "%";
}


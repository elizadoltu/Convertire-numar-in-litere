#include <iostream>
#include <cstring>
#include "numarCifre.h"
#include "oglindit.h"
#define MAX_CHARACTERS 255
using namespace std;

struct alcatuireNumar {

	string digit[10] = { "unu", "doi", "trei", "patru", "cinci",
		"sase", "sapte", "opt", "noua" };

	string zeci[10] = { "zece", "douazeci", "treizeci", "patruzeci", "cincizeci",
		"saizeci", "saptezeci", "optzeci", "nouazeci" };

	string zeciSpeciale[10] = { "unsprezece", "doisprezece", "treisprezece", "paisprezece",
		"cincisprezece", "saisprezece", "saptesprezece", "optsprezece", "nouasprezece" };

	string unitate[6] = { "milion", "milioane", "mie", "mii", "suta", "sute" };

	string articulatii[3] = { "o", "un", "doua"};
};

char rezultat[MAX_CHARACTERS];

int main() {

	int numar;
	cin >> numar;

	alcatuireNumar contruire;

	const int counter = cateCifre(numar);
	int oglindit = construireOglindit(numar);

	if (numar / 100000000) {

		switch (oglindit % 10) {

			case 1: strcat(rezultat, "o suta ");
				break;
			case 2: strcat(rezultat, "doua sute ");
				break;
			case 3: strcat(rezultat, "trei sute ");
				break;
			case 4: strcat(rezultat, "patru sute ");
				break;
			case 5: strcat(rezultat, "cinci sute ");
				break;
			case 6: strcat(rezultat, "sase sute ");
				break;
			case 7: strcat(rezultat, "sapte sute ");
				break;
			case 8: strcat(rezultat, "opt sute ");
				break;
			case 9: strcat(rezultat, "noua sute ");
				break;
		}
		numar /= 10;
		oglindit /= 10;
	}
	if (numar / 10000000) {

		switch (oglindit % 10) {

			case 1: {

				switch (oglindit / 10 % 10) {
					case 1: strcat(rezultat, "unsprezece milioane ");
						break;
					case 2: strcat(rezultat, "doisprezece milioane ");
						break;
					case 3: strcat(rezultat, "treisprezece milioane ");
						break;
					case 4: strcat(rezultat, "paisprezece milioane ");
						break;
					case 5: strcat(rezultat, "cincisprezece milioane ");
						break;
					case 6: strcat(rezultat, "saisprezece milioane ");
						break;
					case 7: strcat(rezultat, "saptesprezce milioane ");
						break;
					case 8: strcat(rezultat, "optsprezece milioane ");
						break;
					case 9: strcat(rezultat, "nouasprezece milioane ");
						break;
				}
				numar /= 100;
				oglindit /= 100;
				break;
			};
				break;
			case 2: strcat(rezultat, "douazeci ");
				break;
			case 3: strcat(rezultat, "treizeci ");
				break;
			case 4: strcat(rezultat, "patruzeci ");
				break;
			case 5: strcat(rezultat, "cincizeci ");
				break;
			case 6: strcat(rezultat, "saizeci ");
				break;
			case 7: strcat(rezultat, "saptezeci ");
				break;
			case 8: strcat(rezultat, "optzeci ");
				break;
			case 9: strcat(rezultat, "nouazeci ");
				break;
		}
		if (cateCifre(numar) > 7){
			if (oglindit / 10 % 10) strcat(rezultat, "si ");
			else strcat(rezultat, "de milioane ");
		}
		numar /= 10;
		oglindit /= 10;
	}
	if (numar / 1000000) {
		bool checking;
		if (counter == 7) checking = true;
		else checking = false;

		switch (checking) {
			case 1: 
				switch (oglindit % 10) {
					case 1: strcat(rezultat, "unu de milioane ");
						break;
					case 2: strcat(rezultat, "doua de milioane ");
						break;
					case 3: strcat(rezultat, "trei de milioane ");
						break;
					case 4: strcat(rezultat, "patru de milioane ");
						break;
					case 5: strcat(rezultat, "cinci de milioane ");
						break;
					case 6: strcat(rezultat, "sase de milioane ");
						break;
					case 7: strcat(rezultat, "sapte de milioane ");
						break;
					case 8: strcat(rezultat, "opt de milioane ");
						break;
					case 9: strcat(rezultat, "noua de milioane ");
						break;
				}
				break;
			case 0:
				switch (oglindit % 10) {
					case 1: strcat(rezultat, "un milion ");
						break;
					case 2: strcat(rezultat, "doua milioane ");
						break;
					case 3: strcat(rezultat, "trei milioane ");
						break;
					case 4: strcat(rezultat, "patru milioane ");
						break;
					case 5: strcat(rezultat, "cinci milioane ");
						break;
					case 6: strcat(rezultat, "sase milioane ");
						break;
					case 7: strcat(rezultat, "sapte milioane ");
						break;
					case 8: strcat(rezultat, "opt milioane ");
						break;
					case 9: strcat(rezultat, "noua milioane ");
						break;
				}
				break;
		}
		numar /= 10;
		oglindit /= 10;
	}
	
	if (numar / 100000) {
		switch (oglindit % 10) {

			case 1: strcat(rezultat, "o suta ");
				break;
			case 2: strcat(rezultat, "doua sute ");
				break;
			case 3: strcat(rezultat, "trei sute ");
				break;
			case 4: strcat(rezultat, "patru sute ");
				break;
			case 5: strcat(rezultat, "cinci sute ");
				break;
			case 6: strcat(rezultat, "sase sute ");
				break;
			case 7: strcat(rezultat, "sapte sute ");
				break;
			case 8: strcat(rezultat, "opt sute ");
				break;
			case 9: strcat(rezultat, "noua sute ");
				break;
		}
		if ((oglindit / 10 % 10) == 0 && (oglindit / 100 % 10) == 0 && cateCifre(numar) <= 6) strcat(rezultat, "de mii ");
		numar /= 10;
		oglindit /= 10;
	}
	if (numar / 10000){

		switch (oglindit % 10){

			case 1:
		{

			switch (oglindit / 10 % 10)
			{
				case 1:
					strcat(rezultat, "unsprezece mii ");
					break;
				case 2:
					strcat(rezultat, "doisprezece mii ");
					break;
				case 3:
					strcat(rezultat, "treisprezece mii ");
					break;
				case 4:
					strcat(rezultat, "paisprezece mii ");
					break;
				case 5:
					strcat(rezultat, "cincisprezece mii ");
					break;
				case 6:
					strcat(rezultat, "saisprezece mii ");
					break;
				case 7:
					strcat(rezultat, "saptesprezce mii ");
					break;
				case 8:
					strcat(rezultat, "optsprezece mii ");
					break;
				case 9:
					strcat(rezultat, "nouasprezece mii ");
					break;
			}
			numar /= 100;
			oglindit /= 100;
			break;
		};
		break;
			case 2:
				strcat(rezultat, "douazeci ");
				break;
			case 3:
				strcat(rezultat, "treizeci ");
				break;
			case 4:
				strcat(rezultat, "patruzeci ");
				break;
			case 5:
				strcat(rezultat, "cincizeci ");
				break;
			case 6:
				strcat(rezultat, "saizeci ");
				break;
			case 7:
				strcat(rezultat, "saptezeci ");
				break;
			case 8:
				strcat(rezultat, "optzeci ");
				break;
			case 9:
				strcat(rezultat, "nouazeci ");
				break;
		}
		if (cateCifre(numar) == 5 || cateCifre(numar) == 6){
			if ((oglindit / 10 % 10) == 0) strcat(rezultat, "de mii");
			if (oglindit / 10 % 10) strcat(rezultat, "si ");
		}
		numar /= 10;
		oglindit /= 10;
	}
	if (numar / 1000)
	{
		bool checking;
		if (counter > 4)
			checking = true;
		else
			checking = false;

		switch (checking)
		{
		case 1:
			switch (oglindit % 10)
			{
			case 1:
				strcat(rezultat, "unu de mii ");
				break;
			case 2:
				strcat(rezultat, "doua de mii ");
				break;
			case 3:
				strcat(rezultat, "trei de mii ");
				break;
			case 4:
				strcat(rezultat, "patru de mii ");
				break;
			case 5:
				strcat(rezultat, "cinci de mii ");
				break;
			case 6:
				strcat(rezultat, "sase de mii ");
				break;
			case 7:
				strcat(rezultat, "sapte de mii ");
				break;
			case 8:
				strcat(rezultat, "opt de mii ");
				break;
			case 9:
				strcat(rezultat, "noua de mii ");
				break;
			}
			break;
		case 0:
			switch (oglindit % 10)
			{
			case 1:
				strcat(rezultat, "o mie ");
				break;
			case 2:
				strcat(rezultat, "doua mii ");
				break;
			case 3:
				strcat(rezultat, "trei mii ");
				break;
			case 4:
				strcat(rezultat, "patru mii ");
				break;
			case 5:
				strcat(rezultat, "cinci mii ");
				break;
			case 6:
				strcat(rezultat, "sase mii ");
				break;
			case 7:
				strcat(rezultat, "sapte mii ");
				break;
			case 8:
				strcat(rezultat, "opt mii ");
				break;
			case 9:
				strcat(rezultat, "noua mii ");
				break;
			}
			break;
		}
		numar /= 10;
		oglindit /= 10;
	}
	if (numar / 100)
	{
		switch (oglindit % 10){

		case 1:
			strcat(rezultat, "o suta ");
			break;
		case 2:
			strcat(rezultat, "doua sute ");
			break;
		case 3:
			strcat(rezultat, "trei sute ");
			break;
		case 4:
			strcat(rezultat, "patru sute ");
			break;
		case 5:
			strcat(rezultat, "cinci sute ");
			break;
		case 6:
			strcat(rezultat, "sase sute ");
			break;
		case 7:
			strcat(rezultat, "sapte sute ");
			break;
		case 8:
			strcat(rezultat, "opt sute ");
			break;
		case 9:
			strcat(rezultat, "noua sute ");
			break;
		}
		numar /= 10;
		oglindit /= 10;
	}
	if (numar / 10)
	{

		switch (oglindit % 10){

		case 1:{

			switch (oglindit / 10 % 10){
			case 0:
				strcat(rezultat, "zece ");
				break;
			case 1:
				strcat(rezultat, "unsprezece ");
				break;
			case 2:
				strcat(rezultat, "doisprezece ");
				break;
			case 3:
				strcat(rezultat, "treisprezece ");
				break;
			case 4:
				strcat(rezultat, "paisprezece ");
				break;
			case 5:
				strcat(rezultat, "cincisprezece ");
				break;
			case 6:
				strcat(rezultat, "saisprezece ");
				break;
			case 7:
				strcat(rezultat, "saptesprezce ");
				break;
			case 8:
				strcat(rezultat, "optsprezece ");
				break;
			case 9:
				strcat(rezultat, "nouasprezece ");
				break;
			}
			numar /= 100;
			oglindit /= 100;
			break;
		};
		break;
		case 2:
			strcat(rezultat, "douazeci ");
			break;
		case 3:
			strcat(rezultat, "treizeci ");
			break;
		case 4:
			strcat(rezultat, "patruzeci ");
			break;
		case 5:
			strcat(rezultat, "cincizeci ");
			break;
		case 6:
			strcat(rezultat, "saizeci ");
			break;
		case 7:
			strcat(rezultat, "saptezeci ");
			break;
		case 8:
			strcat(rezultat, "optzeci ");
			break;
		case 9:
			strcat(rezultat, "nouazeci ");
			break;
		}
		if (cateCifre(numar) > 1){
			if(oglindit / 10 % 10) strcat(rezultat, "si ");
			else oglindit /= 10;
		}
		oglindit /= 10;
		numar /= 10;
	}
	if (oglindit % 10){

		switch(oglindit % 10){
			case 0: strcat(rezultat, "zero");
				break;
			case 1: strcat(rezultat, "unu");
				break;
			case 2: strcat(rezultat, "doi");
				break;
			case 3: strcat(rezultat, "trei");
				break;
			case 4: strcat(rezultat, "patru");
				break;
			case 5: strcat(rezultat, "cinci");
				break;
			case 6: strcat(rezultat, "sase");
				break;
			case 7: strcat(rezultat, "sapte");
				break;
			case 8: strcat(rezultat, "opt");
				break;
			case 9: strcat(rezultat, "noua");
		}
		numar /= 10;
		oglindit /= 10;
	}
	for (int index = 0; index < strlen(rezultat); ++index)
		cout << rezultat[index];

	return 0;
}

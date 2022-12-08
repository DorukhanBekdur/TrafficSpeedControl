#include <iostream>
using namespace std;
int main()
{
	int hiz;
	char tur;
	/*********************
		-AZAMÝ HIZ-
		Otomobil : 82
		Otobüs : 70
		Kamyonet : 50
	*********************/
	cout << "Aracin Turunu Giriniz: " <<endl;
	cout << "(Otomobil: o, Otobus: t, Kamyonet: k) : ";
	cin >> tur;
	cout << "Aracin hizini giriniz: ";
	cin >> hiz;
	
	if (tur == 'o')
	{
			cout << "Arac otomobildir." <<endl;
		if (hiz > 82)
			cout << "Arac Cezalidir.";
		else
			cout << "Kurallara Uygundur.";
	}		
	else if (tur=='t'){
			cout << "Arac Otobustur." <<endl;
		
		if (hiz > 70)

			cout << "Arac Cezalidir.";
			
		else
		
			cout << "Kurallara Uygundur.";
	}
			
	else if (tur == 'k')
	{
			cout << "Arac Kamyonettir." <<endl;
		if (hiz > 50)
			cout << "Arac Cezalidir.";
		else
			cout << "Kurallara Uygundur.";
	}
	else
		cout << "Arac Turunu Yanlis Girdiniz!!!";

	return 0;
	
}
	

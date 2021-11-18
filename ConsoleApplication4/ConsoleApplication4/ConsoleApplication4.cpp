// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	//const int roz = 10;
	//int tab[10], x=3;
	//for (int i = 0; i < roz; i++)
	//{
	//	tab[i] = x;

	//	cout << tab[i]<< " " ;
	//	x += 3;
	//}
	//zad2	
	//const int roz = 10;
	//int tab[10], x=3;
	//for (int i = 0; i < roz; i += 2)
	//{
	//	tab[i] = x;

	//	cout << tab[i] << " ";
	//	x += 6;
	//}
	//zad3
	//const int roz=5;
	//int tab[roz], x = 0;
	//int a;
	//cout << "podaj wartosc ";
	//cin >> a;
	//for (int i = roz - 1; i >= 0; i--)
	//{
	//	tab[i] = a - x; x += 5;
	//}
	//for (int i = 0; i < roz; i++)
	//{
	//	cout << tab[i] << " ";
	//}

	//zad4
	int min, tab[] = { -23 };
	
	srand(time(NULL));
	cout << rand() %50;
	min = tab[0];






}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

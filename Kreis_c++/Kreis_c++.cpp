// Kreis_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
#include<Windows.h>
#include <string> 
using namespace std;

class Fahradd {
public:
	string Farbe;
	int Geange;
	int Geschwindikeit;

	void bremse(int a) {
		Geschwindikeit -= a;

	}
	void beschleunigen(int a) {
		Geschwindikeit += a;

	}
		
};
int main()
{
	SetConsoleOutputCP(65001);
	Fahradd MTB;
	MTB.Farbe = "Schwarz";
	MTB.Geange = 21;
	MTB.Geschwindikeit = 20;

	cout << MTB.Geschwindikeit << endl;
	MTB.beschleunigen(5);
	cout << "Beschleunigen " << MTB.Geschwindikeit << endl;
	MTB.bremse(25);
	cout << "Bremse " << MTB.Geschwindikeit << endl;
	cout << "Farbe: " << MTB.Farbe << "Anzahl der Gänge" << MTB.Geange << endl;
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.

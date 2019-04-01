#include "pch.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "Agency.h"
#include "Client.h"
#include "Date.h"
#include "Pack.h"

using namespace std;

//CLIENTS OPERATIONS
void newClient(Agency agency) {

	

}
void manageClients(Agency agency) {
	newClient(agency);
}

//PACKAGES OPERATIONS
void newPack(Agency agency) {

	touristPack newPack;
	Date endDate;
	Date beginDate;
	string mainPlace;
	string places;

	const string line = "--------------------------------------------------------";;

	system("cls");

	loadAgencyInfo();

	cout << endl << line << endl << "\tNOVO PACOTE TURISTICO" << endl << line << endl;
	cin.clear();
	cin.ignore();

	cout << "LOCAL PRINCIPAL:";
	getline(cin, mainPlace);
	newPack.places.push_back(mainPlace);

	cout << "LOCAIS A VISITAR:";
	getline(cin, places);


	/*	cout << "DATA DE INICIO (dd/mm/aaaa):";
	cin >> newClient.numPeople;

	cout << "MORADA:" << endl << "\tRUA:";
	cin.clear();
	cin.ignore();
	getline(cin, newClientAddress.street);

	cout << "\tN PORTA:";
	getline(cin, newClientAddress.door);

	cout << "\tANDAR(-):";
	getline(cin, newClientAddress.floor);

	cout << "\tCODIGO POSTAL:";
	getline(cin, newClientAddress.postalCode);

	cout << "\tLOCALIDADE:";
	getline(cin, newClientAddress.location);

	newClient.address = newClientAddress;
	newClient.moneySpent = 0;

	//INSERT IN FILE
	ofstream clientsFile;
	clientsFile.open("clients.txt", std::ios_base::app);
	clientsFile << newClient.name << endl;
	clientsFile << newClient.nif << endl;
	clientsFile << newClient.numPeople << endl;
	clientsFile << newClientAddress.street << " / ";
	clientsFile << newClientAddress.door << " / ";
	clientsFile << newClientAddress.floor << " / ";
	clientsFile << newClientAddress.postalCode << " / ";
	clientsFile << newClientAddress.location << endl;
	clientsFile << ";" << endl;
	clientsFile << 0 << endl;
	clientsFile << "::::::::::" << endl;
	clientsFile.close();
	
	*/
}

void Menu(Agency agency) {

	const string line = "--------------------------------------------------------";

	cout << line << endl;

	int option;
	bool fail = false;

	do {
		fail = false;

		loadAgencyInfo();

		cout << endl << line << endl << "\tMENU" << endl << line << endl;
		cout << "1.GERIR CLIENTES" << setw(20) << "3.GERIR PACOTES" << setw(20) << "5.INFORMACAO" << endl;
		cout << "2.VER CLIENTES" << setw(20) << "4.VER PACOTES" << setw(20) << "6.SAIR" << endl;
		cout << line << endl;

		cout << "SELECIONE UMA OPCAO:";

		cin >> option;

		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			system("cls");
			fail = true;
		}
		else if (option <= 0 || option > 6) {
			system("cls");
			fail = true;
		}
		else
			fail = false;
		 
	} while (fail);

	switch (option)
	{
	case 1:
		manageClients(agency);
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		exit(0);
		break;
	default:
		break;
	}
}

int main()
{
	Agency agency;
	Menu(agency);
}


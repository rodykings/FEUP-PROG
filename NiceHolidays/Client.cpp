#include "pch.h"
#include "Client.h"
#include "Agency.h"

using namespace std;

void newClient() {
	Client newClient;
	Address newClientAddress;

	const string line = "--------------------------------------------------------";;

	system("cls");

	loadAgencyInfo();

	cout << endl << line << endl << "\tNOVO CLIENTE" << endl << line << endl;
	cin.clear();
	cin.ignore();

	cout << "NOME:";
	getline(cin, newClient.name);

	cout << "NIF:";
	getline(cin, newClient.nif);

	cout << "NUMERO PESSOAS AGREGADO FAMILIAR:";
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
}

void updateClient() {

}

void removeClient() {

}


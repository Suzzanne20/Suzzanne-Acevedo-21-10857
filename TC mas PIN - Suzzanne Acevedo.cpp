//Suzzanne Acevedo Morales
//Carnet: 0909-21-10857
//----SERIE 1 - EJERCICIO 2 ----

#include<iostream>
using namespace std;

int main() {
	float cambio, limitdll, limitqtz, reg, saldodol, saldoqtz, salidadol, salidaqtz;
	string concpt, null, otra, pin, pinreg, user;
	int opc, opcm;

	cambio = 7.74;
	pinreg = "2021";
	limitqtz = 5000;
	limitdll = 650;
	null = "S";
	otra = "S";
	reg = 1;
	
	cout << "// Bienvenido a su cuenta de TC //" << endl;
	cout << "  Ingrese sus datos para iniciar" << endl;
	cout << " " << endl;
	cout << "Ingrese su Usuario: ";
	cin >> user;
		do {
		cout << "Ingrese su pin: ";
		cin >> pin;
		cout << " " << endl;
		if (pin!=pinreg) {
			cout << "/ Clave incorrecta" << endl;
		}
	} while (pin!=pinreg);
	while (null=="S" || null=="s") {
		cout << endl;
		cout << " " << endl;
		cout << "* Inicio de sesion correcto *" << endl;
		cout << " " << endl;
		system("cls"); 
		cout << "=============================" << endl;
		cout << "Datos personales de la cuenta" << endl;
		cout << "* Nombre: Suzzanne Acevedo" << endl;
		cout << "* Carnet: 0909-21-10857" << endl;
		cout << "=============================" << endl;
		cout << " " << endl;
		cout << "Que transaccion desea realizar? " << endl;
		cout << " " << endl;
		cout << "1. = Realizar Compra" << endl;
		cout << "2. = Consulta de Saldo" << endl;
		cin >> opc;
		cout << " " << endl;
		system("cls");
		switch (opc) {
		case 1:
			cout << endl;
			cout << ">Registro de compra" << endl;
			cout << " " << endl;
			cout << "Con que moneda se realizara la compra? " << endl;
			cout << " " << endl;
			cout << "3. = Quetzales" << endl;
			cout << "4. = Dolares" << endl;
			cin >> opcm;
			cout << " " << endl;
			switch (opcm) {
			case 3:
				system("cls");
				cout << "MONEDA: Qtz" << endl;
				cout << "Ingrese los registros de compra:" << endl;
				cout << " " << endl;
				saldoqtz = limitqtz-salidaqtz;
				while (otra=="S" || otra=="s") {
					cout << "Registro #" << reg << " Monto  Q. ";
					cin >> salidaqtz;
					saldoqtz = saldoqtz-salidaqtz;
					reg = reg+1;
					if (salidaqtz<=limitqtz && saldoqtz>=0) {
						cout << "!! Compra exitosa !!" << endl;
						cout << "Saldo Q." << saldoqtz << endl;
						cout << " " << endl;
					} else {
						cout << "( / )No es posible realizar la compra" << endl;
						cout << "Saldo insuficiente para efectuar esta transacción" << endl;
					}
					cout << ">Ingresar otra Compra? S/N ";
					cin >> otra;
					cout << " " << endl;
				}
				break;
			case 4:
				system("cls");
				cout << "MONEDA: Dlls" << endl;
				cout << "Ingrese los registros de compra:" << endl;
				cout << " " << endl;
				saldodol = limitdll-salidadol;
				while (otra=="S" || otra=="s") {
					cout << "Registro #" << reg << " Monto  $. ";
					cin >> salidadol;
					saldodol = saldodol-salidadol;
					reg = reg+1;
					if (salidadol<=limitdll && saldodol>=0) {
						cout << "!! Compra exitosa !!" << endl;
						cout << "Saldo $." << saldodol << endl;
						cout << " " << endl;
					} else {
						cout << "( / )No es posible realizar la compra" << endl;
						cout << "Saldo insuficiente para efectuar esta transacción" << endl;
					}
					cout << ">Ingresar otra Compra? S/N ";
					cin >> otra;
					cout << " " << endl;
				}
				break;
			default:
				cout << opcm << " No es una opción válida" << endl;
			}
			break;
		case 2:
			cout << endl;
			cout << "Saldo de la cuenta:" << endl;
			cout << " " << endl;
			saldoqtz = limitqtz-salidaqtz;
			saldodol = limitdll-salidadol;
			cout << "=========================" << endl;
			cout << "- Quetzales:  Q." << saldoqtz << endl;
			cout << "- Dolares:     $." << saldodol << endl;
			cout << "=========================" << endl;
			break;
		default:
			cout << opc << " No es una opcion valida" << endl;
		}
		cout << " " << endl;
		cout << ">> Realizar otra Transaccion? S/N ";
		cin >> null;
	}
	return 0;
}
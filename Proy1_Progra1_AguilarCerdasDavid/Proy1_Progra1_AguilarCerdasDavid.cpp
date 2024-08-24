#include <iostream>
using namespace std;

class CinemaFuncion {
private:
	int seats[112];
	int timeHour;
	int timeMinute;
	string name;
public:
	CinemaFuncion(){}
	CinemaFuncion(int hour, int minute, string nameF){
		for (int i = 0; i < 112; i++){
			seats[i] = 0;
		}
		timeHour = hour;
		timeMinute = minute;
		name = nameF;
	}
	void occupiedSeats() {
		char available = 36, busy = 157, reserved = 207, e1 = 218, e2 = 191, e3 = 192, e4 = 217, v = 179, h = 196, t = 194, x = 197, hDer = 195, hIz = 180, tr = 193, p = 178;

		cout << "Disponible: " << available << "  Reservado: " << reserved << "  Ocupado: " << busy << endl;

		cout << e1 << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << e2 << endl;
		cout << v << 112 << available << v << 111 << available << v << 110 << available << v << 109 << available << v << 108 << available << v << 107 << available << v << 106 << available << v << 105 << available << v << 104 << available << v << 103 << available << v << p << p << p << v << 102 << available << v << 101 << available << v << 100 << available << v << " " << 99 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 98 << available << v << " " << 97 << available << v << " " << 96 << available << v << " " << 95 << available << v << " " << 94 << available << v << " " << 93 << available << v << " " << 92 << available << v << " " << 91 << available << v << " " << 90 << available << v << " " << 89 << available << v << p << p << p << v << " " << 88 << available << v << " " << 87 << available << v << " " << 86 << available << v << " " << 85 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 84 << available << v << " " << 83 << available << v << " " << 82 << available << v << " " << 81 << available << v << " " << 80 << available << v << " " << 79 << available << v << " " << 78 << available << v << " " << 77 << available << v << " " << 76 << available << v << " " << 75 << available << v << p << p << p << v << " " << 74 << available << v << " " << 73 << available << v << " " << 72 << available << v << " " << 71 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 70 << available << v << " " << 69 << available << v << " " << 68 << available << v << " " << 67 << available << v << " " << 66 << available << v << " " << 65 << available << v << " " << 64 << available << v << " " << 63 << available << v << " " << 62 << available << v << " " << 61 << available << v << p << p << p << v << " " << 60 << available << v << " " << 59 << available << v << " " << 58 << available << v << " " << 57 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 56 << available << v << " " << 55 << available << v << " " << 54 << available << v << " " << 53 << available << v << " " << 52 << available << v << " " << 51 << available << v << " " << 50 << available << v << " " << 49 << available << v << " " << 48 << available << v << " " << 47 << available << v << p << p << p << v << " " << 46 << available << v << " " << 45 << available << v << " " << 44 << available << v << " " << 43 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 42 << available << v << " " << 41 << available << v << " " << 40 << available << v << " " << 39 << available << v << " " << 38 << available << v << " " << 37 << available << v << " " << 36 << available << v << " " << 35 << available << v << " " << 34 << available << v << " " << 33 << available << v << p << p << p << v << " " << 32 << available << v << " " << 31 << available << v << " " << 30 << available << v << " " << 30 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 28 << available << v << " " << 27 << available << v << " " << 26 << available << v << " " << 25 << available << v << " " << 24 << available << v << " " << 23 << available << v << " " << 22 << available << v << " " << 21 << available << v << " " << 20 << available << v << " " << 19 << available << v << p << p << p << v << " " << 18 << available << v << " " << 17 << available << v << " " << 16 << available << v << " " << 15 << available << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 14 << available << v << " " << 13 << available << v << " " << 12 << available << v << " " << 11 << available << v << " " << 10 << available << v << " " << " " << 9 << available << v << " " << " " << 8 << available << v << " " << " " << 7 << available << v << " " << " " << 6 << available << v << " " << " " << 5 << available << v << p << p << p << v << " " << " " << 4 << available << v << " " << " " << 3 << available << v << " " << " " << 2 << available << v << " " << " " << 1 << available << v << endl;
		cout << e3 << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << tr << h << h << h << h << h << e4 << endl;


	}
};

void menu(){
	cout << "Estas en el menu pricipal" << endl << endl;
	cout << "	a. Archivo" << endl;
	cout << "	   1. Acerca de" << endl;
	cout << "	   2. Salir" << endl;
	cout << "	b. Mantenimiento" << endl;
	cout << "	   3. Peliculas" << endl;
	cout << "	   4. Salas" << endl;
	cout << "	   5. Horarios" << endl;
	cout << "	c. Reserva" << endl;
	cout << "	   6. Peliculas" << endl;
	cout << "	d. Ventas" << endl;
	cout << "	   7. Peliculas" << endl << endl;

	cout << "Digite el numero de la opcion que quieres hacer" << endl;
}

void about() {
	int next;
	cout << "Programa desarrollado por" << endl << endl << "	David Aguilar Cerdas" << endl << endl;
	cout << "Digite cualquier numero para continuar" << endl << endl;
	cin >> next;
	cout << endl << endl;
}

void sala() {
	char available = 36, busy = 157, reserved = 207, e1 = 218, e2 = 191, e3 = 192, e4 = 217, v = 179, h = 196, t = 194, x = 197, hDer = 195, hIz = 180, tr = 193, p = 178;

	cout << "Disponible: " << available << "  Reservado: " << reserved << "  Ocupado: " << busy << endl;

	cout << e1 << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << e2 << endl;
	cout << v << 112 << available << v << 111 << available << v << 110 << available << v << 109 << available << v << 108 << available << v << 107 << available << v << 106 << available << v << 105 << available << v << 104 << available << v << 103 << available << v << p << p << p << v << 102 << available << v << 101 << available << v << 100 << available << v << " " << 99 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 98 << available << v << " " << 97 << available << v << " " << 96 << available << v << " " << 95 << available << v << " " << 94 << available << v << " " << 93 << available << v << " " << 92 << available << v << " " << 91 << available << v << " " << 90 << available << v << " " << 89 << available << v << p << p << p << v << " " << 88 << available << v << " " << 87 << available << v << " " << 86 << available << v << " " << 85 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 84 << available << v << " " << 83 << available << v << " " << 82 << available << v << " " << 81 << available << v << " " << 80 << available << v << " " << 79 << available << v << " " << 78 << available << v << " " << 77 << available << v << " " << 76 << available << v << " " << 75 << available << v << p << p << p << v << " " << 74 << available << v << " " << 73 << available << v << " " << 72 << available << v << " " << 71 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 70 << available << v << " " << 69 << available << v << " " << 68 << available << v << " " << 67 << available << v << " " << 66 << available << v << " " << 65 << available << v << " " << 64 << available << v << " " << 63 << available << v << " " << 62 << available << v << " " << 61 << available << v << p << p << p << v << " " << 60 << available << v << " " << 59 << available << v << " " << 58 << available << v << " " << 57 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 56 << available << v << " " << 55 << available << v << " " << 54 << available << v << " " << 53 << available << v << " " << 52 << available << v << " " << 51 << available << v << " " << 50 << available << v << " " << 49 << available << v << " " << 48 << available << v << " " << 47 << available << v << p << p << p << v << " " << 46 << available << v << " " << 45 << available << v << " " << 44 << available << v << " " << 43 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 42 << available << v << " " << 41 << available << v << " " << 40 << available << v << " " << 39 << available << v << " " << 38 << available << v << " " << 37 << available << v << " " << 36 << available << v << " " << 35 << available << v << " " << 34 << available << v << " " << 33 << available << v << p << p << p << v << " " << 32 << available << v << " " << 31 << available << v << " " << 30 << available << v << " " << 30 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 28 << available << v << " " << 27 << available << v << " " << 26 << available << v << " " << 25 << available << v << " " << 24 << available << v << " " << 23 << available << v << " " << 22 << available << v << " " << 21 << available << v << " " << 20 << available << v << " " << 19 << available << v << p << p << p << v << " " << 18 << available << v << " " << 17 << available << v << " " << 16 << available << v << " " << 15 << available << v << endl;
	cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
	cout << v << " " << 14 << available << v << " " << 13 << available << v << " " << 12 << available << v << " " << 11 << available << v << " " << 10 << available << v << " " << " " << 9 << available << v << " " << " " << 8 << available << v << " " << " " << 7 << available << v << " " << " " << 6 << available << v << " " << " " << 5 << available << v << p << p << p << v << " " << " " << 4 << available << v << " " << " " << 3 << available << v << " " << " " << 2 << available << v << " " << " " << 1 << available << v << endl;
	cout << e3 << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << tr << h << h << h << h << h << e4 << endl;




}

int main(){
	int end = 0, option=0;
    cout << "Bienvenido a NUEVA CINEMA SA" << endl << endl;
	
	do{
		menu();
		cin >> option;
		cout << endl << endl;

		switch (option) {
		case 1:
			about();
			break;
		case 2:
			end = 1;
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		}
	} while (end==0);

	cout << "Muchas Gracias Por visitarnos" << endl;
}
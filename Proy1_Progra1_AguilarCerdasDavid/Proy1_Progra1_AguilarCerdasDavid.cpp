#include <iostream>
#include <time.h>

using namespace std;

class CinemaFuncion {
private:
	int seats[112];
	int year;
	int duration;
	int price;
	int roomNumber;
	int starTime;
	int endTime;
	int dateDay;
	int dateMonth;
	int dateYear;
	string name;
	string country;
	string review;

public:
	CinemaFuncion(){
		for (int i = 0; i < 112; i++) {
			seats[i] = 0;
		}
		year = 0;
		duration = 0;
		price = 0;
		roomNumber = 0;
		starTime = 0;
		endTime = 0;
		dateDay = 0;
		dateMonth = 0;
		dateYear = 0;
		name = "null";
		country = "null";
		review = "null";
	}

	CinemaFuncion(int year1, int duration1, int price1, int roomNumber1, int starTime1, int endTime1, int dateDay1, int dateMonth1, int dateYear1, string name1, string country1, string review1) {
		for (int i = 0; i < 112; i++){
			seats[i] = 0;
		}
		year = year1;
		duration = duration1;
		price = price1;
		roomNumber = roomNumber1;
		starTime = starTime1;
		endTime = endTime1;
		dateDay = dateDay1;
		dateMonth = dateMonth1;
		dateYear = dateYear1;
		name = name1;
		country = country1;
		review = review1;
	}

	~CinemaFuncion(){}

	void setYear(int y) {
		year = y;
	}

	void setDuration(int y) {
		duration = y;
	}

	void setPrice(int y) {
		price = y;
	}

	void setRoomNumber(int y) {
		roomNumber = y;
	}

	void setStarTime(int y) {
		starTime = y;
	}

	void setEndTime(int y) {
		endTime = y;
	}

	void setDateDay(int y) {
		dateDay = y;
	}

	void setDateMonth(int y) {
		dateMonth = y;
	}

	void setDateYear(int y) {
		dateYear = y;
	}

	void setName(string y) {
		name = y;
	}

	void setCountry(string y) {
		country = y;
	}

	void setReview(string y) {
		review = y;
	}

	void setSeats(int y, int n) {
		seats[y] = n;
	}

	int getYear() {
		return year;
	}

	int getDuration() {
		return duration;
	}

	int getPrice() {
		return price;
	}

	int getRoomNumber() {
		return roomNumber;
	}

	int getStarTime() {
		return starTime;
	}

	int getEndTime() {
		return endTime;
	}

	int getDateDay() {
		return dateDay;
	}

	int getDateMonth() {
		return dateMonth;
	}

	int getDateYear() {
		return dateYear;
	}

	int getSeats(int n) {
		return seats[n - 1];
	}

	string getName() {
		return name;
	}

	string getCountry() {
		return country;
	}

	string getReview() {
		return review;
	}

	string getmovieName() {
		return name;
	}

	void dateFuncion() {
		if (dateDay <= 9)
			cout << "0";
		cout << dateDay << "/";
		if (dateMonth <= 9)
			cout << "0";
		cout << dateMonth << "/" << dateYear << "A las " << starTime << endl;
	}

	void reservationSeat(int n) {
		seats[n - 1] = 1;
	}

	void buySeat(int n) {
		seats[n - 1] = 2;
	}

	char occupiedSeats(int seat){
		char available = 36, busy = 157, reserved = 207;
		if (seats[seat] == 0)
			return available;
		else if (seats[seat] == 1)
			return reserved;
		else if (seats[seat] == 2)
			return busy;
	}

	void movieTheater() {
		char available = 36, busy = 157, reserved = 207, e1 = 218, e2 = 191, e3 = 192, e4 = 217, v = 179, h = 196, t = 194, x = 197, hDer = 195, hIz = 180, tr = 193, p = 178;

		cout << "Disponible: " << available << "  Reservado: " << reserved << "  Ocupado: " << busy << endl;

		cout << e1 << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << t << h << h << h << h << e2 << endl;
		cout << v << 112 << occupiedSeats(111) << v << 111 << occupiedSeats(110) << v << 110 << occupiedSeats(109) << v << 109 << occupiedSeats(108) << v << 108 << occupiedSeats(107) << v << 107 << occupiedSeats(106) << v << 106 << occupiedSeats(105) << v << 105 << occupiedSeats(104) << v << 104 << occupiedSeats(103) << v << 103 << occupiedSeats(102) << v << p << p << p << v << 102 << occupiedSeats(101) << v << 101 << occupiedSeats(100) << v << 100 << occupiedSeats(99) << v << " " << 99 << occupiedSeats(98) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 98 << occupiedSeats(97) << v << " " << 97 << occupiedSeats(96) << v << " " << 96 << occupiedSeats(95) << v << " " << 95 << occupiedSeats(94) << v << " " << 94 << occupiedSeats(93) << v << " " << 93 << occupiedSeats(92) << v << " " << 92 << occupiedSeats(91) << v << " " << 91 << occupiedSeats(90) << v << " " << 90 << occupiedSeats(89) << v << " " << 89 << occupiedSeats(88) << v << p << p << p << v << " " << 88 << occupiedSeats(87) << v << " " << 87 << occupiedSeats(86) << v << " " << 86 << occupiedSeats(85) << v << " " << 85 << occupiedSeats(84) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 84 << occupiedSeats(83) << v << " " << 83 << occupiedSeats(82) << v << " " << 82 << occupiedSeats(81) << v << " " << 81 << occupiedSeats(80) << v << " " << 80 << occupiedSeats(79) << v << " " << 79 << occupiedSeats(78) << v << " " << 78 << occupiedSeats(77) << v << " " << 77 << occupiedSeats(76) << v << " " << 76 << occupiedSeats(75) << v << " " << 75 << occupiedSeats(74) << v << p << p << p << v << " " << 74 << occupiedSeats(73) << v << " " << 73 << occupiedSeats(72) << v << " " << 72 << occupiedSeats(71) << v << " " << 71 << occupiedSeats(70) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 70 << occupiedSeats(69) << v << " " << 69 << occupiedSeats(68) << v << " " << 68 << occupiedSeats(67) << v << " " << 67 << occupiedSeats(66) << v << " " << 66 << occupiedSeats(65) << v << " " << 65 << occupiedSeats(64) << v << " " << 64 << occupiedSeats(63) << v << " " << 63 << occupiedSeats(62) << v << " " << 62 << occupiedSeats(61) << v << " " << 61 << occupiedSeats(60) << v << p << p << p << v << " " << 60 << occupiedSeats(59) << v << " " << 59 << occupiedSeats(58) << v << " " << 58 << occupiedSeats(57) << v << " " << 57 << occupiedSeats(56) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 56 << occupiedSeats(55) << v << " " << 55 << occupiedSeats(54) << v << " " << 54 << occupiedSeats(53) << v << " " << 53 << occupiedSeats(52) << v << " " << 52 << occupiedSeats(51) << v << " " << 51 << occupiedSeats(50) << v << " " << 50 << occupiedSeats(49) << v << " " << 49 << occupiedSeats(48) << v << " " << 48 << occupiedSeats(47) << v << " " << 47 << occupiedSeats(46) << v << p << p << p << v << " " << 46 << occupiedSeats(45) << v << " " << 45 << occupiedSeats(44) << v << " " << 44 << occupiedSeats(43) << v << " " << 43 << occupiedSeats(42) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 42 << occupiedSeats(41) << v << " " << 41 << occupiedSeats(40) << v << " " << 40 << occupiedSeats(39) << v << " " << 39 << occupiedSeats(38) << v << " " << 38 << occupiedSeats(37) << v << " " << 37 << occupiedSeats(36) << v << " " << 36 << occupiedSeats(35) << v << " " << 35 << occupiedSeats(34) << v << " " << 34 << occupiedSeats(33) << v << " " << 33 << occupiedSeats(32) << v << p << p << p << v << " " << 32 << occupiedSeats(31) << v << " " << 31 << occupiedSeats(30) << v << " " << 30 << occupiedSeats(29) << v << " " << 30 << occupiedSeats(29) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 28 << occupiedSeats(27) << v << " " << 27 << occupiedSeats(26) << v << " " << 26 << occupiedSeats(25) << v << " " << 25 << occupiedSeats(24) << v << " " << 24 << occupiedSeats(23) << v << " " << 23 << occupiedSeats(22) << v << " " << 22 << occupiedSeats(21) << v << " " << 21 << occupiedSeats(20) << v << " " << 20 << occupiedSeats(19) << v << " " << 19 << occupiedSeats(18) << v << p << p << p << v << " " << 18 << occupiedSeats(17) << v << " " << 17 << occupiedSeats(16) << v << " " << 16 << occupiedSeats(15) << v << " " << 15 << occupiedSeats(14) << v << endl;
		cout << hDer << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << x << h << h << h << h << hIz << endl;
		cout << v << " " << 14 << occupiedSeats(13) << v << " " << 13 << occupiedSeats(12) << v << " " << 12 << occupiedSeats(11) << v << " " << 11 << occupiedSeats(10) << v << " " << 10 << occupiedSeats(9) << v << " " << " " << 9 << occupiedSeats(8) << v << " " << " " << 8 << occupiedSeats(7) << v << " " << " " << 7 << occupiedSeats(6) << v << " " << " " << 6 << occupiedSeats(5) << v << " " << " " << 5 << occupiedSeats(4) << v << p << p << p << v << " " << " " << 4 << occupiedSeats(3) << v << " " << " " << 3 << occupiedSeats(2) << v << " " << " " << 2 << occupiedSeats(1) << v << " " << " " << 1 << occupiedSeats(0) << v << endl;
		cout << e3 << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << tr << h << h << h << h << tr << h << h << h << h << tr << h << h << h << tr << h << h << h << h << h << e4 << endl;


	}
};

class Reservation {
private:
	int numberTicket = 0;
	int seats[112];
	int totalPrice = 0;

public:
	Reservation(){
		for (int i = 0; i < 112; i++) {
			seats[i] = 0;
		}
	}
	Reservation(int nt){
		numberTicket = nt;
		for (int i = 0; i < 112; i++) {
			seats[i] = 0;
		}
	}
	~Reservation(){}
	void setNumberTicket(int n) {
		numberTicket = n;
	}
	void setTotalPrice(int n) {
		totalPrice = n;
	}
	int getNumberTicket() {
		return numberTicket;
	}
	int getTotalPrice() {
		return totalPrice;
	}
	void getSeats() {
		for (int i = 0; i < 112; i++) {
			if (seats[i] > 0) {
				cout << seats[i] << "  ";
			}
		}
	}
	void seatsReservation(int numberSeats, int butacas[112], int price) {
		butacas = seats;
		totalPrice = numberSeats * price;
		cout << "Su numero de consecutivo es: " << numberTicket << endl;
		cout << "Las butacas reservadas son: ";
		for (int i = 0; i < 112; i++) {
			if (butacas[i] > 0) {
				cout << butacas[i] << "  " << endl;
			}
		}
		cout << "El monto total a pagar es de: " << totalPrice << " colones" << endl;
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
	cout << "Programa desarrollado por" << endl << endl;
	cout << "	David Aguilar Cerdas" << endl;
	cout << "        Programacion 1" << endl;
	cout << "        Grupo: 80" << endl;
	cout << "        2024" << endl << endl;
	cout << "Digite cualquier numero para continuar" << endl << endl;
	cin >> next;
	cout << endl << endl;
}

int main(){
	int end = 0, option = 0, optionMovie = 0, optionModifier = 0;
	string nameModifier;

	CinemaFuncion movie1;
	CinemaFuncion movie2;
	CinemaFuncion movie3;
	Reservation reservationCinema1;
	Reservation reservationCinema2;
	Reservation reservationCinema3;

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
		case 3: {
			cout << "Que pelicula quieres modifical?" << endl;
			cout << "Pelicula 1: " << movie1.getmovieName() << endl;
			cout << "Pelicula 2: " << movie2.getmovieName() << endl;
			cout << "Pelicula 3: " << movie3.getmovieName() << endl;
			cin >> optionMovie;

			if (optionMovie == 1) {
				cout << "Escribe el nombre: " << endl;
				cin >> nameModifier;
				movie1.setName(nameModifier);

				cout << "Escribe el pais de donde es la pelicula: " << endl;
				cin >> nameModifier;
				movie1.setCountry(nameModifier);

				cout << "Escribe el año: " << endl;
				cin >> optionModifier;
				movie1.setYear(optionModifier);

				cout << "Escribe la duracion en minutos: " << endl;
				cin >> optionModifier;
				movie1.setDuration(optionModifier);

				cout << "Escribe una reseña de la pelicula: " << endl;
				cin >> nameModifier;
				movie1.setReview(nameModifier);
			}
			else if (optionMovie == 2) {
				cout << "Escribe el nombre: " << endl;
				cin >> nameModifier;
				movie2.setName(nameModifier);

				cout << "Escribe el pais de donde es la pelicula: " << endl;
				cin >> nameModifier;
				movie2.setCountry(nameModifier);

				cout << "Escribe el año: " << endl;
				cin >> optionModifier;
				movie2.setYear(optionModifier);

				cout << "Escribe la duracion en minutos: " << endl;
				cin >> optionModifier;
				movie2.setDuration(optionModifier);

				cout << "Escribe una reseña de la pelicula: " << endl;
				cin >> nameModifier;
				movie2.setReview(nameModifier);
			}
			else if (optionMovie == 3) {
				cout << "Escribe el nombre: " << endl;
				cin >> nameModifier;
				movie3.setName(nameModifier);

				cout << "Escribe el pais de donde es la pelicula: " << endl;
				cin >> nameModifier;
				movie3.setCountry(nameModifier);

				cout << "Escribe el año: " << endl;
				cin >> optionModifier;
				movie3.setYear(optionModifier);

				cout << "Escribe la duracion en minutos: " << endl;
				cin >> optionModifier;
				movie3.setDuration(optionModifier);

				cout << "Escribe una reseña de la pelicula: " << endl;
				cin >> nameModifier;
				movie3.setReview(nameModifier);
			}
		}
			break;
		case 4: {
			cout << "Que pelicula quieres modifical?" << endl;
			cout << "Pelicula 1: " << movie1.getmovieName() << endl;
			cout << "Pelicula 2: " << movie2.getmovieName() << endl;
			cout << "Pelicula 3: " << movie3.getmovieName() << endl;
			cin >> optionMovie;

			if (optionMovie == 1) {
				cout << "Escribe el precio en colones: " << endl;
				cin >> optionModifier;
				movie1.setPrice(optionModifier);

				cout << "Escribe el numero de sala: " << endl;
				cin >> optionModifier;
				movie1.setRoomNumber(optionModifier);
			}
			else if (optionMovie == 2) {
				cout << "Escribe el precio en colones: " << endl;
				cin >> optionModifier;
				movie2.setPrice(optionModifier);

				cout << "Escribe el numero de sala: " << endl;
				cin >> optionModifier;
				movie2.setRoomNumber(optionModifier);
			}
			else if (optionMovie == 3) {
				cout << "Escribe el precio en colones: " << endl;
				cin >> optionModifier;
				movie3.setPrice(optionModifier);

				cout << "Escribe el numero de sala: " << endl;
				cin >> optionModifier;
				movie3.setRoomNumber(optionModifier);
			}
		}
			break;
		case 5: {
			cout << "Que pelicula quieres modifical?" << endl;
			cout << "Pelicula 1: " << movie1.getmovieName() << endl;
			cout << "Pelicula 2: " << movie2.getmovieName() << endl;
			cout << "Pelicula 3: " << movie3.getmovieName() << endl;
			cin >> optionMovie;

			if (optionMovie == 1) {
				cout << "Escribe el la fecha de la funcion: " << endl;
				cout << "Año" << endl;
				cin >> optionModifier;
				movie1.setDateYear(optionModifier);
				cout << "Mes" << endl;
				cin >> optionModifier;
				movie1.setDateMonth(optionModifier);
				cout << "Dia" << endl;
				cin >> optionModifier;
				movie1.setDateDay(optionModifier);

				cout << "Escribe el la hora de inicio: " << endl;
				cin >> optionModifier;
				movie1.setStarTime(optionModifier);

				cout << "Escribe la hora en que finaliza: " << endl;
				cin >> optionModifier;
				movie1.setEndTime(optionModifier);
			}
			else if (optionMovie == 2) {
				cout << "Escribe el la fecha de la funcion: " << endl;
				cout << "Año" << endl;
				cin >> optionModifier;
				movie2.setDateYear(optionModifier);
				cout << "Mes" << endl;
				cin >> optionModifier;
				movie2.setDateMonth(optionModifier);
				cout << "Dia" << endl;
				cin >> optionModifier;
				movie2.setDateDay(optionModifier);

				cout << "Escribe el la hora de inicio: " << endl;
				cin >> optionModifier;
				movie2.setStarTime(optionModifier);

				cout << "Escribe la hora en que finaliza: " << endl;
				cin >> optionModifier;
				movie2.setEndTime(optionModifier);
			}
			else if (optionMovie == 3) {
				cout << "Escribe el la fecha de la funcion: " << endl;
				cout << "Año" << endl;
				cin >> optionModifier;
				movie3.setDateYear(optionModifier);
				cout << "Mes" << endl;
				cin >> optionModifier;
				movie3.setDateMonth(optionModifier);
				cout << "Dia" << endl;
				cin >> optionModifier;
				movie3.setDateDay(optionModifier);

				cout << "Escribe el la hora de inicio: " << endl;
				cin >> optionModifier;
				movie3.setStarTime(optionModifier);

				cout << "Escribe la hora en que finaliza: " << endl;
				cin >> optionModifier;
				movie3.setEndTime(optionModifier);
			}
		}
			break;
		case 6:{
			int reservationOption = 0, seats = 0, butacas[112], numberSeat = 0;

			cout << "Estas en la seccion de reserva " << endl << "En que pelicula quieres reservar?" << endl;
			cout << "Opcion 1: " << endl;
			cout << movie1.getName() << endl;
			movie1.dateFuncion();
			cout << "El numero de sala: " << movie1.getRoomNumber() << endl << endl;

			cout << "Opcion 2: " << endl;
			cout << movie2.getName() << endl;
			movie2.dateFuncion();
			cout << "El numero de sala: " << movie2.getRoomNumber() << endl << endl;

			cout << "Opcion 3: " << endl;
			cout << movie3.getName() << endl;
			movie3.dateFuncion();
			cout << "El numero de sala: " << movie3.getRoomNumber() << endl << endl;
			cin >> reservationOption;

			if (reservationOption == 1) {
				cout << "Estos las butacas disponibles" << endl;
				movie1.movieTheater();
				cout << endl << "Cuantas butacas ocupas? " << endl;
				cin >> seats;
				for (int i = 0; i < seats; i++) {
					cout << "Que numero de butaca ocupas?" << endl;
					cin >> numberSeat;
					butacas[i] = numberSeat;
					if (movie1.getSeats(numberSeat) == 1) {
						cout << "Este haciento ya esta reservado, elige otro" << endl;
					}
					else if (movie1.getSeats(numberSeat) == 2) {
						cout << "Este haciento ya esta comprado, elige otro" << endl;
					}
					else
						movie1.reservationSeat(numberSeat);
				}
				reservationCinema1.setNumberTicket(time(0));
				reservationCinema1.seatsReservation(seats, butacas, movie1.getPrice());
				cout << "Reservacion finalizada, ve a la opcion de ventas para finalizar la compra" << endl;
			}
			else if (reservationOption == 2) {
				cout << "Estos las butacas disponibles" << endl;
				movie2.movieTheater();
				cout << endl << "Cuantas butacas ocupas? " << endl;
				cin >> seats;
				for (int i = 0; i < seats; i++) {
					cout << "Que numero de butaca ocupas?" << endl;
					cin >> numberSeat;
					butacas[i] = numberSeat;
					if (movie2.getSeats(numberSeat) == 1) {
						cout << "Este haciento ya esta reservado, elige otro" << endl;
					}
					else if (movie2.getSeats(numberSeat) == 2) {
						cout << "Este haciento ya esta comprado, elige otro" << endl;
					}
					else
						movie2.reservationSeat(numberSeat);
				}
				reservationCinema2.setNumberTicket(time(0));
				reservationCinema2.seatsReservation(seats, butacas, movie2.getPrice());
				cout << "Reservacion finalizada, ve a la opcion de ventas para finalizar la compra" << endl;
			}
			else if (reservationOption == 3) {
				cout << "Estos las butacas disponibles" << endl;
				movie3.movieTheater();
				cout << endl << "Cuantas butacas ocupas? " << endl;
				cin >> seats;
				for (int i = 0; i < seats; i++) {
					cout << "Que numero de butaca ocupas?" << endl;
					cin >> numberSeat;
					butacas[i] = numberSeat;
					if (movie3.getSeats(numberSeat) == 1) {
						cout << "Este haciento ya esta reservado, elige otro" << endl;
					}
					else if (movie3.getSeats(numberSeat) == 2) {
						cout << "Este haciento ya esta comprado, elige otro" << endl;
					}
					else
						movie3.reservationSeat(numberSeat);
				}
				reservationCinema3.setNumberTicket(time(0));
				reservationCinema3.seatsReservation(seats, butacas, movie3.getPrice());
				cout << "Reservacion finalizada, ve a la opcion de ventas para finalizar la compra" << endl;
			}
			}
			break;
		case 7:{
			int consecuitivo = 0, id = 0, cardNumber = 0;
			cout << "Esta es la seccion de ventas, digite su numero de consecutivo" << endl;
			cin >> consecuitivo;
			if (consecuitivo == reservationCinema1.getNumberTicket()) {
				cout << "Pelicula: " << movie1.getName() << endl;
				cout << "Precio a pagar: " << reservationCinema1.getTotalPrice() << " colones" << endl;
				cout << "Digite su cedula para proceder con el pago" << endl;
				cin >> id;
				cout << "Digite el numero de su tarjeta para proceder con el pago, tienen que ser 8 numeros" << endl;
				cin >> cardNumber;
				for (int i = 0; i < 112; i++) {
					if (movie1.getSeats(i) == 1) {
						movie1.setSeats(i, 2);
					}
				}
				cout << endl << "Factura" << endl << endl;
				cout << "Pelicula: " << movie1.getName() << endl;
				movie1.dateFuncion();
				cout << endl << movie1.getRoomNumber() << endl;
				cout << movie1.getReview() << endl;
				cout << "Asientos: ";
				reservationCinema1.getSeats();
				cout << "Cliente: " << id << endl << endl;
				cout << "****Gracias por su visita a NUEVA CINEMA SA****" << endl << endl;

			}
			else if (consecuitivo == reservationCinema2.getNumberTicket()) {
				cout << "Pelicula: " << movie2.getName() << endl;
				cout << "Precio a pagar: " << reservationCinema2.getTotalPrice() << " colones" << endl;
				cout << "Digite su cedula para proceder con el pago" << endl;
				cin >> id;
				cout << "Digite el numero de su tarjeta para proceder con el pago, tienen que ser 8 numeros" << endl;
				cin >> cardNumber;
				for (int i = 0; i < 112; i++) {
					if (movie2.getSeats(i) == 1) {
						movie2.setSeats(i, 2);
					}
				}
				cout << endl << "Factura" << endl << endl;
				cout << "Pelicula: " << movie2.getName() << endl;
				movie2.dateFuncion();
				cout << endl << movie2.getRoomNumber() << endl;
				cout << movie2.getReview() << endl;
				cout << "Asientos: ";
				reservationCinema2.getSeats();
				cout << "Cliente: " << id << endl << endl;
				cout << "****Gracias por su visita a NUEVA CINEMA SA****" << endl << endl;
			}
			else if (consecuitivo == reservationCinema3.getNumberTicket()) {
				cout << "Pelicula: " << movie3.getName() << endl;
				cout << "Precio a pagar: " << reservationCinema3.getTotalPrice() << " colones" << endl;
				cout << "Digite su cedula para proceder con el pago" << endl;
				cin >> id;
				cout << "Digite el numero de su tarjeta para proceder con el pago, tienen que ser 8 numeros" << endl;
				cin >> cardNumber;
				for (int i = 0; i < 112; i++) {
					if (movie3.getSeats(i) == 1) {
						movie3.setSeats(i, 2);
					}
				}
				cout << endl << "Factura" << endl << endl;
				cout << "Pelicula: " << movie3.getName() << endl;
				movie3.dateFuncion();
				cout << endl << movie3.getRoomNumber() << endl;
				cout << movie3.getReview() << endl;
				cout << "Asientos: ";
				reservationCinema3.getSeats();
				cout << "Cliente: " << id << endl << endl;
				cout << "****Gracias por su visita a NUEVA CINEMA SA****" << endl << endl;
			}
			else {
				cout << "Numero de consecuitivo invalido" << endl << endl;
			}		
			}
			break;
		}
	} while (end==0);

	cout << "Muchas Gracias Por visitarnos" << endl;

	return 0;
}
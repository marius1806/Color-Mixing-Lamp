/*
  Acest program a fost scris pentru a crea o lampa rgb bazata pe senzori de lumina (fototranzistori).
  Principiul programului este ca in functie de directia din care bate lumina, lampa va avea un amestec
  de culori rgb (rosu, verde, albastru). In functie si de intensitatea luminii, lampa va lumina mai 
  tare sau mai incet sau chiar deloc daca nu exista o sursa de lumina. Montajul este alcatuit din 3
  fototranzistori, fiecare fiind acoperit cu cate o folie de gel rosie, verde si albastra, avand acces 
  la fiecare senzor doar raze de lumina cu lungime de unda corespunzatoare, fiecare avand in serie cate 
  un rezistor de 10 Kohm (5Kohmi este minimul de care are nevoie un fototranzistor)si de asemenea am 
  folosit un led rgb pe post de lampa, avand la fiecare pin cate un rezistor de 560 ohmi,si fiind 
  conectat la 3 pini PWM (Pulse Width Modulation) deoarece cu ei pot transmite valori analogice pentru 
  curent de la 0 la 255 de unitati in loc de valorile digitale LOW SI HIGH, facand posibil efectul de 
  "fade" al luminii lampei, datorat vitezei foarte mari a inchiderii si redeschiderii elementului de la
  o valoare a curentului la alta, pentru ochiul uman fiind imposibila acea sesizare.
*/

class Phototransistor
{
  int sensorPin;
public:
  Phototransistor();
  Phototransistor(const int);

  int sensorValue();
};

class LED
{
  int redLEDPin;
  int greenLEDPin;
  int blueLEDPin;
public:
  LED();
  LED(const int, const int, const int);

  int value(const Phototransistor &);
  int getRedLEDPin();
  int getGreenLEDPin();
  int getBlueLEDPin();
};

Phototransistor redPhototransistor(A0), greenPhototransistor(A1), bluePhototransistor(A2);

LED rgb(11, 9, 10);

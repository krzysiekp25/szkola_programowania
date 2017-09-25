#pragma once
class Lista
{
private:
	enum {MAX = 10}; //stala wyliczeniowa oznaczajaca maksymalna ilosc elementow
	int elementy[MAX]; //lista elementow
	int elem; //ilosc elementow
public:
	Lista(); //Pusta lista
	bool dodaj(const int & elem);//dodaje kolejny element do listy, jesli jest miejsce zwraca prawde, jak brak miejsca zwraca falsz 
	bool usun(); //usuwa element z listy, prawda jesli usunie, falsz jesli brak elementow
	bool pusta(); // zwraca prawde jak pusta
	bool pelna(); //zwraca prawde jak pelna
	void odwiedz();//odwiedzimy kolejne elementy listy i w miare potrzeby edytujemy
};
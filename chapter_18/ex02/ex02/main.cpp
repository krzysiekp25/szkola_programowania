#include <iostream>
#include <string>

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info *pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv & cp);
	Cpmv(Cpmv && mv);
	~Cpmv();
	Cpmv & operator=(const Cpmv & cp);
	Cpmv & operator=(Cpmv && mv);
	Cpmv operator+(const Cpmv & obj) const;
	void Display() const;
};

int main()
{
	using namespace std;
	Cpmv pusty;
	pusty.Display();
	Cpmv nowy("ala", "kota");
	nowy.Display();
	pusty = nowy;
	pusty.Display();
	Cpmv nowszy = pusty;
	nowszy.Display();

	Cpmv dodawanie(nowszy + nowy);
	dodawanie.Display();
	Cpmv dodawanie2 = Cpmv(nowszy + nowy);
	dodawanie2.Display();
	dodawanie2 = nowszy + nowy;
	dodawanie2.Display();

	system("pause");
	return 0;
}

Cpmv::Cpmv()
{
	pi = new Info;
	pi->qcode = "";
	pi->zcode = "";
	std::cout << "Konstruktor domyslny, adres pi: " << pi << std::endl;
}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	std::cout << "Konstruktor q z, adres pi: " << pi << std::endl;
}

Cpmv::Cpmv(const Cpmv & cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "Konstruktor kopiujacy, adres pi: " << pi << std::endl;
}

Cpmv::Cpmv(Cpmv && mv)
{
	pi = mv.pi;
	mv.pi = nullptr;
	std::cout << "Konstruktor przenoszacy, adres pi: " << pi << std::endl;
}

Cpmv::~Cpmv()
{
	std::cout << "Jestem zwalniany:< moj adres pi: " << pi << std::endl;
	delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "przypisanie kopiujace, adres pi: " << pi << std::endl;
	return *this;

}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	std::cout << "przypisanie przenoszace, adres pi: " << pi << std::endl;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	return Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
}

void Cpmv::Display() const
{
	std::cout << "qcode: " << pi->qcode << "\nzcode: " << pi->zcode << std::endl;
}

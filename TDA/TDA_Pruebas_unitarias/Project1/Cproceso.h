
class Cproceso
{
public:
	int getNum(void);
	void setNum(int newNum);
	int getDen(void);
	void setDen(int newDen);
	Cproceso(int nume, int deno);
	~Cproceso();
	Cproceso racional(Cproceso numer, Cproceso denom);
	void imprimirObj(Cproceso obj);

protected:
private:
	int num;
	int den;


};


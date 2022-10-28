/***********************************************************************
 * Module:  Cproceso.h
 * Author:  sebas
 * Modified: jueves, 27 de octubre de 2022 19:28:52
 * Purpose: Declaration of the class Cproceso
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Cproceso_h)
#define __Class_Diagram_1_Cproceso_h

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

#endif
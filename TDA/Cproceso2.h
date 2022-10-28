/***********************************************************************
 * Module:  Cproceso.h
 * Author:  steve
 * Modified: jueves, 27 de octubre de 2022 21:24:47
 * Purpose: Declaration of the class Cproceso
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Cproceso_h)
#define __Class_Diagram_2_Cproceso_h

class Cproceso
{
public:
   int getNum(void);
   void setNum(int newNum);
   int getDen(void);
   void setDen(int newDen);
   Cproceso(int nume, int deno);
   ~Cproceso();

protected:
private:
   int num;
   int den;


};

#endif
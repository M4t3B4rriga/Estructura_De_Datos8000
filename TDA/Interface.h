/***********************************************************************
 * Module:  Interface.h
 * Author:  steve
 * Modified: jueves, 27 de octubre de 2022 21:20:58
 * Purpose: Declaration of the class Interface
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Interface_h)
#define __Class_Diagram_2_Interface_h

#include <Cproceso.h>

class Interface
{
public:
   Cproceso racional(Cproceso numer, Cproceso denom);
   void imprimirObj(Cproceso obj);

protected:
private:
   int num;
   int den;


};

#endif
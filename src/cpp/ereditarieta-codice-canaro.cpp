/////////////////////////////////////////////////////////////
//
//   CHISONOV.CPP - Utilizzo delle funzioni virtuali
//
/////////////////////////////////////////////////////////////
#include <iostream.h>
/////////////////////////////////////////////////////////////
class A
{
 public:
    A() {} ;
    virtual void ChiSono()        	
    	{ cout << "Sono un oggetto di classe A \n" ; } 
} ;
/////////////////////////////////////////////////////////////
class B :public A
{
 public:
    B() : A() {} ;
    void ChiSono() 
    	{ cout << "Sono un oggetto di classe B \n" ; } 
} ;
/////////////////////////////////////////////////////////////
void main()
{
 B * ptrB = new B ;            	
 A * ptrA = ptrB ;            	
        	
	ptrB->ChiSono() ;            	
	ptrA->ChiSono() ;            	
} ;
/////////////////////////////////////////////////////////////

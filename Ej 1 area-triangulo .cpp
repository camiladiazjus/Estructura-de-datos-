#include"stdafx.h"
	#include "triangulo.h"
	triangulo::triangulo(void)
	{
		base=2;
		altura=5;
	}
	
	triangulo::~triangulo(void)
	{
	}
	
	float triangulo::calculararea(float b, float h)
	{
		area=(b*h)/2;
		return area;
	}

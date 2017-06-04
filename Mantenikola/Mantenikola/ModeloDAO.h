#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Modelo.h"
#include "MyDAO.h"
using namespace std;
class ModeloDAO
{
public:
	ModeloDAO();
	Modelo* getModelo(string nome);
	vector<Modelo*> getModelos();
	//int inserir(Motor * motor);
	virtual ~MotorDAO();
};

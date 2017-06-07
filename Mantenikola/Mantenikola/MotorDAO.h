#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Motor.h"
#include "MyDAO.h"
using namespace std;
class MotorDAO
{
public:
	MotorDAO();
	Motor* getMotor(int numeroDeSerie, string modelo);
	vector<Motor*> getMotores();
	static bool existeMotor(int numeroDeSerie, string modelo);
	static void cadastrarMotor(int numeroDeSerie, string modelo);
	virtual ~MotorDAO();
};


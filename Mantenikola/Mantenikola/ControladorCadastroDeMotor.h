#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Proprietario.h"
#include "Modelo.h"


using namespace std;
class ControladorCadastroDeMotor
{
private:
	static vector<Modelo*> vetorDeModelos;
	static vector<Proprietario*> vetorDeProprietarios;


public:
	ControladorCadastroDeMotor();
	static void materializarModelos();
	static vector<Modelo*> getModelos();
	static bool cadastrarMotor(_int64 numeroDeSerie, string modelo, string data, string proprietario); //cadastro falha caso cadastro de motor tenha sido bem sucedido
	static void materializarProprietarios();
	static void cadastrarFalha(_int64 numeroDeSerie, string modelo, string data);
	static vector<Proprietario*> getProprietarios();
	virtual ~ControladorCadastroDeMotor();
};


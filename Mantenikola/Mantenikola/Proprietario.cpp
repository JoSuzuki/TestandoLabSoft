#include "Proprietario.h"
#include "ProprietarioDAO.h"

Proprietario::Proprietario()
{
}


void Proprietario::setNome(string nome)
{
	this->nome = nome;
}

string Proprietario::getNome()
{
	return this->nome;
}

int Proprietario::getId()
{
	return this->id;
}

vector<Proprietario*> Proprietario::getProprietarios()
{
	return ProprietarioDAO::getProprietarios();
}

Proprietario::~Proprietario()
{
}

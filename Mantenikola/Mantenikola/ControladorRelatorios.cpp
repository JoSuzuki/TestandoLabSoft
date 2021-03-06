#include "ControladorRelatorios.h"

vector<Modelo*> ControladorRelatorios::vetorDeModelos = vector<Modelo*>();
vector<ModoDeFalha*> ControladorRelatorios::vetorDeModosDeFalha = vector<ModoDeFalha*>();



ControladorRelatorios::ControladorRelatorios()
{
}

System::Data::DataTable ^ ControladorRelatorios::getTabelaDeModosDeFalhaPorModelo(string modoDeFalha)
{
	return ModoDeFalha::getTabelaDeModosDeFalhaPorModelo(modoDeFalha);
}

void ControladorRelatorios::materializarModosDeFalha()
{
	vetorDeModosDeFalha = ModoDeFalha::materializarModosDeFalha();
}


vector<ModoDeFalha*> ControladorRelatorios::getModosDeFalha()
{
	return vetorDeModosDeFalha;
}

void ControladorRelatorios::materializarModelos()
{
	vetorDeModelos = Modelo::materializarModelos();
}

vector<Modelo*> ControladorRelatorios::getModelos()
{
	return vetorDeModelos;
}

ControladorRelatorios::~ControladorRelatorios()
{
}

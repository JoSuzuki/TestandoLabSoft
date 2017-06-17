#include "ModoDeFalhaDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

ModoDeFalhaDAO::ModoDeFalhaDAO()
{
}

vector<ModoDeFalha*> ModoDeFalhaDAO::materializarModosDeFalha()
{
	vector<ModoDeFalha*> vetorDeModosDeFalha;

	sql::Connection * c = MyDAO::getInstance()->getConnection();

	//std::unique_ptr<sql::Connection> con(c);
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT nome from ModoDeFalha");
	while (res->next()) {
		ModoDeFalha* modoDeFalha = new ModoDeFalha(res->getString("nome"));
		vetorDeModosDeFalha.push_back(modoDeFalha);
	}
	//delete res;
	//delete stmt;
	return vetorDeModosDeFalha;
}

ModoDeFalhaDAO::~ModoDeFalhaDAO()
{
}

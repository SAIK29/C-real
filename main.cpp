#include <iostream>
#include <string>

//namespace, é uma classe que SÓ guarda variáveis.
namespace secondary{
	int X = 29;
	std::string Y = "29";
}

int main() {

	using namespace secondary;

	std::cout << X << " e " << Y << " ais um número mais lindo. (|" << std::endl;

	system("pause");

	return 0;
}
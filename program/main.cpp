#include <iostream>
#include "veiculo.hpp"
#include "usuarioLogado.hpp"
#include "usuario.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"
#include "salario.hpp"
#include "empresa.hpp"
#include "Data.h"

std::vector<string> permissao() {
  vector<string> permissoes;
	permissoes.push_back("cadastrarEmailPessoa");
	permissoes.push_back("cadastrarTipoPessoa");
	permissoes.push_back("verificarNomePessoa");
	permissoes.push_back("verificarDocumentoPessoa");
	permissoes.push_back("verificarEnderecoPessoa");
	permissoes.push_back("verificarEmailPessoa");
	permissoes.push_back("verificarTipoPessoa");
	permissoes.push_back("cadastrarNomePessoa");
	permissoes.push_back("cadastrarEnderecoPessoa");
	permissoes.push_back("cadastrarPessoa");
	permissoes.push_back("cadastrarDocumentoPessoa");

	permissoes.push_back("cadastrarFuncionario");
	permissoes.push_back("admitirFuncionario");
	permissoes.push_back("demitirFuncionario");
	permissoes.push_back("verificarStatusFuncionario");
	permissoes.push_back("cadastrarMatriculaFuncionario");
	permissoes.push_back("verificarMatriculaFuncionario");
	permissoes.push_back("cadastrarNascimentoFuncionario");
	permissoes.push_back("verificarNascimentoFuncionario");
	permissoes.push_back("cadastrarAdmissaoFuncionario");
	permissoes.push_back("verificarAdmissaoFuncionario");
	permissoes.push_back("cadastrarDemissaoFuncionario");
	permissoes.push_back("verificarDemissaoFuncionario");
	permissoes.push_back("cadastrarSalarioFuncionario");
	permissoes.push_back("verificarSalarioFuncionario");
	permissoes.push_back("cadastrarDepartamentoFuncionario");
	permissoes.push_back("verificarDepartamentoFuncionario");
	permissoes.push_back("cadastrarCargoFuncionario");
	permissoes.push_back("verificarCargoFuncionario");
	permissoes.push_back("cadastrarLatitudeFuncionario");
	permissoes.push_back("verificarLatitudeFuncionario");
	permissoes.push_back("cadastrarLongitudeFuncionario");
	permissoes.push_back("verificarLongitudeFuncionario");

	permissoes.push_back("cadastrarSalario");
	permissoes.push_back("verificarSalario");
	permissoes.push_back("cadastrarValorSalario");
	permissoes.push_back("cadastrarMotivoSalario");
	permissoes.push_back("verificarMotivoSalario");
	permissoes.push_back("cadastrarStatusSalario");
	permissoes.push_back("verificarDataSalario");

	permissoes.push_back("cadastrarDepartamento");
	permissoes.push_back("verificarIdDepartamento");
	permissoes.push_back("verificarNomeDepartamento");
	permissoes.push_back("cadastrarNomeDepartamento");

	permissoes.push_back("verificarNomeCargo");
	permissoes.push_back("verificarIdCargo");
	permissoes.push_back("cadastrarNomeCargo");
	permissoes.push_back("cadastrarIdCargo");

	permissoes.push_back("verificarTelefoneCliente");
	permissoes.push_back("cadastrarTelefoneCliente");
	permissoes.push_back("cadastrarCliente");


  return permissoes;

}

void testUserSingleton(){
	std::cout << "-----------------" << std::endl;
	UsuarioLogado *U = UsuarioLogado::GetInstance();

	U->setNome("User 1");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("19169517711");
	U->setEmail("email1@gmail.com");
	
	std::cout << "Nome do singleton (teste): " << U->getNome() << "aaaaaa ;-;" << std::endl;
	std::cout << "Carregando classe UsuarioLogado" << std::endl;
	
	// Criando outro usuário pra ver se quando chama o singleton ele não cria outro
	UsuarioLogado *usuarioLogado = UsuarioLogado::GetInstance();
	std::cout << usuarioLogado->getNome() << std::endl;
	std::cout << "-----------------" << std::endl;
}

void testaCliente(){
	//c.setTipo(0);// 0 - Física, 1 - Jurídica

	Empresa *e = Empresa::getEmpresa();
	//criar um usuarioLogado
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	U->setNome("UsuarioCliente");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("19169517711");
	U->setEmail("user@user.com");
	
	U->setPermissoes(permissao());
	/*for (unsigned int i = 0; i < U->getPermissoes().size(); i++)
	{
		std::cout << "Permissoes(TestaPessoa) -> " << U->getPermissoes()[i] << std::endl;
	}*/

	//logar usuario na empresa
	e->logar(U);

	std::cout << "Nome do usuario logado(TestaCliente): " << U->getNome() << std::endl;
	std::cout <<"Quantidade de Permissoes no vetor de permissoes do usuario Logado: "<< U->getPermissoes().size() << std::endl;
	

	std::cout<<"-------Gerando a Cliente----------"<<std::endl;
	Cliente cFisico;//"Lojao", "123456789", "Rua 1", "jao@jao.jao",1,"987654321"
	Cliente cJuridico;
	cFisico.setNome("Jorge");
	cFisico.setcpf_cnpj("12345678901");
	cFisico.setEndereco("Rua 5");
	cFisico.setEmail("jorge@email.com");
	cFisico.setTipo(0); // 0 - Física, 1 - Jurídica
	cFisico.setTelefone("9876543210");
	cJuridico.setNome("Sergio");
	cJuridico.setcpf_cnpj("12345678901232");
	cJuridico.setEndereco("Rua 6");
	cJuridico.setEmail("sergio@email.com");
	cJuridico.setTipo(1); // 0 - Física, 1 - Jurídica
	cJuridico.setTelefone("9876543290");

	std::cout << "Nome do Cliente Fisico criado: " << cFisico.getNome() << " | Documento: " << cFisico.getCpf_cnpj() << std::endl;
	std::cout << "Nome do Cliente Juridico criado: " << cJuridico.getNome() << " | Documento: " << cJuridico.getCpf_cnpj() << std::endl;
}

void testaFuncionario()
{
	Empresa *e = Empresa::getEmpresa();
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	U->setNome("User 1");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("19169517711");
	U->setEmail("user1@user.com");

	U->setPermissoes(permissao());
	/*for (unsigned int i = 0; i < U->getPermissoes().size(); i++)
	{
		std::cout << "Permissoes(TestaFuncionario) -> " << U->getPermissoes()[i] << std::endl;
	}*/
	//logar usuario na empresa
	e->logar(U);

	std::cout << "-----------------" << std::endl;
	std::cout << "Gerando Funcionario" << std::endl;

	std::vector <Salario> salario;
	Salario s(10000.00, true, 1);
	salario.push_back(s);
	Departamento adm("Departamento de ADM");
	Cargo gerente("Gerente");
	Data nascimento(1990, 1, 1); 
	Data admissao(2010, 1, 1); 
	Funcionario f;//"Joao", "12345678912", "Rua 1", "joao@joao.com",0, nascimento, admissao, salario, adm, gerente
	f.setNome("Joaozinho");
	f.setTipo(0);
	f.setcpf_cnpj("12345678912");
	f.setEndereco("Rua 1");
	f.setEmail("joao@joao.com");
	f.setNascimento(nascimento);
	f.setAdmissao(admissao);
	f.setSalario(salario);
	f.setDepartamento(adm);
	f.setCargo(gerente);

	Funcionario f2;
	f2.setNome("Joaozinho2");
	f2.setTipo(0);
	f2.setcpf_cnpj("12345678912");
	f2.setEndereco("Rua 1");
	f2.setEmail("j2@joao.com");
	f2.setNascimento(nascimento);
	f2.setAdmissao(admissao);
	f2.setSalario(salario);
	f2.setDepartamento(adm);
	f2.setCargo(gerente);

	//imprime nome dos funcionarios
	std::cout << "Nome dos Funcionarios atuais da empresa: " << std::endl;

	std::cout << "Nome do funcionario 1: " << f.getNome() << std::endl;
	std::cout << "Nome do funcionario 2: " << f2.getNome() << std::endl;

	e->adicionarFuncionario(&f);
	e->adicionarFuncionario(&f2);

	e->removerFuncionario(&f);

	if(f.empregado()){
		std::cout << "Funcionario empregado: " << f.getNome() << std::endl;
	}else{
		std::cout << "Funcionario desempregado: " << f.getNome() << std::endl;
	}

	if(f2.empregado()){
		std::cout << "Funcionario empregado: " << f2.getNome() << std::endl;
	}else{
		std::cout << "Funcionario desempregado: " << f2.getNome() << std::endl;
	}

}
void testaPessoa()
{
	Empresa *e = Empresa::getEmpresa();
	//criar um usuarioLogado
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	std::vector<std::string> permissoes;
	
	U->setPermissoes(permissao());
	U->setNome("Usuario funciona pfvr");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("19169517711");
	U->setEmail("user@user.com");

	/*for (unsigned int i = 0; i < U->getPermissoes().size(); i++)
	{
		std::cout << "Permissoes(TestaPessoa) -> " << U->getPermissoes()[i] << std::endl;
	}*/

	//logar usuario na empresa
	e->logar(U);

	std::cout << "Nome do usuario logado(TestaPessoa): " << U->getNome() << std::endl;
	std::cout <<"Quantidade de Permissoes no vetor de permissoes do usuario Logado: "<< U->getPermissoes().size() << std::endl;
	

	std::cout<<"-------Gerando a pessoa----------"<<std::endl;
	Pessoa p("Joao", "12345678911", "Rua 1", "email@email.com", 0);
	p.setNome("Joao");
	p.setcpf_cnpj("12345678911");
	p.setEndereco("Rua 1");
	p.setEmail("email@email.com");
	p.setTipo(0);

	std::cout << "Nome do Funcionario criado: " << p.getNome() << std::endl;
	
}	

int main()
{
	std::cout << "testando a pessoa" << std::endl;

	testaPessoa();

	//std::cout << "testando usuarioLogado singleton" << std::endl;
	//testUserSingleton();
	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFIMl(eh so as iniciais dos nomes dos integrantes do grupo!)"<<std::endl;
	std::cout<<"Digite 1 para funcionario e 2 para cliente: "<<std::endl;
	std::cin>>a;
	std::cout << "+-----------------+"<<std::endl;
	switch (a)
	{
	case 1:
		testaFuncionario();
		break;
	case 2:
		testaCliente();
		break;		
	default:
		std::cout<<"Opcao invalida"<<std::endl;
		break;
	}							
	
	return 0;
}
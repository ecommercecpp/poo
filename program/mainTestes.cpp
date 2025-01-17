#include <iostream>
#include "veiculo.hpp"
#include "usuarioLogado.hpp"
#include "usuario.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"
#include "salario.hpp"
#include "empresa.hpp"
#include "Data.h"
#include "materiaPrima.hpp"
#include "lote.hpp"
#include "orcamento.hpp"
#include "pedidoDeCompra.hpp"
#include "credito.hpp"
#include "boleto.hpp"

std::vector<std::string> permissao() {
  std::vector<std::string> permissoes;
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
	permissoes.push_back("empregadoFuncionario");
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
	permissoes.push_back("verificarValorSalario");
	permissoes.push_back("verificarStatusSalario");

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

	permissoes.push_back("cadastrarUsuario");
	permissoes.push_back("verificarLoginUsuario");
	permissoes.push_back("cadastrarLoginUsuario");
	permissoes.push_back("verificarSenhaUsuario");
	permissoes.push_back("cadastrarSenhaUsuario");
	permissoes.push_back("verificarPermissoesUsuario");
	permissoes.push_back("cadastrarPermissoesUsuario");

	permissoes.push_back("cadastrarUsuarioLogado");

	permissoes.push_back("setNomeProduto");
	permissoes.push_back("setCodigoProduto");
	permissoes.push_back("setValorDeVendaProduto");
	permissoes.push_back("setTamanhoDoLoteMinimoProduto");
	permissoes.push_back("setCategoriaProduto");
	permissoes.push_back("setEstoqueMinimoProduto");
	permissoes.push_back("setQtdEstoqueProduto");
	permissoes.push_back("getNomeProduto");
	permissoes.push_back("getCodigoProduto");
	permissoes.push_back("getValorDeVendaProduto");
	permissoes.push_back("getTamanhoDoLoteMinimoProduto");
	permissoes.push_back("getCategoriaProduto");
	permissoes.push_back("getEstoqueMinimoProduto");
	permissoes.push_back("getQtdEstoqueProduto");
	permissoes.push_back("adicionarEstoqueProduto");
	permissoes.push_back("removerEstoqueProduto");
	permissoes.push_back("verificarEstoqueProduto");
	permissoes.push_back("imprimirMateriaPrimaProduto");
	permissoes.push_back("imprimirProduto");
	permissoes.push_back("adicionarMateriaPrimaProduto");

	permissoes.push_back("instanciarUsuarioLogado");

  return permissoes;
}

void testaProduto() {
  std::cout << "Testando Produto" << std::endl;
  Lote *lote = new Lote();
  Produto *produto = new Produto();


  produto->setNome("Mesa");
  produto->setCodigo(1);
  produto->setValorDeVenda(30.0);
  produto->setEstoqueMinimo(20);
  produto->setTamanhoDoLoteMinimo(20);//definir certo
  Categoria *categoria = new Categoria();
  categoria->setNome("Moveis");
  produto->setCategoria(categoria);

  lote->produzir(produto, produto->getEstoqueMinimo());
  //criar materia prima e adicionar ao produto
  MateriaPrima *materiaPrima = new MateriaPrima();
  MateriaPrima *materiaPrima2 = new MateriaPrima();
  MateriaPrima *materiaPrima3 = new MateriaPrima();
  MateriaPrima *materiaPrima4 = new MateriaPrima();

  materiaPrima->setNome("Madeira");
  materiaPrima->setQuantidade(450);
  materiaPrima->setUnidadeMedida("g");
  materiaPrima->setEstoquemin(1000);
  materiaPrima->setEstoqueTotal(1500);
  produto->adicionarMateriaPrima(materiaPrima);

  materiaPrima2->setNome("Plastico");
  materiaPrima2->setQuantidade(150);
  materiaPrima2->setUnidadeMedida("g");
  materiaPrima2->setEstoquemin(1000);
  materiaPrima2->setEstoqueTotal(1500);
  produto->adicionarMateriaPrima(materiaPrima2);

  materiaPrima3->setNome("Aluminio");
  materiaPrima3->setQuantidade(100);
  materiaPrima3->setUnidadeMedida("g");
  materiaPrima3->setEstoquemin(1000);
  materiaPrima3->setEstoqueTotal(1500);
  produto->adicionarMateriaPrima(materiaPrima3);

  materiaPrima4->setNome("Parafusos");
  materiaPrima4->setQuantidade(8);
  materiaPrima4->setUnidadeMedida("un");
  materiaPrima4->setEstoquemin(20);
  materiaPrima4->setEstoqueTotal(30);
  produto->adicionarMateriaPrima(materiaPrima4);

  std::cout << "Nome: " << produto->getNome() << std::endl;
  std::cout << "Preco: " << produto->getValorDeVenda() << std::endl;
  std::cout << "Quantidade estoque min: " << produto->getEstoqueMinimo() << std::endl;
  std::cout << "Codigo: " << produto->getCodigo() << std::endl;
  //std::cout << "Estoque depois de efetuar a compra: " << materiaPrima->getEstoqueDisponivel() << " "<< materiaPrima->getUnidadeMedida() << std::endl;

  produto->imprimirMateriaPrima();
  
  delete categoria;
  delete materiaPrima;
  delete materiaPrima2;
  delete materiaPrima3;
  delete materiaPrima4;
  delete lote;
  delete produto;
}

void testaCliente(){
	//c.setTipo(0);// 0 - Física, 1 - Jurídica

	Empresa *e = Empresa::getEmpresa();
	//criar um usuarioLogado
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	U->setNome("UsuarioCliente");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("08167486669");
	U->setEmail("user@user.com");
	
	U->setPermissoes(permissao());

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

	//criar  um orcamento 
	Orcamento *o = new Orcamento();

	Produto *produto = new Produto();

	produto->setNome("Mesa");
	produto->setCodigo(1);
	produto->setValorDeVenda(30.0);
	produto->setEstoqueMinimo(20);
	produto->setQtdEstoque(20);
	produto->setTamanhoDoLoteMinimo(20);//definir certo
	Categoria *categoria = new Categoria();
	categoria->setNome("Moveis");
	produto->setCategoria(categoria);

	//criar vetor de produtos
	std::vector<Produto*> produtos;
	//adicionar produtos ao vetor
	produtos.push_back(produto);

	//fazendo o orcamento pedido nos testes
	o->gerarOrcamento(&cJuridico, 10, produtos);
	o->imprimeOrcamento(&cJuridico, produtos);

	PedidoDeCompra *p = new PedidoDeCompra();
	Credito *credito = new Credito();
	Boleto *boleto = new Boleto();
	p->setId(1);
	p->gerarPedidoDeCompra();
	p->selecionaMetodo(&cJuridico,credito,boleto);

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

	//logar usuario na empresa
	e->logar(U);

	std::cout << "-----------------" << std::endl;
	std::cout << "Gerando Funcionario" << std::endl;

	std::vector <Salario> salario;
	Salario s(10000.00, true, 1);
	salario.push_back(s);
	Departamento adm("Departamento de ADM");
	Departamento vendas("Departamento de Vendas");
	Cargo vendedor("Vendedor");
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

	Funcionario f3;
	f3.setNome("Joaozinho3");
	f3.setTipo(0);
	f3.setcpf_cnpj("12345678912");
	f3.setEndereco("Rua 1");
	f3.setEmail("j3@joao.com");
	f3.setNascimento(nascimento);
	f3.setAdmissao(admissao);
	f3.setSalario(salario);
	f3.setDepartamento(vendas);
	f3.setCargo(vendedor);


	//imprime nome dos funcionarios
	std::cout << "Nome dos Funcionarios atuais da empresa: " << std::endl;

	std::cout << "Nome do funcionario 1: " << f.getNome() << std::endl;
	std::cout << "Nome do funcionario 2: " << f2.getNome() << std::endl;
	std::cout << "Nome do funcionario 3: " << f3.getNome() << std::endl;

	e->adicionarFuncionario(&f);
	e->adicionarFuncionario(&f2);
	e->adicionarFuncionario(&f3);

	e->removerFuncionario(&f);

	//imprimir status dos funcionarios
	//std::cout << "Status dos Funcionarios atuais da empresa: " << std::endl;
	/*if(f.empregado()){
		std::cout << "Funcionario empregado: " << f.getNome() << std::endl;
	}else{
		std::cout << "Funcionario desempregado: " << f.getNome() << std::endl;
	}

	if(f2.empregado()){
		std::cout << "Funcionario empregado: " << f2.getNome() << std::endl;
	}else{
		std::cout << "Funcionario desempregado: " << f2.getNome() << std::endl;
	}*/

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
	U->setcpf_cnpj("09169507600");
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

	e->imprimirLogs();
	
}	

int main()
{
	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFIMl(eh so as iniciais dos nomes dos integrantes do grupo!)\n"<<std::endl;
	std::cout << "Acesse nosso repositorio no Github pelo link: https://github.com/ecommercecpp/Projeto-OO"<<std::endl;
	std::cout << "Acesse nossa documentacao pelo link: https://ecommercecpp.github.io/Projeto-OO/md__c___users_felip__one_drive__documentos__git_hub_poo__r_e_a_d_m_e.html"<<std::endl;	
	std::cout<<"\nDigite 1 para funcionario e 2 para cliente: "<<std::endl;
	std::cin>>a;
	std::cout << "+-----------------+"<<std::endl;
	std::cout << "Testando a pessoa" << std::endl;
	testaPessoa();
	std::cout << "+-----------------+"<<std::endl;
	std::cout << "Testando o produto" << std::endl;
	testaProduto();
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




















#include <iostream>
#include "veiculo.hpp"
#include "usuarioLogado.hpp"
#include "usuario.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"
#include "salario.hpp"
#include "empresa.hpp"
#include "Data.h"
#include "materiaPrima.hpp"
#include "lote.hpp"
#include "orcamento.hpp"
#include "pedidoDeCompra.hpp"
#include "credito.hpp"
#include "boleto.hpp"

std::vector<std::string> permissao() {
  std::vector<std::string> permissoes;
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
	//permissoes.push_back("demitirFuncionario");
	permissoes.push_back("empregadoFuncionario");
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
	permissoes.push_back("verificarValorSalario");
	permissoes.push_back("verificarStatusSalario");

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

	permissoes.push_back("cadastrarUsuario");
	permissoes.push_back("verificarLoginUsuario");
	permissoes.push_back("cadastrarLoginUsuario");
	permissoes.push_back("verificarSenhaUsuario");
	permissoes.push_back("cadastrarSenhaUsuario");
	permissoes.push_back("verificarPermissoesUsuario");
	permissoes.push_back("cadastrarPermissoesUsuario");

	permissoes.push_back("cadastrarUsuarioLogado");

	permissoes.push_back("setNomeProduto");
	permissoes.push_back("setCodigoProduto");
	permissoes.push_back("setValorDeVendaProduto");
	permissoes.push_back("setTamanhoDoLoteMinimoProduto");
	permissoes.push_back("setCategoriaProduto");
	permissoes.push_back("setEstoqueMinimoProduto");
	permissoes.push_back("setQtdEstoqueProduto");
	permissoes.push_back("getNomeProduto");
	permissoes.push_back("getCodigoProduto");
	permissoes.push_back("getValorDeVendaProduto");
	permissoes.push_back("getTamanhoDoLoteMinimoProduto");
	permissoes.push_back("getCategoriaProduto");
	permissoes.push_back("getEstoqueMinimoProduto");
	permissoes.push_back("getQtdEstoqueProduto");
	permissoes.push_back("adicionarEstoqueProduto");
	permissoes.push_back("removerEstoqueProduto");
	permissoes.push_back("verificarEstoqueProduto");
	permissoes.push_back("imprimirMateriaPrimaProduto");
	permissoes.push_back("imprimirProduto");
	permissoes.push_back("adicionarMateriaPrimaProduto");

	permissoes.push_back("instanciarUsuarioLogado");

  return permissoes;
}

void testaCliente(){
	//c.setTipo(0);// 0 - Física, 1 - Jurídica

	Empresa *e = Empresa::getEmpresa();
	//criar um usuarioLogado
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	U->setNome("UsuarioCliente");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("08167486669");
	U->setEmail("user@user.com");
	
	U->setPermissoes(permissao());

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

	// criar  um orcamento
	Orcamento *o = new Orcamento();
	Lote *lote = new Lote();
	Produto *produto = new Produto();

	produto->setNome("Mesa");
	produto->setCodigo(1);
	produto->setValorDeVenda(30.0);
	produto->setEstoqueMinimo(20);
	produto->setQtdEstoque(20);
	produto->setTamanhoDoLoteMinimo(20); // definir certo
	Categoria *categoria = new Categoria();
	categoria->setNome("Moveis");
	produto->setCategoria(categoria);

	lote->produzir(produto, produto->getEstoqueMinimo());
	// criar materia prima e adicionar ao produto
	MateriaPrima *materiaPrima = new MateriaPrima();
	MateriaPrima *materiaPrima2 = new MateriaPrima();
	MateriaPrima *materiaPrima3 = new MateriaPrima();
	MateriaPrima *materiaPrima4 = new MateriaPrima();

	materiaPrima->setNome("Madeira");
	materiaPrima->setQuantidade(450);
	materiaPrima->setUnidadeMedida("g");
	materiaPrima->setEstoquemin(1000);
	materiaPrima->setEstoqueTotal(1500);
	produto->adicionarMateriaPrima(materiaPrima);

	materiaPrima2->setNome("Plastico");
	materiaPrima2->setQuantidade(150);
	materiaPrima2->setUnidadeMedida("g");
	materiaPrima2->setEstoquemin(1000);
	materiaPrima2->setEstoqueTotal(1500);
	produto->adicionarMateriaPrima(materiaPrima2);

	materiaPrima3->setNome("Aluminio");
	materiaPrima3->setQuantidade(100);
	materiaPrima3->setUnidadeMedida("g");
	materiaPrima3->setEstoquemin(1000);
	materiaPrima3->setEstoqueTotal(1500);
	produto->adicionarMateriaPrima(materiaPrima3);

	materiaPrima4->setNome("Parafusos");
	materiaPrima4->setQuantidade(8);
	materiaPrima4->setUnidadeMedida("un");
	materiaPrima4->setEstoquemin(20);
	materiaPrima4->setEstoqueTotal(30);
	produto->adicionarMateriaPrima(materiaPrima4);

	std::cout << "Nome: " << produto->getNome() << std::endl;
	std::cout << "Preco: " << produto->getValorDeVenda() << std::endl;
	std::cout << "Quantidade estoque min: " << produto->getEstoqueMinimo() << std::endl;
	std::cout << "Codigo: " << produto->getCodigo() << std::endl;
	// std::cout << "Estoque depois de efetuar a compra: " << materiaPrima->getEstoqueDisponivel() << " "<< materiaPrima->getUnidadeMedida() << std::endl;

	produto->imprimirMateriaPrima();

	// criar vetor de produtos
	std::vector<Produto *> produtos;
	// adicionar produtos ao vetor
	produtos.push_back(produto);

	//fazendo o orcamento pedido nos testes
	o->gerarOrcamento(&cJuridico, 10, produtos);
	o->imprimeOrcamento(&cJuridico, produtos);

	PedidoDeCompra *p = new PedidoDeCompra();
	Credito *credito = new Credito();
	Boleto *boleto = new Boleto();
	p->setId(1);
	p->gerarPedidoDeCompra();
	p->selecionaMetodo(&cJuridico,credito,boleto);

	e->imprimirLogs();

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

	//logar usuario na empresa
	e->logar(U);

	std::cout << "-----------------" << std::endl;
	std::cout << "Gerando Funcionario" << std::endl;

	std::vector <Salario> salario;
	Salario s(10000.00, true, 1);
	salario.push_back(s);
	Departamento adm("Departamento de ADM");
	Departamento vendas("Departamento de Vendas");
	Cargo vendedor("Vendedor");
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

	Funcionario f3;
	f3.setNome("Joaozinho3");
	f3.setTipo(0);
	f3.setcpf_cnpj("12345678912");
	f3.setEndereco("Rua 1");
	f3.setEmail("j3@joao.com");
	f3.setNascimento(nascimento);
	f3.setAdmissao(admissao);
	f3.setSalario(salario);
	f3.setDepartamento(vendas);
	f3.setCargo(vendedor);


	//imprime nome dos funcionarios
	std::cout << "Nome dos Funcionarios atuais da empresa: " << std::endl;

	std::cout << "Nome do funcionario 1: " << f.getNome() << std::endl;
	std::cout << "Nome do funcionario 2: " << f2.getNome() << std::endl;
	std::cout << "Nome do funcionario 3: " << f3.getNome() << std::endl;

	e->adicionarFuncionario(&f);
	e->adicionarFuncionario(&f2);
	e->adicionarFuncionario(&f3);

	e->removerFuncionario(&f);

	e->imprimirLogs();
}

int main()
{
	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFIMl(eh so as iniciais dos nomes dos integrantes do grupo!)\n"<<std::endl;
	std::cout << "Acesse nosso repositorio no Github pelo link: https://github.com/ecommercecpp/Projeto-OO"<<std::endl;
	std::cout << "Acesse nossa documentacao pelo link: https://ecommercecpp.github.io/Projeto-OO/md__c___users_felip__one_drive__documentos__git_hub_poo__r_e_a_d_m_e.html"<<std::endl;	
	std::cout<<"\nDigite 1 para funcionario e 2 para cliente: "<<std::endl;
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
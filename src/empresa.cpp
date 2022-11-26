#include <iostream>
#include <algorithm>  // std::find

#include "Data.h"
#include "empresa.hpp"
#include "usuario.hpp"
#include "usuarioLogado.hpp"

/**
 * @brief Construct a new Empresa:: Empresa singleton object
 *
 */
Empresa *Empresa::empresa = nullptr;

/**
 * @brief Construct a new Empresa:: Empresa object
 *
 */
Empresa::Empresa()
{
}

/**
 * @brief Retorna a instancia da empresa
 *
 * @return Empresa*
 */
Empresa *Empresa::getEmpresa()
{
    if(empresa == nullptr){
        empresa = new Empresa;
    }
    return empresa;
}

/**
 * @brief Destroi a instancia da empresa
 *
 */
Empresa::~Empresa()
{
    delete empresa;
}

/**
 * @brief Adiciona um departamento a empresa
 *
 * @param departamento
 */
void Empresa::adicionarDepartamento(Departamento *departamento)
{
    departamentos.push_back(departamento);
}

/**
 * @brief Remove um departamento da empresa
 *
 * @param departamento
 */
void Empresa::removerDepartamento(Departamento *departamento)
{
    for (unsigned int i = 0; i < departamentos.size(); i++)
    {
        if (departamentos[i] == departamento)
        {
            departamentos.erase(departamentos.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um cargo a empresa
 *
 * @param cargo
 */
void Empresa::adicionarCargo(Cargo *cargo)
{
    cargos.push_back(cargo);
}

/**
 * @brief Remove um cargo da empresa
 *
 * @param cargo
 */
void Empresa::removerCargo(Cargo *cargo)
{
    for (unsigned int i = 0; i < cargos.size(); i++)
    {
        if (cargos[i] == cargo)
        {
            cargos.erase(cargos.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um funcionario a empresa
 *
 * @param funcionario
 */
void Empresa::adicionarFuncionario(Funcionario* funcionario)
{
    funcionario->admitir();
    funcionarios.push_back(funcionario);
    //printar funcionarios no vetor de funcionarios
    /*for (unsigned int i = 0; i < funcionarios.size(); i++)
    {
        std::cout <<"Funcao adicionarFuncionario "<< funcionarios[i]->getNome() << std::endl;
    }*/
}

/**
 * @brief Remove um funcionario da empresa
 *
 * @param funcionario
 */
void Empresa::removerFuncionario(Funcionario* funcionario)
{  
    funcionario->demitir();
    for (unsigned int i = 0; i < funcionarios.size(); i++)
    {
        if (funcionarios[i] == funcionario)
        {
            funcionarios.erase(funcionarios.begin() + i);
        }
    }
    /*for (unsigned int i = 0; i < funcionarios.size(); i++)
    {
        std::cout <<"Funcao removerFuncionario "<< funcionarios[i]->getNome() << std::endl;
    }*/
}

/**
 * @brief Adiciona um cliente a empresa
 *
 * @param cliente
 */
void Empresa::adicionarCliente(Cliente *cliente)
{
    clientes.push_back(cliente);
}

/**
 * @brief Remove um cliente da empresa
 *
 * @param cliente
 */
void Empresa::removerCliente(Cliente *cliente)
{
    for (unsigned int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i] == cliente)
        {
            clientes.erase(clientes.begin() + i);
        }
    }
}

/**
 * @brief Adiciona uma ordem de produção a empresa
 *
 * @param ordemProducao
 */
void Empresa::adicionarOrdemProducao(OrdemProducao *ordemProducao)
{
    ordemProducaoLista.push_back(ordemProducao);
}

/**
 * @brief Remove uma ordem de produção da empresa
 *
 * @param ordemProducao
 */
void Empresa::removerOrdemProducao(OrdemProducao *ordemProducao)
{
    for (unsigned int i = 0; i < ordemProducaoLista.size(); i++)
    {
        if (ordemProducaoLista[i] == ordemProducao)
        {
            ordemProducaoLista.erase(ordemProducaoLista.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um produto a empresa
 *
 * @param produto
 */
void Empresa::adicionarProduto(Produto *produto)
{
    produtos.push_back(produto);
}

/**
 * @brief Remove um produto da empresa
 *
 * @param produto
 */
void Empresa::removerProduto(Produto *produto)
{
    for (unsigned int i = 0; i < produtos.size(); i++)
    {
        if (produtos[i] == produto)
        {
            produtos.erase(produtos.begin() + i);
        }
    }
}

/**
 * @brief Adiciona uma categoria a empresa
 *
 * @param categoria
 */
void Empresa::adicionarCategoria(Categoria *categoria)
{
    categorias.push_back(categoria);
}

/**
 * @brief Remove uma categoria da empresa
 *
 * @param categoria
 */
void Empresa::removerCategoria(Categoria *categoria)
{
    for (unsigned int i = 0; i < categorias.size(); i++)
    {
        if (categorias[i] == categoria)
        {
            categorias.erase(categorias.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um lote a empresa
 *
 * @param lote
 */
void Empresa::adicionarLote(Lote *lote)
{
    lotes.push_back(lote);
}

/**
 * @brief Remove um lote da empresa
 *
 * @param lote
 */
void Empresa::removerLote(Lote *lote)
{
    for (unsigned int i = 0; i < lotes.size(); i++)
    {
        if (lotes[i] == lote)
        {
            lotes.erase(lotes.begin() + i);
        }
    }
}

/**
 * @brief Adiciona uma venda a empresa
 *
 * @param venda
 */
void Empresa::adicionarVenda(Venda *venda)
{
    vendas.push_back(venda);
}

/**
 * @brief Remove uma venda da empresa
 *
 * @param venda
 */
void Empresa::removerVenda(Venda *venda)
{
    for (unsigned int i = 0; i < vendas.size(); i++)
    {
        if (vendas[i] == venda)
        {
            vendas.erase(vendas.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um Log de escrita a empresa
 *
 * @param LogEscrita
 */
void Empresa::adicionarLogEscrita(LogEscrita *logEscrita)
{
    logsEscrita.push_back(logEscrita);
}

/**
 * @brief Remove um Log de escrita da empresa
 *
 * @param LogEscrita
 */
void Empresa::removerLogEscrita(LogEscrita *logEscrita)
{
    for (unsigned int i = 0; i < logsEscrita.size(); i++)
    {
        if (logsEscrita[i] == logEscrita)
        {
            logsEscrita.erase(logsEscrita.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um Log de leitura a empresa
 *
 * @param LogLeitura
 */
void Empresa::adicionarLogLeitura(LogLeitura *logLeitura)
{
    logsLeitura.push_back(logLeitura);
}

/**
 * @brief Remove um Log de leitura da empresa
 *
 * @param LogLeitura
 */
void Empresa::removerLogLeitura(LogLeitura *logLeitura)
{
    for (unsigned int i = 0; i < logsLeitura.size(); i++)
    {
        if (logsLeitura[i] == logLeitura)
        {
            logsLeitura.erase(logsLeitura.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um Log de exceção a empresa
 *
 * @param LogEcecao
 */
void Empresa::adicionarLogExcecao(LogExcecao *logExcecao)
{
    logsExcecao.push_back(logExcecao);
}

/**
 * @brief Remove um Log de exceção da empresa
 *
 * @param LogExcecao
 */
void Empresa::removerLogExcecao(LogExcecao *logExcecao)
{
    for (unsigned int i = 0; i < logsExcecao.size(); i++)
    {
        if (logsExcecao[i] == logExcecao)
        {
            logsExcecao.erase(logsExcecao.begin() + i);
        }
    }
}

bool Empresa::verificaPermissao(std::string valor){
   // std::cout << "Tamanho do vetor de permissoes de usuario logado(classe empresa): " << usuarioLogado->getPermissoes().size() << std::endl;
    int cont = 0;
    for (unsigned int i = 0; i < usuarioLogado->getPermissoes().size(); i++)
    {
        //usuarioLogado->getPermissoes()[i]
        if (usuarioLogado->getPermissoes()[i] == valor)
        {
            //std::cout << "Mostra as permissoes(classe empresa) TRUE" << usuarioLogado->getPermissoes()[i] << std::endl;
            cont++;
        }/*else{
            std::cout << "Mostra as permissoes(classe empresa) FALSE" << usuarioLogado->getPermissoes()[i] << std::endl;
        }*/
    }
    if(cont > 0){
        return true;
    }else{
        return false;
    }

}

std::vector<std::string> Empresa::getPermissoesUsuarioLogado(){
    return usuarioLogado->getPermissoes();
}

//criar uma função que retorna o nome do usuario logado
std::string Empresa::getNomeUsuarioLogado(){
    return usuarioLogado->getNome();
}

void Empresa::logar(UsuarioLogado *usuarioLogado){
    this->usuarioLogado = usuarioLogado;
}

void Empresa::deslogar(){
    this->usuarioLogado = NULL;
}

void Empresa::gerarLogEscrita(std::string entidade, std::string atributoAlterado){
    LogEscrita *logEscrita = new LogEscrita();
    //criar um vector de atributos alterados
    std::vector <std::string> atributosAlterados;
    atributosAlterados.push_back(atributoAlterado);
    std::string nome = usuarioLogado->getNome();
    //Data *data = new Data();
    Data data = Data();
    
    logEscrita->setEntidade(entidade);
    logEscrita->setAtributosAnteriores(atributosAlterados);
    logEscrita->setUsuario(usuarioLogado);
    logEscrita->setData(data.dateNow());
    adicionarLogEscrita(logEscrita);
}
/*
void Empresa::gerarLogLeitura(std::string entidade, std::string informacao){
    LogLeitura *logLeitura = new LogLeitura();
    logLeitura->setEntidade(entidade);
    logLeitura->setInformacao(informacao);
    logLeitura->setUsuario(usuarioLogado->nome);
    logLeitura->setDataHora();
    adicionarLogLeitura(logLeitura);
}

void Empresa::gerarLogExcecao(std::string entidade, std::string funcionalidade){
    LogExcecao *logExcecao = new LogExcecao();
    logExcecao->setEntidade(entidade);
    logExcecao->setFuncionalidade(funcionalidade);
    logExcecao->setUsuario(usuarioLogado->nome);
    logExcecao->setDataHora();
    adicionarLogExcecao(logExcecao);
}
*/

//função para imprimir todos os logs de escrita
/*void Empresa::imprimirLogsEscrita(){
    for (unsigned int i = 0; i < logsEscrita.size(); i++)
    {
        std::cout << "Entidade: " << logsEscrita[i]->getEntidade() << std::endl;
        std::cout << "Atributo Alterado: " << logsEscrita[i]->getAtributoAlterado() << std::endl;
        std::cout << "Usuario: " << logsEscrita[i]->getUsuario() << std::endl;
        std::cout << "Data e Hora: " << logsEscrita[i]->getDataHora() << std::endl;
        std::cout << "--------------------------------------------" << std::endl;
    }
}*/

#include "produto.hpp"

Produto::Produto()
{
}

Produto::Produto(std::string nome, int codigo, double preco, Lote lote, Categoria categoria)
: nome(nome), codigo(codigo), preco(preco), categoria(categoria)
{
	lotes.insert(std::pair<int, Lote>(lote.getCodigoLote(), lote));
	atualizarEstoque();
}

Produto::Produto(std::string nome, int codigo, double preco, std::map<int, Lote> lotes, Categoria categoria)
: nome(nome), codigo(codigo), preco(preco), lotes(lotes), categoria(categoria)
{
	atualizarEstoque();
}

Produto::Produto(std::string nome, int codigo, double preco, Lote lote)
: nome(nome), codigo(codigo), preco(preco)
{
	lotes.insert(std::pair<int, Lote>(lote.getCodigoLote(), lote));
	atualizarEstoque();
}

void Produto::atualizarEstoque()
{
	estoque = 0;
	for (std::map<int, Lote>::iterator it = lotes.begin(); it != lotes.end(); ++it)
	{
		estoque += it->second.getQuantidade();
	}
}
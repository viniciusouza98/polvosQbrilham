#define MAXIMO_RECURSOS 10
#include <iostream>
class Atividade {
private:
  string nome;
  int horasNecessarias;
  Pessoa* recurso;
  Pessoa** pessoas;
  int quantidadeDePessoas;
  int duracao;
  double custo;
  /*Métodos*/
  bool jaAdicionada(Pessoa* p);


public:
  Atividade(string nome, int horasNecessarias);
  ~Atividade();

  string getNome();
  int getHorasNecessarias();

  bool adicionar(Pessoa* recurso);
  Pessoa** getPessoas();
  int getQuantidadeDePessoas();

  int getDuracao();

  double getCusto();

  void imprimir();


};

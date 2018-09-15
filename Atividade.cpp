#define MAXIMO_RECURSOS 10
#include <iostream>
#include <cmath>
#include "Atividade.h"
#include "Pessoa.h"

using namespace std;

Atividade::Atividade(string nome, int horasNecessarias): //Construtor
  nome(nome), horasNecessarias(horasNecessarias) {       //Inicialização das variáveis com 0
  duracao = 0;
  quantidadeDePessoas = 0;
  custo = 0;
}
Atividade::~Atividade(){
  cout << "Atividade " << this->nome << " apagada" << endl;
}

string Atividade::getNome(){
  return this->nome;
}
int Atividade::getHorasNecessarias(){
  return this->horasNecessarias;
}

bool Atividade::adicionar(Pessoa* recurso){
  if (this->quantidadeDePessoas>=MAXIMO_RECURSOS || jaAdicionada(recurso))
    return FALSE;
  else {
    pessoas[quantidadeDePessoas] = recurso;
    quantidadeDePessoas++;
    return TRUE;
  }
}
Pessoa** Atividade::getPessoas(){
  return this->pessoas;
}
int Atividade::getQuantidadeDePessoas(){
  return this->quantidadeDePessoas;
}

int Atividade::getDuracao(){
  if (quantidadeDePessoas==0)
    return -1
  else {
    int totaldehoras=0;
    int i=0;
    for(i=0; i<quantidadeDePessoas; i++)
      totaldehoras += pessoas[i]->getHorasDiarias;
    duracao = ceil(this->horasNecessarias/totaldehoras)
    return duracao;
  }
}

double Atividade::getCusto(){
  int i=0;
  for (i=0; i<quantidadeDePessoas; i++)
    this->custo += ((this->duracao)*(pessoas[i]->getHorasDiarias)*(pessoas[i]->getValorPorHora))
  return this->custo;
}

void Atividade::imprimir(){
  /**Implementar**/
}

/*A seguinte função retorna TRUE se uma pessoa passada como parametro
já foi adicionada ao vetor pessoas, e FALSE caso contrário*/
bool jaAdicionada(Pessoa* p) {
  int i;
  for (i=0; i<this->quantidadeDePessoas; i++) {
    if(p == pessoas[i])
      return TRUE;
  }
  return FALSE;
}

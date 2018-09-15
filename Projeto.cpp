#define MAXIMO_ATIVIDADES 10
#include "Pessoa.h"
#include "Atividade.h"
#include "Projeto.h"

Projeto::Projeto(string nome){
    //Implementar
}
Projeto::~Projeto(){
    //Implementar
}

string Projeto::getNome(){
    //Implementar
}

bool Projeto::adicionar(Atividade* a){
    //Implementar
}
Atividade** Projeto::getAtividades(){
    //Implementar
}
int Projeto::getQuantidadeDeAtividades(){
    //Implementar
}

bool Projeto::adicionarRecurso(Pessoa* p){
    //Implementar
}
Pessoa** Projeto::getPessoas(){
    //Implementar
}
int Projeto::getQuantidadeDePessoas(){
    //Implementar
}

int Projeto::getDuracao(){
    //Implementar
}
double Projeto::getCusto(){
    //Implementar
}

void Projeto::imprimir(){
    //Implementar
}

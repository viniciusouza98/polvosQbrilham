#define MAXIMO_ATIVIDADES 10

class Projeto(){
public:
  Projeto(string nome);
  ~Projeto();

  string getNome();

  bool adicionar(Atividade* a);
  Atividade** getAtividades();
  int getQuantidadeDeAtividades();

  bool adicionarRecurso(Pessoa* p);
  Pessoa** getPessoas();
  int getQuantidadeDePessoas();

  int getDuracao();
  double getCusto();

  void imprimir();

private:
  /*Criar Métodos*/
};

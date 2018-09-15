#define MAXIMO_RECURSOS 10

class Atividade {
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

private:
  /*Criar métodos*/

};

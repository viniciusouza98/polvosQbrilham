class Pessoa {
public:
  Pessoa(string nome, double valorPorHora, int horasDiarias);
  ~Pessoa();

  string getNome();
  double getValorPorHora();
  int getHorasDiarias();
  double getCusto(int dias);

  void imprimir();

private:
  /* Criar métodos que forem necessários */
};

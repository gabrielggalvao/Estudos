class Calculadora
{
  private:
    double resultado;
  
  public:
    Calculadora();
    double Somar(double a, double b);
    double Subtrair(double a, double b);
    double Multiplicar(double a, double b);
    double Dividir(double a, double b);
    double getResultado();
};
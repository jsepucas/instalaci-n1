class vehiculo {
    public:
    int ruedas
    string color;

    void mostrar() {
         cout << "Este vehiculo tiene " << ruedas << " ruedas y es de color " << color << ".\n";
      }
};

int main() {
   Vehiculo coche;
   coche.ruedas = 4;
   coche.color = "rojo";
   coche.mostrar();

   return 0;

Prueba num 2 
}
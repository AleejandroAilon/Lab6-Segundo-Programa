#include <iostream>
#include <string>
using namespace std;

class Estudiante{
	private:
		string nombre;
		string apellido;
		int edad;
		string curso;
		
	public:
		Estudiante(string n, string a, int e, string c) : nombre(n), apellido(a), edad(e), curso(c) {}
		
		void Info(string n, string a, int e, string c){
			nombre = n;
			apellido = a;
			edad = e;
			curso = c;
		}
		
		void mostrarInfo(){
			cout << "Nombre del estudiante: " << nombre << endl;
			cout << "Apellido del estudiante: " << apellido << endl;
			cout << "Edad: " << edad << endl;
			cout << "Curso: " << curso << endl;
		}

};
	
int main(){
	Estudiante estudiante1("Alejandro", "Ailon", 18, "Programacion I");
	estudiante1.mostrarInfo();
	
	return 0;
}
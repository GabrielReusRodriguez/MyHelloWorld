#include <cstdio>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;


int main() {

	cout << "Hola !";
	//Nombre de la imagen que se va a cargar
	char NombreImagen[] = "J:\\Proyectos\\OpenCV\\MyHelloWorld\\rsc\\linux.jpg";
	Mat imagen;

	//Cargamos la imagen y se comprueba que lo ha hecho correctamente
	imagen = cv::imread(NombreImagen);
	if (!imagen.data) {
		cout << "Error al cargar la imagen: " << NombreImagen <<  endl;
		exit(1);
	}

	//Mostrar la imagen
	namedWindow("Original", CV_WINDOW_AUTOSIZE);
	imshow("Original", imagen);

	//Esperar a que se pulse una tecla.
	waitKey(0);
	return 0;

}
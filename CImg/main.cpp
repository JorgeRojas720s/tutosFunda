#include <iostream>
#include "CImg.h"

using namespace std;
using namespace cimg_library;

CImg<unsigned char> image("car.jpg"); //es 699x699


void negativeFilter(int width, int height) {

	for (int i = 0; i < width; i++) {
		for (int k = 0; k < height; k++) {
			*image.data(i, k, 0) = *image.data(i, k, 0) * 0.299; //canal R
			*image.data(i, k, 1) = *image.data(i, k, 1) * 0.587;//canal G
			*image.data(i, k, 2) = *image.data(i, k, 2) * 0.114; //canal B
		}
	}



}


void hotFilter(int width, int height) {

	for (int i = 0; i < width; i++) {
		for (int k = 0; k < height; k++) {

			if ((*image.data(i, k, 0) * 1.3) > 255) {
				*image.data(i, k, 0) = 255;
			}
			else {
				*image.data(i, k, 0) = *image.data(i, k, 0) * 1.3;
			}
		}
	}

}

void before() {

	CImgDisplay before(image, "Antes");

	while (!before.is_closed()) {
		before.wait();
	}


}


void after() {
	CImgDisplay display(image, "Despues");

	while (!display.is_closed()) {
		display.wait();
	}


}

int main() {


	cout << "Test CImg" << endl;

	int width, height;
	width = image.width();
	height = image.height();

	//before();

	negativeFilter(width, height);
	//hotFilter(width, height);

	after();

	return 0;
}
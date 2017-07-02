
#include "bmc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[]){
	QApplication a(argc, argv);
	bmc w;
	w.show();
	cout << "ola k ase" << endl;
	return a.exec();
}

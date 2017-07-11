
#include "bmc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[]){

	QApplication a(argc, argv);
	bmc w;
	w.show();
	
	return a.exec();
}

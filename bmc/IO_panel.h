
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>
#include <QProgressBar>
#include <QLabel>

#include <QtWidgets/QMainWindow>


#include "ui_bmc.h"

class IOpanel 
{
public:
	Ui_bmcClass *ui;

	IOpanel(Ui_bmcClass *_m) {
		ui = _m;
	}



	void load();

	~IOpanel() {}
};
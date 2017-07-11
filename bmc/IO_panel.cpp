#include "IO_panel.h"

void IOpanel::load() {
	QPixmap pixmap("icons/file_import_original.png");
	QIcon ButtonIcon(pixmap);
	ui->btn_import->setIcon(ButtonIcon);
	ui->btn_import->setIconSize(pixmap.rect().size());
	

	/*
	button->setIcon(ButtonIcon);
	button->setIconSize(pixmap.rect().size());*/
}
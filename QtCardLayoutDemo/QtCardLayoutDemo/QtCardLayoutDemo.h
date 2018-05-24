#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCardLayoutDemo.h"
class QLabel;

class QtCardLayoutDemo : public QMainWindow
{
	Q_OBJECT

public:
	QtCardLayoutDemo(QWidget *parent = Q_NULLPTR);

private:

	QLabel *createLabel(const QString &text);

	void  CardLayoutTest();
	void  FlowLayoutTest();
	void  BorderLayoutTest();

private:
	Ui::QtCardLayoutDemoClass ui;
};

#include "QtCardLayoutDemo.h"
#include "QCardLayout.h"
#include "QFlowLayout.h"
#include "QBorderLayout.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QBoxLayout>
#include <QGridLayout>
#include <QDebug>
#include <QFormLayout>
#include <QLineEdit>
#include <QTextBrowser>
#include <QLabel>

//#define QCARD
#define QFLOW
//#define QBORER

QtCardLayoutDemo::QtCardLayoutDemo(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);
#ifdef QCARD
	CardLayoutTest();
#else
#ifdef QFLOW
	FlowLayoutTest();
#else
	BorderLayoutTest();
#endif
#endif
	
}

QLabel* QtCardLayoutDemo::createLabel(const QString &text)
{
	QLabel *pLabel = new QLabel(this);
	pLabel->setText(text);
	pLabel->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	pLabel->setFrameStyle(QFrame::Box | QFrame::Raised);
	return pLabel;
}

void QtCardLayoutDemo::CardLayoutTest()
{
	QPushButton* button1 = new QPushButton("button1", this);
	QPushButton* button2 = new QPushButton("button2", this);
	QPushButton* button3 = new QPushButton("button3", this);
	QPushButton* button4 = new QPushButton("button4", this);
	QWidget* widget = new QWidget;
	setCentralWidget(widget);

	QLayout* layout = new QCardLayout;
	layout->addWidget(button1);
	layout->addWidget(button2);
	layout->addWidget(button3);
	layout->addWidget(button4);

	widget->setLayout(layout);
}

void QtCardLayoutDemo::FlowLayoutTest()
{
	QPushButton* button1 = new QPushButton("button1", this);
	QPushButton* button2 = new QPushButton("button2", this);
	QPushButton* button3 = new QPushButton("button3", this);
	QPushButton* button4 = new QPushButton("button4", this);
	QPushButton* button5 = new QPushButton("button5", this);
	QPushButton* button6 = new QPushButton("button6", this);
	QPushButton* button7 = new QPushButton("button7", this);
	QPushButton* button8 = new QPushButton("button8", this);
	QPushButton* button9 = new QPushButton("button9", this);
	QPushButton* button10 = new QPushButton("button10", this);
	QPushButton* button11 = new QPushButton("button11", this);

	QWidget* widget = new QWidget;
	setCentralWidget(widget);

	QLayout* layout = new QFlowLayout;
	layout->addWidget(button1);
	layout->addWidget(button2);
	layout->addWidget(button3);
	layout->addWidget(button4);
	layout->addWidget(button5);
	layout->addWidget(button6);
	layout->addWidget(button7);
	layout->addWidget(button8);
	layout->addWidget(button9);
	layout->addWidget(button10);
	layout->addWidget(button11);

	widget->setLayout(layout);
}


void  QtCardLayoutDemo::BorderLayoutTest()
{
	QWidget* widget = new QWidget;
	setCentralWidget(widget);
	QTextBrowser* pCentralWidget = new QTextBrowser(this);
	pCentralWidget->setPlainText(tr("Central Widget"));
	pCentralWidget->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);

	QBorderLayout *pLayout = new QBorderLayout;
	pLayout->addWidget(pCentralWidget, QBorderLayout::Center);
	pLayout->addWidget(createLabel("North"), QBorderLayout::North);
	pLayout->addWidget(createLabel("West"), QBorderLayout::West);
	pLayout->addWidget(createLabel("East 1"), QBorderLayout::East);
	pLayout->addWidget(createLabel("East 2"), QBorderLayout::East);
	pLayout->addWidget(createLabel("South"), QBorderLayout::South);

	widget->setLayout(pLayout);
}
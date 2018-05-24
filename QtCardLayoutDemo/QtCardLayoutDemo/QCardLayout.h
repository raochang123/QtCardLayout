#pragma once
#include <QLayoutItem>
#include <QRect>
#include <QLayoutItem>
#include <QLayout>

class QCardLayout :public QLayout
{
	Q_OBJECT
public:
	QCardLayout(QWidget* widget = NULL);
	~QCardLayout();

	void addItem(QLayoutItem* item) override;
	QSize sizeHint() const;
	QSize minimumSize() const;
	int count() const;

	QLayoutItem* itemAt(int index) const override;
	QLayoutItem* takeAt(int index) override;

	void setGeometry(const QRect &rect) override;

private:

	QList<QLayoutItem*> list;
	
};


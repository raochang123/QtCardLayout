#include "QCardLayout.h"

QCardLayout::QCardLayout(QWidget* widget) :QLayout(widget)
{
	setSpacing(20);
}

QCardLayout::~QCardLayout()
{
	QLayoutItem *item = NULL;
	while ((item = takeAt(0)))
		delete item;
}

void QCardLayout::addItem(QLayoutItem* item)
{
	list.append(item);
}


QSize QCardLayout::sizeHint()   const
{
	QSize s(0, 0);
	int n = list.count();
	if (n > 0)
		s = QSize(100, 70);
	int i = 0;
	while (i < n) {
		QLayoutItem *o = list.at(i);
		s = s.expandedTo(o->sizeHint());
		++i;
	}
	return s + n*QSize(spacing(), spacing());

}

QSize QCardLayout::minimumSize() const
{
	QSize s(0, 0);
	int n = list.count();
	int i = 0;
	while (i < n) {
		QLayoutItem *o = list.at(i);
		s = s.expandedTo(o->minimumSize());
		++i;
	}

	return s + n*QSize(spacing(), spacing());
}

int QCardLayout::count() const
{
	return list.size();
}

QLayoutItem* QCardLayout::itemAt(int idx) const
{

	if (idx < 0 || idx >= count()) return NULL;
	return list.value(idx);
}

QLayoutItem* QCardLayout::takeAt(int idx)
{
	return idx >= 0 && idx < list.size() ? list.takeAt(idx) : 0;
}

void QCardLayout::setGeometry(const QRect& r)
{
	QLayout::setGeometry(r);

	if (list.size() == 0)
		return;

	int w = r.width() - (list.count() - 1) * spacing();
	int h = r.height() - (list.count() - 1) * spacing();
	int i = 0;
	while (i < list.size()) {
		QLayoutItem *o = list.at(i);
		QRect geom(r.x() + i * spacing(), r.y() + i * spacing(), w, h);
		o->setGeometry(geom);
		++i;
	}
}
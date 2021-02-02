#ifndef PRINC_H
#define PRINC_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Princ; }
QT_END_NAMESPACE

class Princ : public QMainWindow
{
    Q_OBJECT

public:
    Princ(QWidget *parent = nullptr);
    ~Princ();

public:
    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::Princ *ui;
};
#endif // PRINC_H

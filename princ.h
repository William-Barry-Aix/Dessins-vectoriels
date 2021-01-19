#ifndef PRINC_H
#define PRINC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Princ; }
QT_END_NAMESPACE

class Princ : public QMainWindow
{
    Q_OBJECT

public:
    Princ(QWidget *parent = nullptr);
    ~Princ();

private:
    Ui::Princ *ui;
};
#endif // PRINC_H

#ifndef Q_CARMER_H
#define Q_CARMER_H

#include <QWidget>

namespace Ui {
class Q_carmer;
}

class Q_carmer : public QWidget
{
    Q_OBJECT

public:
    explicit Q_carmer(QWidget *parent = nullptr);
    ~Q_carmer();

private:
    Ui::Q_carmer *ui;
};

#endif // Q_CARMER_H

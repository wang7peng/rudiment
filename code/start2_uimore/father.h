#ifndef FATHER_H
#define FATHER_H

#include <QMainWindow>

#include "childwin.h"

#define SCREEN_WIDTH 1440
#define SCREEN_HIGH 900

namespace Ui {
class father;
}

class father : public QMainWindow {
    Q_OBJECT

   public:
    explicit father(QWidget *parent = 0);
    virtual ~father();

   private slots:
    void on_openSon_clicked();

   private:
    Ui::father *ui;
    childWin *child;
};

#endif  // FATHER_H

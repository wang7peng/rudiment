#ifndef CHILDWIN_H
#define CHILDWIN_H

#include <QDialog>

#include "father.h"

namespace Ui {
class ChildWin;
}

class Cfather;

class ChildWin : public QDialog {
    Q_OBJECT

   public:
    explicit ChildWin(QWidget *parent = 0);
    ~ChildWin();

   private slots:
    void on_btnBox_accepted();
    void on_btnBox_rejected();

   private:
    Ui::ChildWin *ui;
    Cfather *father;
};

#endif  // CHILDWIN_H

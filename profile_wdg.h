#ifndef PROFILE_WDG_H
#define PROFILE_WDG_H

#include <QWidget>

namespace Ui {
class ProfileWdg;
}

class ProfileWdg : public QWidget {
  Q_OBJECT

 public:
  explicit ProfileWdg(QWidget *parent = nullptr);
  ~ProfileWdg();

 private slots:
  void on_exit_btn_clicked();

  void on_create_portfolio_btn_clicked();

 private:
  Ui::ProfileWdg *ui;
};

#endif  // PROFILE_WDG_H

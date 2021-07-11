#ifndef PORTFOLIO_TITLE_DLG_H
#define PORTFOLIO_TITLE_DLG_H

#include <QDialog>

namespace Ui {
class PortfolioTitleDlg;
}

class PortfolioTitleDlg : public QDialog {
  Q_OBJECT

 public:
  explicit PortfolioTitleDlg(QWidget *parent = nullptr);
  ~PortfolioTitleDlg();

  QString portfolio_title;

 private slots:
  void on_ok_btn_clicked();
  void on_cancel_btn_clicked();

 private:
  Ui::PortfolioTitleDlg *ui;
};

#endif  // PORTFOLIO_TITLE_DLG_H

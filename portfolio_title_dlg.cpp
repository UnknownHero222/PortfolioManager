#include "portfolio_title_dlg.h"

#include "ui_portfolio_title_dlg.h"

PortfolioTitleDlg::PortfolioTitleDlg(QWidget *parent)
    : QDialog(parent), ui(new Ui::PortfolioTitleDlg) {
  ui->setupUi(this);
}

PortfolioTitleDlg::~PortfolioTitleDlg() { delete ui; }

void PortfolioTitleDlg::on_ok_btn_clicked() {
  portfolio_title = ui->portfolio_title_pln->toPlainText();
  accept();
}

void PortfolioTitleDlg::on_cancel_btn_clicked() { reject(); }

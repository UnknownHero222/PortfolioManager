#include "profile_wdg.h"

#include "portfolio_title_dlg.h"
#include "ui_profile_wdg.h"

ProfileWdg::ProfileWdg(QWidget *parent)
    : QWidget(parent), ui(new Ui::ProfileWdg) {
  ui->setupUi(this);
}

ProfileWdg::~ProfileWdg() { delete ui; }

void ProfileWdg::on_exit_btn_clicked() { close(); }

void ProfileWdg::on_create_portfolio_btn_clicked() {
  PortfolioTitleDlg title_dlg;

  auto dlg_result = title_dlg.exec();
  if (dlg_result == QDialog::Accepted) {
    // TODO open manager window
  }
}

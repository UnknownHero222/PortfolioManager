#include "profile_wdg.h"

#include "portfolio_title_dlg.h"
#include "ui_profile_wdg.h"

ProfileWdg::ProfileWdg(QWidget *parent)
    : QWidget(parent), ui(new Ui::ProfileWdg) {
  ui->setupUi(this);

  if (ui->portfolio_names_box->count() > 0) {
    ui->enter_btn->setEnabled(true);
  }
}

ProfileWdg::~ProfileWdg() { delete ui; }

void ProfileWdg::on_new_btn_clicked() {
  PortfolioTitleDlg dlg;
  if (dlg.exec() == QDialog::Accepted) {
    ui->portfolio_names_box->addItem(dlg.portfolio_title);
    ui->enter_btn->setEnabled(true);
  }
}

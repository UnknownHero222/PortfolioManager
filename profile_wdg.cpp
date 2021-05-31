#include "profile_wdg.h"

#include "ui_profile_wdg.h"

ProfileWdg::ProfileWdg(QWidget *parent)
    : QWidget(parent), ui(new Ui::ProfileWdg) {
  ui->setupUi(this);
}

ProfileWdg::~ProfileWdg() { delete ui; }

void ProfileWdg::on_exit_btn_clicked() { close(); }

#include <QApplication>

#include "portfolio_manager.h"
#include "profile_wdg.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  ProfileWdg w;
  w.show();
  return a.exec();
}

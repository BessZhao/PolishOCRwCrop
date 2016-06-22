/*Polish OCR
 * Name: Bess Zhao;Jennifer Okamura;Jack Wu;Simon Hua;Zane Karl
 *
 * Turn gif image of polish articles into txt file
*/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    return app.exec();
}

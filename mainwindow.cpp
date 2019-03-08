#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <fstream>
#include <QMessageBox>
using namespace std;
int ecken;
int sizeer;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(3);
    ui->spinBox->setValue(3);
    ui->spinBox_2->setMinimum(3);
    ui->spinBox_2->setMaximum(160);
    ui->spinBox_2->setValue(100);
    this->setFixedSize(this->width(), this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    system("start http://python.org");
}

void MainWindow::on_pushButton_3_clicked()
{
    system("start http://services.sharkbyte.bplaced.net");
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ecken = arg1;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    sizeer = arg1;
}

void MainWindow::on_GEN_clicked()
{
    system("md C:\\temp");
    ofstream data{"C:\\temp\\file.py", std::ios::trunc};
    if (data.fail()){
        QMessageBox mb;
        mb.setText("FEHLER, in filestream");
        mb.exec();
    }
    data << "# <C>Sharkbyteprojects" << endl;
    data << "# http://services.sharkbyte.bplaced.net" << endl;
    data << "information = '<C>Sharkbyteprojects  http://services.sharkbyte.bplaced.net' " << endl;
    data << "###########" << endl;
    data << "ecken =" << ecken << "#" << endl;
    data << "###########" << endl;
    data << "print(information)" << endl;
    data << "import turtle" << endl;
    data << "import time" << endl;
    data << "turtle.title(\"SHARKBYTE WINKLER\")" << endl;
    data << "turtle.pen()" << endl;
    data << "winkel = (180+180)/" << ecken << endl;
    data << "for x in range (0, ecken):" << endl;
    data << "    turtle.forward("<< sizeer <<")" << endl;
    data << "    turtle.left(winkel)" << endl;
    data << "time.sleep(8)" << endl;
    data.close();
}

void MainWindow::on_pushButton_clicked()
{
    system("md C:\\temp");
    ofstream data{"C:\\temp\\file.py", std::ios::trunc};
    if (data.fail()){
        QMessageBox mb;
        mb.setText("FEHLER, in filestream");
        mb.exec();
    }
    data << "# <C>Sharkbyteprojects" << endl;
    data << "# http://services.sharkbyte.bplaced.net" << endl;
    data << "information = '<C>Sharkbyteprojects  http://services.sharkbyte.bplaced.net' " << endl;
    data << "###########" << endl;
    data << "ecken =" << ecken << "#" << endl;
    data << "###########" << endl;
    data << "print(information)" << endl;
    data << "import turtle" << endl;
    data << "import time" << endl;
    data << "turtle.title(\"SHARKBYTE WINKLER\")" << endl;
    data << "turtle.pen()" << endl;
    data << "winkel = (180+180)/" << ecken  << endl;
    data << "for x in range (0, ecken):" << endl;
    data << "    turtle.forward("<< sizeer <<")" << endl;
    data << "    turtle.left(winkel)" << endl;
    data << "time.sleep(8)" << endl;
    data.close();
    system("python C:\\temp\\file.py");
}

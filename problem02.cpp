#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Problem #1");
    window.resize(500, 500);
    window.show();

    return QApplication::exec();
}

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    auto *window = new QWidget;
    window->setWindowTitle("Problem #2");
    window->resize(500, 500);


    auto *canvas = new QWidget(window);
    canvas->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *toolbar = new QWidget(window);
    auto *redButton   = new QPushButton("Red", toolbar);
    auto *greenButton = new QPushButton("Green", toolbar);
    auto *blueButton  = new QPushButton("Blue", toolbar);



    auto *buttonLayout = new QHBoxLayout(toolbar);
    buttonLayout->addWidget(redButton);
    buttonLayout->addWidget(greenButton);
    buttonLayout->addWidget(blueButton);
    toolbar->setLayout(buttonLayout);


    auto *mainLayout = new QVBoxLayout(window);
    mainLayout->addWidget(canvas);
    mainLayout->addWidget(toolbar);
    window->setLayout(mainLayout);
    window->show();

    return QApplication::exec();
}
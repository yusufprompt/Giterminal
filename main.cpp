#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Ana pencere oluşturma
    QWidget window;

    // Pencere başlığını ayarlama
    window.setWindowTitle("Basit Qt Uygulaması");

    // Bir etiket (label) oluşturma
    QLabel *label = new QLabel("Merhaba, Qt!");

    // Bir düğme (button) oluşturma
    QPushButton *button = new QPushButton("Tıkla");

    // Düğmeye tıklandığında yapılacak işlemi belirleme
    QObject::connect(button, &QPushButton::clicked, [&]() {
        label->setText("Düğmeye Tıklandı!");
    });

    // Bir düzen (layout) oluşturma
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button);

    // Pencereye düzeni ekleyerek ayarlama
    window.setLayout(layout);

    // Pencereyi gösterme
    window.show();

    // Uygulamayı başlatma
    return app.exec();
}

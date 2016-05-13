#include <iostream>
#include "main.h"

using namespace std;

int main() {
//    zuweisung1();
//    zuweisung2();
//    zuweisung3();
//    zuweisung4();
//    zuweisung5();
//    zuweisung6();
//    zuweisung7();
//    zuweisung8();
//    zuweisung9();

//    verzweigungen1();
//    verzweigungen2();
//    verzweigungen3();
//    verzweigungen4();
//    verzweigungen5();
//    verzweigungen6a();
//    verzweigungen6b();
//    verzweigungen6c();

//    schleifen1();
//    schleifen2();
//    schleifen3();
//    schleifen4();
//    schleifen5();
//    schleifen6();
//    schleifen7();
//    schleifen8();
//    schleifen9();
//    schleifen10();

    return 0;
}

// ZUWEISUNGEN
// =====================================================================================================================
// Schreiben Sie ein Programm...

// 1) ...das den Anwender nach drei Zahlen fragt. Das Programm soll den Durchschnittswert der drei Zahlen berechnen und das Ergebnis ausgeben.
void zuweisung1() {

}

// 2) ...das nach dem aktuellen Mehrwertsteuersatz in Prozent fragt. Anschließend soll der Anwender einen Nettopreis eingeben und das Programm liefert den zugehörigen Bruttopreis.
void zuweisung2() {

}

// 3) ...das den Anwender nach zwei ganzen Zahlen fragt. Das Programm soll das Ergebnis der Ganzzahldivision und den Rest der Division berechnen und die Ergebnisse ausgeben.
// Bsp: 3 / 4  0 , Rest  3
void zuweisung3() {

}

// 4) ...das den Anwender nach den Längen der Grundlinie und der Höhe eines Dreiecks fragt. Das Programm soll den Flächeninhalt des Dreiecks ausrechnen und ausgeben.
void zuweisung4() {

}

// 5) ...das den Anwender nach der Seitenlänge eines Quadrats fragt. Das Programm soll die Länge der Diagonale berechnen und ausgeben.
// Anleitung: Als 2. Programmzeile: #include<math.h> einfügen, die Datei math.h enthält alle mathematischen Funktionen, die zur Verfügung stehen, sqrt(z) entspricht
//         z , wobei z und das Ergebnis vom Typ double sind.
void zuweisung5() {

}

// 6) ...das den Anwender nach dem Radius eines Kreises fragt. Das Programm soll Umfang und Flächeninhalt des Kreises berechnen und ausgeben.
// Anleitung: Als 2. Programmzeile: #include<math.h> einfügen, die Datei math.h enthält alle mathematischen Funktionen, die zur Verfügung stehen, M_PI entspricht hinreichend genau  .
void zuweisung6() {

}

// 7) ...das den Anwender nach den Radien zweier konzentrischer Kreise fragt, den Flächeninhalt des zugehörigen Kreisringes berechnet, und das Ergebnis ausgibt.
void zuweisung7() {

}

// 8) ...das den Anwender nach dem Basisradius und der Höhe eines Zylinders fragt, seine Oberfläche und sein Volumen berechnet, und die Ergebnisse ausgibt.
void zuweisung8() {

}

// 9) ...das den Anwender nach dem Basisradius und der Höhe eines Kegels fragt, seine Oberfläche und sein Volumen berechnet, und die Ergebnisse ausgibt.
void zuweisung9() {

}


// VERZWEIGUNGEN
// =====================================================================================================================

// 1) Schreiben Sie ein Programm, welches den Anwender nach seinem Alter fragt.
//    Das Programm soll dann ausgeben, ob der Anwender volljährig oder minderjährig ist.
void verzweigungen1() {
    int alter;
    cout << "Wie alt bist du?" << endl;
    cout << ">> " << endl;
    cin >> alter;
    if (alter >= 18) {
        cout << "Du bist volljaehrig." << endl;
    } else {
        cout << "Du bist minderjaehrig." << endl;
    }
}

// 2) Schreiben Sie ein Programm, welches den Anwender nach einer ganzen Zahl fragt.
//    Das Programm soll dann ausgeben, ob die Zahl negativ, 0 oder positiv ist.
void verzweigungen2() {
    int zahl;
    cout << "Gib eine ganze Zahl ein: ";
    cin >> zahl;
    if (zahl < 0) {
        cout << "Die Zahl ist kleiner als 0." << endl;
    } else if (zahl == 0) {
        cout << "Die Zahl ist 0." << endl;
    } else {
        cout << "Die Zahl ist groesser als 0." << endl;
    }
}

// 3) Es soll ein Programm geschrieben werden, das den Anwender nach zwei Zahlen fragt.
//    Das Programm soll bestimmen und ausgeben, ob die zweite Zahl ein Teiler der ersten Zahl ist.
void verzweigungen3() {
    int zahl1, zahl2;

    cout << "Gib bitte zwei Zahlen ein." << endl;
    cout << "Zahl 1: ";
    cin >> zahl1;
    cout << "Zahl 2: ";
    cin >> zahl2;

    if (zahl1 % zahl2 == 0) {
        cout << "Zahl 2 ist Teiler von Zahl1." << endl;
    } else {
        cout << "Zahl 2 ist NICHT Teiler von Zahl 1." << endl;
    }
}

// 4) Schreiben Sie ein Programm, das nach einer Zahl fragt und anschließend bestimmt, ob die Zahl gerade oder ungerade ist.
void verzweigungen4() {

}

// 5) Schreiben Sie ein Programm, welches drei Zahlen eingeben lässt und dann die größte der drei Zahlen ausgibt.
void verzweigungen5() {

}

// 6) Es soll eine Jahreszahl eingegeben werden. Das Programm bestimmt, ob es sich bei dem eingegebenen Jahr um ein Schaltjahr handelt.
// 6.a) Zunächst soll die einfache Regel programmiert werden, nach der jedes durch 4 teilbare Jahr ein Schaltjahr ist.
void verzweigungen6a() {

}

// 6.b) Das Schaltjahrprogramm soll durch eine weitere Regel ergänzt werden:
//      Ist das Jahr durch 4 teilbar und durch 100 teilbar, dann ist es doch kein Schaltjahr.
void verzweigungen6b() {

}

// 6.c) Das Schaltjahrprogramm soll durch eine weitere Regel ergänzt werden:
//      Ist das Jahr durch 4, durch 100 und durch 400 teilbar, dann ist es doch wieder ein Schaltjahr.
void verzweigungen6c() {

}


// SCHLEIFEN
// =====================================================================================================================

// 1) Schreiben Sie ein Programm, welches die natürlichen Zahlen von 1 bis 10 ausgibt.
void schleifen1() {

}

// 2) Schreiben Sie ein Programm, welches die natürlichen Zahlen von 1 bis 20 ausgibt und ihre Summe berechnet.
void schleifen2() {

}

// 3) Schreiben Sie ein Programm, welches die natürlichen Zahlen von 1 bis 10 ausgibt, die Zahl 7 jedoch nicht.
void schleifen3() {

}

// 4) Schreiben Sie ein Programm, welches alle Zahlen von 30 bis 90 in 5er-Schritten ausgibt (30, 35, 40, 45, ..., 85, 90).
void schleifen4() {

}

// 5) Schreiben Sie ein Programm, welches nach einem Start- und einem Endwert fragt (beide positiv und ganzzahlig). Das Programm soll dann alle Zahlen einschließlich des Start- und Endwertes ausgeben. Bedenken Sie, dass das Programm die Zahlen absteigend ausgeben muss, wenn der Startwert größer als der Endwert ist.
void schleifen5() {

}

// 6) Schreiben Sie ein Programm, welches solange den Text “Zahl eingeben [1, 100]: “ ausgibt, bis der Benutzer eine gültige Zahl eingibt.
void schleifen6() {

}

// 7) Schreiben Sie ein Programm, welches ein Rechteck von mxn Sternen ausgibt (siehe Abbildung: m=5, n=3). Die natürlichen Zahlen m und n werden vom Benutzer vorgegeben.
//*****
//*****
//*****
void schleifen7() {

}

// 8) Schreiben Sie ein Programm, welches ein rechtwinkeliges Dreieck von Sternen ausgibt, dessen Höhe n vom Benutzer vorgegeben wird (siehe Abbildung: n=5).
//*
//**
//***
//****
//*****
void schleifen8() {

}

// 9) Erweitern Sie eines der obigen Programme dahingehend, dass der Benutzer nach Ablauf des Programmes gefragt wird, ob das Programm wiederholt werden soll. Je nach Antwort soll das Programm beendet oder neuerlich gestartet werden.
void schleifen9() {

}

// 10) Schreiben Sie ein Programm, welches eine Folge von positiven ganzen Zahlen einliest. Mit der Zahl 0 wird die Folge abgebrochen, dann wird die größte der eingegebenen Zahlen ausgegeben.
void schleifen10() {

}


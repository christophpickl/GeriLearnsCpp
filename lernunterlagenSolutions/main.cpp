
#include <iostream>
#include <math.h>

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

// 1) ... das den Anwender nach drei Zahlen fragt.
//    Das Programm soll den Durchschnittswert der drei Zahlen berechnen und das Ergebnis ausgeben.
void zuweisung1() {
    double zahl1, zahl2, zahl3;

    cout << "Gib bitte drei Zahlen ein:" << endl;
    cout << "Zahl 1: ";
    cin >> zahl1;
    cout << "Zahl 2: ";
    cin >> zahl2;
    cout << "Zahl 3: ";
    cin >> zahl3;

    double durchschnitt = (zahl1 + zahl2 + zahl3) / 3.0;

    cout << "Durchschnitt: " << durchschnitt << endl;
}

// 2) ... das nach dem aktuellen Mehrwertsteuersatz in Prozent fragt.
//    Anschließend soll der Anwender einen Nettopreis eingeben und das Programm liefert den zugehörigen Bruttopreis.
void zuweisung2() {
    int mwstInProzent;
    double nettoPreis, bruttoPreis;

    cout << "Bitte gib den aktuellen Mehrwertsteuersatz in Prozent ein: ";
    cin >> mwstInProzent;
    cout << "Und nun den Nettopreis: ";
    cin >> nettoPreis;

    bruttoPreis = nettoPreis / 100 * (100 + mwstInProzent);

    cout << "Errechnter Bruttopreis: " << bruttoPreis;

}

// 3) ... das den Anwender nach zwei ganzen Zahlen fragt.
//    Das Programm soll das Ergebnis der Ganzzahldivision und den Rest der Division berechnen und die Ergebnisse ausgeben.
//    Bsp: 3 / 4 = 0 , Rest = 3
void zuweisung3() {
    int zahl1, zahl2, division, rest;

    cout << "Bitte gib zwei ganze Zahlen ein:" << endl;
    cin >> zahl1;
    cin >> zahl2;

    division = zahl1 / zahl2;
    rest = zahl1 % zahl2;

    cout << "Resultat: " << zahl1 << " / " << zahl2 << " = " << division << " , Rest = " << rest << endl;
}

// 4) ... das den Anwender nach den Längen der Grundlinie und der Höhe eines Dreiecks fragt.
//    Das Programm soll den Flächeninhalt des Dreiecks ausrechnen und ausgeben.
void zuweisung4() {
    double dreieckLinie, dreieckHoehe;

    cout << "Bitte gib die Längen der Grundlinie und der Höhe eines Dreiecks an:" << endl;
    cin >> dreieckLinie;
    cin >> dreieckHoehe;

    double flaeche = dreieckLinie * dreieckHoehe * 2.0;

    cout << "Der Flaecheninhalt betraegt: " << flaeche << endl;
}

// 5) ... das den Anwender nach der Seitenlänge eines Quadrats fragt.
//    Das Programm soll die Länge der Diagonale berechnen und ausgeben.
//    Anleitung: Als 2. Programmzeile: #include<math.h> einfügen, die Datei math.h enthält alle mathematischen Funktionen, die zur Verfügung stehen
//    sqrt(z) entspricht z, wobei z und das Ergebnis vom Typ double sind.
void zuweisung5() {
    double seitenlaenge, diagonale, diagonaleZweiKommastellen;

    cout << "Bitte die Seitenlänge des Quadrats ein: ";
    cin >> seitenlaenge;

    diagonale = sqrt(2.0) * seitenlaenge; // fuer 2: "2.82843"
    diagonaleZweiKommastellen = round(diagonale * 100.0) / 100.0; // fuer 2: "2.83"

    cout << "Die Diagonale betraegt: " << diagonaleZweiKommastellen << endl;
}

// 6) ... das den Anwender nach dem Radius eines Kreises fragt.
//    Das Programm soll Umfang und Flächeninhalt des Kreises berechnen und ausgeben.
//    Anleitung: Als 2. Programmzeile: #include<math.h> einfügen,
//    die Datei math.h enthält alle mathematischen Funktionen, die zur Verfügung stehen, M_PI entspricht hinreichend genau...
void zuweisung6() {
    double radius, umfang, flaecheninhalt;

    cout << "Bitte gib den Radius des Kreises ein: ";
    cin >> radius;

    umfang = 2 * M_PI * radius;
    flaecheninhalt = M_PI * pow(radius, 2.0);

    cout << "Umfang: " << umfang << " , Flaecheninhalt: " << flaecheninhalt << endl;
}

// 7) ... das den Anwender nach den Radien zweier konzentrischer Kreise fragt, den Flächeninhalt des zugehörigen Kreisringes berechnet, und das Ergebnis ausgibt.
void zuweisung7() {
    double radius1, radius2, flaecheKreisring;

    cout << "Bitte zwei Radien konzentrischer Kreise eingeben:" << endl;
    cin >> radius1;
    cin >> radius2;

    flaecheKreisring = M_PI * (pow(radius1, 2) - pow(radius2, 2));

    cout << "Flaeche des Kreisringes ist: " << flaecheKreisring << endl;
}

// 8) ... das den Anwender nach dem Basisradius und der Höhe eines Zylinders fragt,
//    seine Oberfläche und sein Volumen berechnet, und die Ergebnisse ausgibt.
void zuweisung8() {
    double radius, hoehe;
    double oberflaeche, volumen;

    cout << "Bitte gib den Radius und die Hoehe des Zylinders ein:" << endl;
    cin >> radius;
    cin >> hoehe;

    oberflaeche = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * hoehe;
    volumen = M_PI * pow(radius, 2) * hoehe;

    cout << "Oberflaeche: " << oberflaeche << " , Volumen: " << volumen << endl;
}

// 9) ... das den Anwender nach dem Basisradius und der Höhe eines Kegels fragt,
//    seine Oberfläche und sein Volumen berechnet, und die Ergebnisse ausgibt.
void zuweisung9() {
    double radius, hoehe;
    double seitenlinie, oberflaeche, volumen;

    cout << "Bitte gib den Radius und die Hoehe des Kegels ein:" << endl;
    cin >> radius;
    cin >> hoehe;

    seitenlinie = sqrt(pow(radius, 2) + pow(hoehe, 2));
    oberflaeche = M_PI * pow(radius, 2) + M_PI * radius * seitenlinie;
    volumen = (1.0/3.0) * M_PI * pow(radius, 2) * hoehe;

    cout << "Oberflaeche: " << oberflaeche << " , Volumen: " << volumen << endl;
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
    int zahl;

    cout << "Bitte eine Zahl eingeben: ";
    cin >> zahl;

    if (zahl % 2 == 0) {
        cout << "Die Zahl ist gerade." << endl;
    } else {
        cout << "Die Zahl ist ungerade." << endl;
    }
}

// 5) Schreiben Sie ein Programm, welches drei Zahlen eingeben lässt und dann die größte der drei Zahlen ausgibt.
void verzweigungen5() {
    int zahl1, zahl2, zahl3, groesste;
    cout << "Bitte drei Zahlen eingeben:" << endl;
    cin >> zahl1;
    cin >> zahl2;
    cin >> zahl3;

    if (zahl1 > zahl2 && zahl1 > zahl3) {
        groesste = zahl1;
    } else if (zahl2 > zahl1 && zahl2 > zahl3) {
        groesste = zahl2;
    } else {
        groesste = zahl3;
    }
    // oder: max(zahl1, max(zahl2, zahl3))

    cout << "Die groesste Zahl der drei Zahlen ist: " << groesste << endl;
}

// 6) Es soll eine Jahreszahl eingegeben werden.
//    Das Programm bestimmt, ob es sich bei dem eingegebenen Jahr um ein Schaltjahr handelt.

// 6.a) Zunächst soll die einfache Regel programmiert werden, nach der jedes durch 4 teilbare Jahr ein Schaltjahr ist.
void verzweigungen6a() {
    int jahr;

    cout << "Bitte eine Jahreszahl eingeben: ";
    cin >> jahr;

    if (jahr % 4 == 0) {
        cout << "Das eingebenen Jahr ist _ein_ Schaltjahr." << endl;
    } else {
        cout << "Das eingebenen Jahr ist _kein_ Schaltjahr." << endl;
    }
}

// 6.b) Das Schaltjahrprogramm soll durch eine weitere Regel ergänzt werden:
//      Ist das Jahr durch 4 teilbar und durch 100 teilbar, dann ist es doch kein Schaltjahr.
void verzweigungen6b() {
    int jahr;

    cout << "Bitte eine Jahreszahl eingeben: ";
    cin >> jahr;

    if (jahr % 4 == 0 && jahr % 100 != 0) {
        cout << "Das eingebenen Jahr ist _ein_ Schaltjahr." << endl;
    } else {
        cout << "Das eingebenen Jahr ist _kein_ Schaltjahr." << endl;
    }
}

// 6.c) Das Schaltjahrprogramm soll durch eine weitere Regel ergänzt werden:
//      Ist das Jahr durch 4, durch 100 und durch 400 teilbar, dann ist es doch wieder ein Schaltjahr.
void verzweigungen6c() {
    int jahr;

    cout << "Bitte eine Jahreszahl eingeben: ";
    cin >> jahr;

    if ((jahr % 4 == 0) && (jahr % 100 != 0 || jahr % 400 == 0)) {
        cout << "Das eingebenen Jahr ist _ein_ Schaltjahr." << endl;
    } else {
        cout << "Das eingebenen Jahr ist _kein_ Schaltjahr." << endl;
    }
}


// SCHLEIFEN
// =====================================================================================================================

// 1) Schreiben Sie ein Programm, welches die natürlichen Zahlen von 1 bis 10 ausgibt.
void schleifen1() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    // oder kompakt in einer zeile ausgeben:
//    for (int i = 1; i <= 10; i++) {
//        if (i != 1) {
//            cout << ", ";
//        }
//        cout << i;
//    }
//    cout << endl;
}

// 2) Schreiben Sie ein Programm, welches die natürlichen Zahlen von 1 bis 20 ausgibt und ihre Summe berechnet.
void schleifen2() {
    int summe = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
        summe += i;
    }
    cout << "Summe: " << summe << endl;
}

// 3) Schreiben Sie ein Programm, welches die natürlichen Zahlen von 1 bis 10 ausgibt, die Zahl 7 jedoch nicht.
void schleifen3() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            continue;
        }
        cout << i << endl;
    }
}

// 4) Schreiben Sie ein Programm, welches alle Zahlen von 30 bis 90 in 5er-Schritten ausgibt (30, 35, 40, 45, ..., 85, 90).
void schleifen4() {
    for (int i = 30; i <= 90; i += 5) {
        cout << i << endl;
    }
}

// 5) Schreiben Sie ein Programm, welches nach einem Start- und einem Endwert fragt (beide positiv und ganzzahlig).
//    Das Programm soll dann alle Zahlen einschließlich des Start- und Endwertes ausgeben.
//    Bedenken Sie, dass das Programm die Zahlen absteigend ausgeben muss, wenn der Startwert größer als der Endwert ist.
void schleifen5() {
    int startWert, endWert;

    cout << "Start- und Endwert eingeben:" << endl;
    cin >> startWert;
    cin >> endWert;

    if (startWert < endWert) {
        for (int i = startWert; i <= endWert; i++) {
            cout << i << endl;
        }
    } else {
        for (int i = startWert; i >= endWert; i--) {
            cout << i << endl;
        }
    }

}

// 6) Schreiben Sie ein Programm, welches solange den Text “Zahl eingeben [1, 100]: “ ausgibt, bis der Benutzer eine gültige Zahl eingibt.
void schleifen6() {
    int zahl;

    do {
        cout << "Zahl eingeben [1, 100]: ";
        cin >> zahl;
    } while (zahl < 1 || zahl > 100); // oder: while (!(zahl >= 1 && zahl <= 100))
}

// 7) Schreiben Sie ein Programm, welches ein Rechteck von mxn Sternen ausgibt (siehe Abbildung: m=5, n=3).
//    Die natürlichen Zahlen m und n werden vom Benutzer vorgegeben.
//    *****
//    *****
//    *****
void schleifen7() {
    int m, n;

    cout << "Seitenlaengen des Rechtecks angeben:" << endl;
    cin >> m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 8) Schreiben Sie ein Programm, welches ein rechtwinkeliges Dreieck von Sternen ausgibt, dessen Höhe n vom Benutzer vorgegeben wird (siehe Abbildung: n=5).
//    *
//    **
//    ***
//    ****
//    *****
void schleifen8() {
    int n;

    cout << "Hoehe des rechtwinkligen Dreiecks: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 9) Erweitern Sie eines der obigen Programme dahingehend, dass der Benutzer nach Ablauf des Programmes gefragt wird, ob das Programm wiederholt werden soll.
//    Je nach Antwort soll das Programm beendet oder neuerlich gestartet werden.
void schleifen9() {
    char antwort;
    do {
        schleifen8();
        do {
            cout << "Soll das Program wiederholt werden? [j/n] ";
            cin >> antwort;
        } while (antwort != 'j' && antwort != 'n');
    } while (antwort == 'j');
}

// 10) Schreiben Sie ein Programm, welches eine Folge von positiven ganzen Zahlen einliest.
//     Mit der Zahl 0 wird die Folge abgebrochen, dann wird die größte der eingegebenen Zahlen ausgegeben.
void schleifen10() {
    int zahl, groesste;

    groesste = -1;
    do {
        cout << "Bitte eine positive, ganze Zahl eingeben: ";
        cin >> zahl;
        if (zahl > groesste) {
            groesste = zahl;
        }
    } while (zahl != 0);

    cout << "Groesste Zahl ist: " << groesste << endl;
}

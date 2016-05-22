
# Einführung ins Programmieren

Im Folgenden werden die Grundlagen des Programmierens anhand der [Programmiersprache C++](https://de.wikipedia.org/wiki/C%2B%2B) erläutert.
Wir beschränken uns hierbei wirklich um die elementarsten Bestandteile,
und gehen bewusst nicht näher in die Eigenarten von C++ ein, da dieses nur als Beispiel dienen soll.
Es ist tatsächlich so dass die meisten anderen populären Sprachen, sowohl syntaktisch als auch konzeptionell,
sich nicht wirklich gravierend unterscheiden.

Der Vorteil von C++ ist vor allem seine Performance. Zeitkritische Anwendungen, wie sie z.B. in Autos oder Flugzeugen, also hardware nahe Software,
als auch Programme die möglichst resourcen schonend sein müssen, werden meist in C++ geschrieben.
Der große Nachteil meines Erachtens ist dass es sich nicht unbedingt für Anfänger eignet, für diesen Zweck wurden bereits eigene Sprachen entwickelt,
wie z.B. der prominenteste Vertreter [Pascal](https://de.wikipedia.org/wiki/Pascal_%28Programmiersprache%29).

## Programmskelett

Jedes Programm besitzt den gleichen Aufbau, nämlich ein paar **Precompiler Anweisungen**, dies sind all jene Zeilen die mit einem # Symbol beginnen.
Danach gibt man bekannt welche **Namespaces** man standardmäßig verwenden will. Dies dient dazu, um nicht jedesmal z.B. `std::cout` oder `std::cin` schreiben zu müssen.
Und zuletzt noch der sogenannte **Einstiegspunkt**, eine bestimmte Funktion mit dem Namen `main` welche aufgerufen wird
wenn das Programm gestartet wird.


```cpp
#include <iostream>

using namespace std;

int main() {
    int x = 42;

    cout << "x: " << x << endl;
    return 0;
}
```

### Kommentare

Manchmal will man den Programmcode mit Notizen versehen, der aber nicht vom Computer ausgewertet werden soll.
Solche Kommentare gibt es in C++ in zwei Ausführungen:

**Einzeilige Kommentare** beginnen mit einem `//` und kommentieren die gesamte Zeile (alle nachfolgenden Zeichen bis zum Zeilenumbruch) aus.

**Mehrzeilige Kommentare** beginnen mit einem `/*` und enden mit einem `*/` und erlauben einen größeren Bereich auszukommentieren.

```cpp
// das hier sieht nur der mensch, nicht die maschine

/*
oder auch so kann man kommentieren
nuetzlich zb um die angaben einer programmieraufgabe festzuhalten, oder bestimmte stellen naeher zu beschreiben,
da man fuer gewoehnlich mehr code liest als schreibt und man zu spaeteren zeitpunkt (oder eine andere person) nicht mehr sich erinnert was hier eigentlich passiert
*/
```

## Ein- und Ausgabe

Die **Ausgabe** auf die Konsole wird in C++ mittels _Streams_ ermöglicht und nennt sich `cout` (gesprochen "tse aut").
Diesem Stream werden Texte, Zahlen, Variablen oder das spezielle Schlüsselwort `endl` (für Endline, also ein Zeilenumbruch) übergeben mit dem `<<` Operator.

```cpp
cout << "x: " << x << endl;
```

Das obige Beispiel gibt den Text "x: " aus, danach den Inhalt der Variable `x` und schlussendlich einen Zeilenumbruch damit die Sache auch hübsch aussieht.

Die Eingabe erfolgt mit dem Bruder `cin` (gesprochen "tse in") und dem ähnlichen aber in die andere Richtung schauenden `>>` Operator.

```cpp
int y;
cin >> y;
```

Hier deklarieren wir als erstes eine Variable namens `y` vom Typ `int` (Ganzzahlen) und fragen den Benutzer nach einer Eingabe die mit der Enter Taste beendet wird.
Der Wert der Eingabe wird nach der Zeile mit dem `cin` in die Variable `y` gespeichert und man kann weiter mit ihr rechnen oder sie ausgeben.
Im Falle einer endgültigen Eingabe kümmert sich C++ entsprechend darum;
eine Fliesskommazahl wird abgeschnitten und bei einem ungültigen Text wird 0 zurückgegeben.

## Zuweisungen

Wie wir gesehen haben, gibt es die Möglichkeit den Wert einer Variable vom Benutzer bestimmen zu lassen.
Meist will man aber den Wert selber bestimmen um einen Wert zu initialiseren oder eine Rechnung durchzuführen.
Der Aufbau ist immer der gleiche: `<DATENTYP> <VARIABLEN NAME> = <AUSDRUCK>;`

```cpp
int preisProStueck = 20;
int anzahlGekauft = 3;
int preisGesamt = preisProStueck * anzahlGekauft;
```

Das Beispiel zeigt zwei Zuweisungen mit einem konstanten Wert und Eine mit einer Laufzeitberechnung.
Wie man sieht kann man die _Deklaration_ (das Bekanntgeben und Bestimmen des [Datentyps](https://de.wikipedia.org/wiki/Datentyp)
einer Variable) als auch die _Definition_ des Wertes in eine Zeile schreiben, was zu lesbarerem Code führt, anstatt alle Variablen am Anfang zu deklarieren a la:

```cpp
int preisProStueck, anzahlGekauft, preisGesamt;
preisProStueck = 20;
anzahlGekauft = 3;
preisGesamt = preisProStueck * anzahlGekauft;
```

Der Name der Variable, in der der Wert gespeichert werden soll, steht immer links vom `=` Zeichen, was anfangs kontra-intuitiv wirken kann.

### Datentypen

Jede Information hat seine eigene _Artigkeit_, so unterscheidet man grundsätzlich z.B. zwischen Ganzzahlen, Fließkommazahlen, Wahrheitswerte, Texte usw.
Die [Datentypen in C++](http://www.tutorialspoint.com/cplusplus/cpp_data_types.htm) umfassen u.a.:

| Typ    | Name                   | Beschreibung        |
| ------ | ---------------------- | ------------------- |
| `int`    | Ganzzahl (Integer)   | Umfasst alle natürlichen Zahl (positiv und negativ) im Wertebereich von -2.147.483.648 bis 2.147.483.647) und verbraucht 4 Bytes im Arbeitsspeicher |
| `long`   | Große Ganzzahl       | Doppelt so groß wie `int` mit 8 Bytes |
| `float`  | Fließkommazahl       | Zahlen getrennt mit einem Dezimalpunkt, 4 Bytes, und bietet eine Präzision von ca. 7 Nachkommastellen |
| `double` | Große Fließkommazahl | Doppelt so groß wie `float` mit 8 Bytes und ca 15. Stellen Präzision |
| `bool`   | Wahrheitswert        | Beinhaltet ausschließlich die Werte `true` oder `false` |

Es gibt viele weitere Datentypen, wie Feldvariablen oder das Behandeln von Zeichenketten.
In objekt-orientierten Programmiersprachen (wie C++ eine ist) kann man weiters eigene Typen erstellen, eine weitere Erläuterung würde den Rahmen dieser Seite aber bei weitem sprengen.

## Bedingungen

Um wirkliche Logik abbilden zu können ist es notwendig bestimmten Code nur unter bestimmten Voraussetzungen, Bedingungen, auszuführen.
Hierführ gibt es das `if` Schlüsselwort (_wenn_ zu Deutsch) zusammen mit dem `else` (_ansonsten_) in folgenden drei Ausführungen.

### if Bedingung

```cpp
if (x < 18) {
  // bedingter code wird nur ausgefuehrt wenn die bedingung wahr ist
}
// hier geht es in jedem fall weiter
```

Der Teil in der runden Klammer gibt die Bedingung an, dessen Wert entweder wahr oder falsch ist.
Ist die Bedingung wahr, wird der folgenden Codeblock in den geschweiften Klammern ausgeführt.
Unabhängig von der Bedingung wird der Teil darunter immer ausgeführt.

_Anmerkung:_ Das Zwischenergebnis von `x < 18` muss man NICHT erst deklarieren wie man z.B. die Variable `x` muss.
Folgender Code ist <font color="red">ungültig</font> und wird nicht kompilieren:

```cpp
bool x < 18;

if (x < 18) {
  ...
}
```

### if-else Bedingung

Um nun den Ausdruck zu erweitern und zu sagen dass in jedem anderen Fall (also die Bedingung nicht zutrifft) etwas anderes getan werden soll,
kann man dies über das `else` Schlüsselwort.

```cpp
if (x < 18) {
  // nur wenn unter 18
} else {
  // in jedem anderen fall (groesser gleich 18)
}
```

Es ist nicht notwendig die alternative Bedingung nochmal explizit mit einem `if-else if` anzugeben.

### if-else if Bedingung

Die letzte Variante ist das verwenden von alternativen Bedingungen, bei dem das `else` mit einem weiteren `if` verbunden wird,
und man somit mehrere verschiedene Fälle abdecken kann.

```cpp
if (x < 1) {
  // nur wenn 0 oder negativ
} else if (x < 18) {
  // wenn unter 18
} else {
  // in jedem anderen fall (groesser gleich 18)
}
```

## Schleifen

Schleifen dienen dazu um einen Codeblock unter bestimmten Bedingungen mehrmals auszuführen.
Wenn diese Bedingung nicht mehr erfüllt ist wird die Schleife abgebrochen, und wird deshalb auch _Abbruchkriterium_ genannt.

### for Schleife

Die [`for` Schleife](https://en.wikipedia.org/wiki/For_loop#Traditional_for-loops) ist die gängigste Schleife und wird verwendet um z.B. über eine Liste von Objekten zu iterieren.
Das Besondere an der Schleife ist der sogenannte _Schleifenkopf_ welcher aus drei Teilen besteht:

* Initialisierung: Wird einmalig vor der Schleife ausgeführt
* Bedingung: Wird vor jedem Schleifendurchgang geprüft und bricht die Schleife ab wenn sie nicht wahr ergibt
* Aktualisierung: Nach jedem Schleifendurchgang werden diese Anweisungen ausgeführt um die Schleife ggf. abbrechen zu lassen

Dadurch ergibt sich folgender Aufbau: `for (<INITIALISIERUNG>; <BEDINGUNG>; <AKTUALISIERUNG>) { }`, oder in einem Beispiel:

```cpp
for (int i = 0; i < 10; i++) {
  // der schleifenrumpf wird 10 mal aufgerufen
  // der inhalt der laufvariable 'i' aendert sich jedesmal:
  // 0, 1, 2, ... bis inklusive 9 (aber exklusive 10)
}
```

Dies ist die typische Verwendung einer `for` Schleife, in der man im Initialisierungsteil eine sogenannte _Laufvariable_ angibt,
im Aktualisierungsteil diese Variable um 1 erhöht und in der Bedingung die Obergrenze überprüft.

_Achtung:_ Es wird in der Informatik immer bei 0 angefangen zu zählen, was manchmal zu Problemen führt in Kombination mit dem kleiner/kleiner gleich Symbol,
was gerne einen [fencepost error](https://en.wikipedia.org/wiki/Off-by-one_error#Fencepost_error) erzeugt. Man nehme folgendes Beispiel:
Man baut einen Zaun der 30 Meter lang ist, und stellt Pfosten auf in einem Abstand von 3 Meter. Wieviel Pfosten braucht man? (Für die Lösung samt Erklärung klicke auf den Link oben)

### while Schleife

Eine andere Möglichkeit einen Code mehrfach ausführen zu lassen ist die `while` Schleife, eine etwas andere und einfachere Schleifenvariante.

```cpp
int x = 0;
while (x < 10) {
  // schleifenrumpf
  x++;
}
```

Das Beispiel besagt: Initialisiere eine Variable `x` vom Typ Integer mit dem Wert 0.
Solange der Wert kleiner als 10 ist führe den Code im Schleifenrumpf aus und letzt endliche erhöhe den Wert der Variable `x` um 1.
Dem aufmerksamen Leser wird aufgefallen sein, dass die hier geschriebene Schleife semantisch gesehen identisch ist mit der `for` Schleife vom vorherigen Kapitel.
Die `for` Schleife ist nur etwas kompakter und meist wird diese auch verwendet. Mal unter uns: Eine `while` Schleife verwendet man sehr, sehr selten als Anwendungsentwickler.

### do-while Schleife

Der große Unterschied zur normalen `while` Schleife ist, dass diese hier _fußgesteuert_ ist (im Gegensatz zur _kopfgesteuerten_),
soll heissen das Abbruchkriterium wird erst ganz am Schluß geprüft,
was dazu führt dass es immer zumindest einen Schleifendurchlauf gibt.

```cpp
int x;
do {
  cin >> x;
} while (x <= 0);
```

In dem Beispiel wird als erstes eine Variable `x` deklariert, und dann solange ein Wert vom Benutzer eingelesen bis dieser eine positive Zahl eingibt.

# Abschließende Anmerkungen

Um wirklich Programmieren lernen zu können, sind auf jedenfall Englisch Kenntnisse notwendig, da u.a. die meiste Literatur in Englisch geschrieben ist,
und man sich einfach leichter tut. Als auch führt die Verwendung der englischen Sprache zu einem lesbareren Code, und man kann mit einem internationalen Publikum sich austauschen und zusammenarbeiten.
Dennoch habe ich mich der Einfachheit halber entschieden die Beschreibungen auf Deutsch niederzuschreiben...

Wer jetzt Lust auf mehr bekommen hat, Google meint dies wäre eine gute Anlaufstelle:

* http://www.learncpp.com
* https://www.youtube.com/watch?v=Rub-JsjMhWY

Kein Buch, Website oder Video der Welt kann einem aber das Programmieren beibringen, das Einzige das aus Einem einen (richtigen) Programmierer macht, ist das Tun!

In diesem Sinne,
happy coding,
Christoph
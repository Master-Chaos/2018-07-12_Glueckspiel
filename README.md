# 2018_07_12_Glueckspiel

ATTENTION: Program Arguments are necessary! AGE NAME GENDER e.g. 17 Mike m  

42%
Tipp: Um ganzzahlige Zufallszahlen zu generieren benutzt einfach folgende Funktionen:

#include <time.h>
#include <stdlib.h>
void initialize_random_number_generator()
{
  srand(time(NULL));
}
int random_number()
{
  return rand();
}
Die erste Funktion initialisiert den Zufallsgenerator und mit der zweiten Funktion
könnt ihr euch einen beliebigen Zufallswert geben lassen, vergesst dabei nicht die
Include-Anweisungen in euer Programm zu übernehmen!

Schreibt ein Programm welches mit einer Wahrscheinlichkeit von 42% "Gewonnen!" und
ansonsten "Verloren!" ausgibt. Kompiliert das Programm und führt es aus. Spielt ein
wenig herum und ändert das Programm in dem ihr absichtlich Fehler einbaut, lest dann
 die Fehlermeldungen. Was genau für Informationen geben sie euch?
Begrüßung

Schreibt ein Programm, welches drei Variablen kennt, die das Alter, den Namen und
das Geschlecht einer Person speichern. Überlegt euch, von welchem Datentyp die drei
Variablen sein müssen.

Fügt eurem Programm dann eine Fallunterscheidung hinzu, die eine Begrüßung für die
genannte Person ausgibt. Der Begrüßungstext unterscheidet sich für Personen, die
männlich oder weiblich sind und unterscheidet zwischen Erwachsenen und Kindern.
Folgende Begrüßungen sollen ausgegeben werden:
"Guten Tag Herr <name>!" für erwachsene Männer
"Guten Tag Frau <name>!" für erwachsene Frauen
"Hallo <name>!" für Mädchen und Jungen unter 18 Jahren
Glücksspiel

Erweitert das Programm von Aufgabe "42%" zu einem kleinen Glücksspiel. Zwei Spieler
wählen jeweils einen Wert zwischen 1 und 100. Dann wird eine zufällige weitere Zahl
zwischen 1 und 100 ermittelt. Der Spieler, dessen Nummer am nächsten an der zufälligen
Zahl liegt, hat gewonnen. Liegen beide Spieler gleich weit entfernt, dann gibt es ein
Unentschieden.

Hinweis: Es reicht aus, wenn die Zahlen, die die Spieler wählen, direkt im Quellcode
verankert sind, ihr müsst diese nicht von der Konsole einlesen.

Hinweis 2: Falls du die Zahlen doch von der Konsole einlesen willst, schau dir mal
die Funktion scanf aus Vorlesung 2 an.

https://wiki.freitagsrunde.org/Ckurs/Gl%C3%BCckspiel

#ifndef TODO_H
#define TODO_H

/*
----------Aktuell in Arbeit:

-->BUG: DXF-Import fehlerhaft wenn CAD Blöcke aus FreeCAD enthällt?
    ->noch nicht genauer heraus gefunden wodurch der Import-Fehler verursacht wurde







----------Ideen für neue Dialoge:
-->Dialog Include
-->Dialog Bearbeitung spiegeln
-->Dialog Bearbeitung verschieben
-->Dialog Bearbeitung drehen
-->Dialog zum Bohren, dann Bohrmaschine in die Aufname der Hauptspindel der CNC einsetzen



----------Ideen für neue Funktionen:







----------Bereich Ändern:


----------Bereich Vorschaufenster:


----------Bereich G-Code:
###    -->Ausgabe von Klammern ( und ) aus Textfeldern in G-Code-Erzeugung unterdrücken,
###        damit diese in Programminternen Kommentaren genutzt werden können
###        ->bei neu hinzukommenden Dialogen jeweils daran denken



----------Bereich Werkzeug:
###    -->AUTO-Werte möglich machen
###        ist umgesetzt, muss jedoch in der Funktion
###            void MainWindow::on_actionGCode_berechnen_triggered()
###        und der Funktion
###            void programmtext::aktualisiere_klartext_und_var()
###        berücksichtigt werden wenn neue Elemente hinzukommen






*/
#endif // TODO_H

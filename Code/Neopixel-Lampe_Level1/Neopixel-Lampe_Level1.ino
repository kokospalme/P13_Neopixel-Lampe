/* Neopixel-Lampe (Code Level1 v1)
 * 30.6.2022
 * C. Wüpping
 * 
 * FastLED Library: https://github.com/FastLED/FastLED/blob/master/library.json
 * 
 * codekit Programmieren: https://edukits.co/code/
 * simulation: https://wokwi.com/projects/new/arduino-nano
 * 
 * Bibliotheken ("Libraries") führen für uns bestimmte, meist komplizierte Funktionien im Hintergrund aus.
 * Wenn man sie richtig benutzt, ersparen sie einem viel Arbeit.Deshalb haben die meisten Bibliotheken Beispiel-Sketche,
 * die einem Helfen, die Benutzung der Bibliothek/Library richtig zu verstehen und Funktionen zu entdecken.
 * 
 * Aufgabe:
 * 
 * geh auf https://edukits.co/code/ und schaue dir die Kategorie "Colour" an.
 * bekommst du es hin
 * 1. ALLE sieben LEDs zum Leuchten zu bringen?
 * 2. deine LEDs blinken zu lassen? ;)
 * 
 * Tipp:
 * Schaue dir den Code genau an und versuche zu verstehen, was dieser tut.
 * Probiere aus, was sich verändert, wenn du verschiedene Werte veränderst.
 * 
 * auf https://wokwi.com/projects/new/arduino-nano kannst du (auch zuhause) deinen Aufbau simulieren und ausprobieren 
 * 
 */

#include "FastLED.h"

int pin_leds = 3; //int-Container mit dem Wert 3 und dem Namen "pin_leds"
int anzahl_leds = 7;  //int container mit dem Wert 7 und dem Namen "pin_leds"
CRGB leds[anzahl_leds]; // 7 LED-Objekte in einem "Array" mit dem Namen "leds"

void setup() {
  FastLED.addLeds<NEOPIXEL, pin_leds>(leds, anzahl_leds); //LED-Objekte der FastLED-Library übergeben
}

void loop() {
  leds[0] = CRGB(50, 50, 50); //LED Nr.0 (wir zählen ab null) bekommt die Farbe mit den Werten Rot= 50, grün = 50, blau = 50
  FastLED.show(); //Farbinformation an LEDs schicken
}

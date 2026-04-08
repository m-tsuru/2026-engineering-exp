// Arduino 1-01-ex1
// CreatedAt: 2026-04-08
// (C) 2026 Michiru Tsurumaru; MIT LICENSE

#include <M5Core2.h>

void setup() {
    M5.begin();
    M5.Lcd.setTextSize(3);
    M5.Lcd.print("Hello World");
}

void loop() {}
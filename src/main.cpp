#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Charu Khandelwal
 * @date 2026-03-11
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 * The program demonstrates basic LED control
 * using Arduino digital and analog signals.
 */

// Define RED pin
#define RED_PIN 9

// Define GREEN pin
#define GREEN_PIN 10

// Define BLUE pin
#define BLUE_PIN 11

void setup() {

    // Initialize Serial communication
    Serial.begin(9600);

    // Configure RGB pins as OUTPUT
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    // Print initialization message
    Serial.println("RGB LED Control System Initialized");
}

void loop() {

    // -------- DIGITAL MODE --------

    // Turn ON red
    digitalWrite(RED_PIN, HIGH);
    delay(1000);

    // Turn OFF red
    digitalWrite(RED_PIN, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    // Set RED brightness
    analogWrite(RED_PIN, 255);

    // Set GREEN brightness
    analogWrite(GREEN_PIN, 128);

    // Set BLUE brightness
    analogWrite(BLUE_PIN, 64);

    // Delay for visible transition
    delay(2000);
}

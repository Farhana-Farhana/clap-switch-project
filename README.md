# 🔊 Clap Switch using Arduino

## 📌 Overview

This project is a **sound sensing device (Clap Switch)** that turns an LED ON/OFF using clap sound. It uses a microphone-based sound sensor to detect claps and control electrical devices.

---

## 🎯 Objective

* To design a simple sound-controlled switching system
* To demonstrate sound-to-electrical signal conversion
* To implement automation using Arduino

---

## ⚙️ Components Used

* Arduino Uno
* LM393 Sound Sensor Module
* LED
* Resistor
* Breadboard
* Jumper Wires

---

## 🔧 Working Principle

The sound sensor detects clap sounds and converts them into electrical signals.
The Arduino processes this signal and toggles the LED state (ON/OFF).

---

## 🔄 System Flow

Clap Sound → Sound Sensor → Arduino → LED Toggle

---

## 💻 Code

```cpp
int SoundSensor=2;
int LED=3;
boolean LEDStatus=false;

void setup() {
  pinMode(SoundSensor,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorData=digitalRead(SoundSensor);
  Serial.println(SensorData);

  if(SensorData==1){
    if(LEDStatus==false){
      LEDStatus=true;
      digitalWrite(LED,HIGH);
    }
    else{
      LEDStatus=false;
      digitalWrite(LED,LOW);
    }
  }
}
```

---

## 💰 Cost Estimation

| Component    | Cost (INR) |
| ------------ | ---------- |
| Arduino UNO  | 780        |
| Sound Sensor | 90         |
| Breadboard   | 60         |
| Jumper Wires | 48         |
| LED          | 2          |
| Data Cable   | 50         |
| **Total**    | **1030**   |

---

## 📸 Prototype

(Add your circuit image here)

---

## ✅ Applications

* Home automation
* Hands-free switching
* Assistive technology

---

## ⚠️ Limitations

* Sensitive to noise
* May trigger with unwanted sounds

---

## 🚀 Future Scope

* Control multiple devices
* Add relay module for appliances
* Integrate IoT (mobile control)

---

## 📚 Conclusion

The clap switch is a simple yet effective system that converts sound energy into electrical control signals, enabling hands-free operation of devices.

---

## 👩‍💻 Authors

* Farhana N S
* Fathima
* Swetha
* Devi Krishna

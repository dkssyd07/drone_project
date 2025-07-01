# 🚀 Autonomous Security Drone with AI Human Analysis

## 📌 Overview
This project implements an **autonomous drone security system** using an ESP32, an IR sensor, and a Xiaomi D16 mini drone. When an intruder is detected, the drone is deployed to the site, captures a photo, and an AI module analyzes the **age group and gender** of the person.

## 📷 Use Cases
- 🏠 Home or Office Security  
- 🛑 Restricted Area Surveillance  
- 🤖 AI-powered Intrusion Report Generation  

## 🔧 System Components
- **ESP32** – Motion detection using IR sensors  
- **Xiaomi Mini Drone (D16)** – Autonomous takeoff, flight, and photo capture  
- **Camera Module** – Mounted on the drone or external for image capture  
- **AI Model (e.g., TensorFlow / PyTorch)** – Age and gender classification  
- **Wi-Fi Module** – ESP32 communicates with the drone and AI server  
- **Server (Flask / FastAPI)** – Receives images and returns analysis results  

## 🧠 Features
- IR sensor-based motion detection  
- Drone automatic takeoff and real-time image capture  
- AI inference for **age group** and **gender**  
- Optional alert system or dashboard integration  
- Real-time logging or image-based recording for review  

## 🛠 Tech Stack
| Layer              | Technology                              |
|-------------------|------------------------------------------|
| Embedded          | ESP32 (Arduino / C++)                    |
| Drone Control      | Python or native drone SDK (Xiaomi D16) |
| AI Framework      | TensorFlow, OpenCV, or PyTorch           |
| Web / API Server  | Python Flask / FastAPI                   |
| Development Tools | Visual Studio Code                       |

---

## 📂 Project Structure (Tentative)

## 🔌 Hardware Integration Test

### ✅ Connected Components - 2025/07/01 DONE ✅ 
- **ESP32 Dev Board**
- **IR Sensor (HW-221)**
  - Outputs HIGH on detection  
    → OUT → ESP32 GPIO 18 (P18)  
    → VCC → ESP32 3.3V  
    → GND → ESP32 GND
- **Ultrasonic Distance Sensor (HC-SR04)**
  - Used to measure distance  
    → VCC → ESP32 5V  
    → GND → ESP32 GND  
    → TRIG → ESP32 GPIO 5  
    → ECHO → ESP32 GPIO 18 (or any other GPIO if needed)

---

## 📌 Future Enhancements
- Facial recognition and known intruder identification  
- Integration with Telegram/Slack/Discord for real-time alerts  
- Mobile app to control and monitor the system remotely  

---

## 📞 Contact
For any questions or collaboration proposals, feel free to reach out via GitHub Issues or email.


# DistributedBankSystem-Qt


A secure, scalable client-server banking platform built with Qt/C++, featuring role-based access control, encrypted communications, and real-time transaction processing. This production-ready system demonstrates modern distributed architecture principles through its multi-threaded server design, JSON-based API communications, and Qt-powered cross-platform interfaces. With robust features like XOR-encrypted client-server messaging,  and a singleton database pattern, the platform serves as both an educational resource for Qt networking concepts and a foundation for commercial fintech applications. The modular design allows easy extension to WebSocket protocols.
---

## 🚀 Key Features

### 🔐 Security

* XOR-based encryption for safe client-server communication
* Role-based access: Admin and User modes
* Secure audit logging in JSON format
<!-- add part about websocktes -->

### ⚡ Performance

* Multi-threaded backend server for concurrency
* Handles multiple client requests simultaneously
* Supports TCP and WebSockets for flexible communication


### 💻 User Interfaces

* **Qt GUI Client**: Login, balance checks, money transfers
* **Admin Dashboard**: Manage user accounts, transactions, and system logs
* **Server CLI**: Monitor requests and logs in real-time

---

## 🏗️ System Architecture

```mermaid
  graph TD
    Client[Qt Client] -->|Encrypted JSON| Server[Multi-threaded Server]
    Server --> DB[JSON-based Database]
    Server --> Logs[Audit Logging System]
```

🛠️ Technical Design

![Client-Server Communication](images/Communication.Png) 

Uses QTcpSocket with XOR encryption

Key Classes
Class	Responsibility
Client	Handles encrypted requests/responses
Server	Manages multi-threaded client sessions
RequestProcessor	Executes commands via registry pattern
BankDatabase	Singleton JSON database manager



## 🧰 Getting Started

### 📦 Prerequisites

* Qt 6.4 or later

### 🔧 Build Instructions


just git clone repos

open the pro file of networkclient

open the pro file of bankserver
make sure to change the path in bankdatabase.cpp
QObject{parent} , Path("D://Embdedd Linux//QT//QT-WORK//Bank_Managemnet_System_using_WebSockets//BankServer//BankDatabase.json")
Path
make sure the path fits your System filesystem

after wards just open the client and connect using the ip of your machine and port number to the server(which listens on port 1234) which has all the data 


### ▶️ Run


## 🖼️ Screenshots

| Login Page                | User Dashboard          | Admin Panel               |
| ------------------------- | ----------------------- | ------------------------- |
| ![Login](images/login_page.gif) | ![User](images/bank_page.png) | ![Admin](images/admin_interface.png) |

---

## 📄 Documentation

* [📘 Full Project Report (PDF)](docs/BankSystem_Report.pdf)
* [📊 Database Schema](images/Database_schema.png)

---



## 📜 License

MIT License © 2024 \[Mohamed Dewidar]

---

## 📌 Notes

* Update the `media/` paths to your actual screenshot paths
* Replace placeholders like `[Mohamed Dewidar]` if needed
* Add additional performance metrics and test cases in `docs/`




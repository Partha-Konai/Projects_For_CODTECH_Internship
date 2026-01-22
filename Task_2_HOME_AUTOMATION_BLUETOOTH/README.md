<h2>Bluetooth-Based Home Automation Using ESP32</h2>
<br>
<h4><b>📌 Project Overview</h4></b>
<p>
    This project is developed as Task 2 of the CODTECH Internship Program. The objective of this task is to design and implement a Bluetooth-controlled relay system using an ESP32 microcontroller. The system allows wireless control of electrical loads through simple character-based commands.
</p>
<br>
<h4><b>🎯 Objective</b></h4>
<ul>
    <li>Implement Bluetooth communication using ESP32</li>
    <li>Control multiple relays wirelessly</li>
    <li>Ensure reliable command execution and system stability</li>
</ul>
<br>
<h4><b>🔧 Hardware Requirements</b></h4>
<ul>
    <li>ESP32 Development Board</li>
    <li>4-Channel Relay Module</li>
    <li>Smartphone with Bluetooth Terminal App</li>
    <li>Jumper Wires</li>
</ul>
<br>
<h4><b>💻 Software Requirements</b></h4>
<ul>
    <li>Arduino IDE</li>
    <li>ESP32 BluetoothSerial Library</li>
</ul>
<br>
<h4><b>⚙️ Functional Description</b></h4>
<ul>
    <li>ESP32 operates as a Bluetooth server.</li>
    <li>Each relay is assigned two commands:</li>
    <ul>
        <li>ON Commands: A, B, C, D</li>
        <li>OFF Commands: W, X, Y, Z</li>
    </ul>
    <li>Upon receiving a valid command, the ESP32 switches the corresponding relay and sends confirmation feedback via Bluetooth.</li>
</ul>
<br>
<h4><b>🖥️ Output</b></h4>
<p>
Successful Bluetooth connection message displayed on the Bluetooth terminal. Relay turns ON when commands A/B/C/D are sent. Relay turns OFF when commands W/X/Y/Z are sent. Confirmation messages are received for each relay operation.
</p>
<h4><b>🧾 Conclusion</b></h4>
<p>
This task helped in gaining hands-on experience with ESP32 Bluetooth communication and real-time hardware control. The project improved understanding of embedded programming, GPIO handling, and efficient command mapping. Overall, the implementation fulfills the objectives defined by CODTECH for Task 2 and strengthens practical skills in embedded systems development.
</p>
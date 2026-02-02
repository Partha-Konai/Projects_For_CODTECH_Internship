<h2>Speech Recognition System Using ESP32</h2>
<br>
<h4><b>📌 Project Overview</b></h4>
<p>
This project demonstrates a voice‑controlled smart switching system using an **ESP32 microcontroller integrated with Sinric Pro, Google Home, and Google Gemini. Voice commands issued through Google Assistant / Gemini are processed via Sinric Pro’s cloud platform and securely transmitted to the ESP32 over Wi‑Fi. Based on the received command, the ESP32 controls multiple outputs (LEDs), simulating home appliances.

The system is scalable, cloud‑based, and suitable for smart home automation,IoT learning and voice‑controlled embedded system projects.
</p>
<br>
<h4><b>🎯 Objectives</b></h4>
<ul>
    <li>Control multiple devices using voice commands</li>
    <li>Integrate ESP32 with Sinric Pro cloud</li>
    <li>Enable Google Home / Gemini voice assistant support</li>
    <li>Demonstrate real‑time IoT communication using Wi‑Fi</li>
    <li>Implement a reliable callback‑based control logic</li>
</ul>
<br>
<h4><b>🧠 System Architecture</b></h4>
<p>
Voice (User) → Google Assistant / Gemini → Sinric Pro Cloud → ESP32 → GPIO Outputs (LEDs)
</p>
<h4><b>🧰 Hardware Components</b></h4>
<ul>
    <li>ESP32 Development Board</li>
    <li>3 × LEDs</li>
    <li>1 × 10Ω Resistor</li>
    <li>Breadboard</li>
    <li>Jumper Wires</li>
    <li>USB Cable</li>
    <li>Wi‑Fi Internet Connection</li>
</ul>
<br>
<h4><b>💻 Software & Platforms Used</b></h4>
<ul>
    <li>Arduino IDE</li>
    <li>Sinric Pro Platform</li>
    <li>Google Home App</li>
    <li>Google Gemini (Voice Interface)</li>
<ul>
<br>
<h4><b>📚 Libraries Used</b></h4>
<uL>
    <li>WiFi.h</li>
    <li>WebSocketsClient.h</li>
    <li>SinricPro.h</li>
    <li>SinricProSwitch.h</li>
<ul>
<br>
<h4><b>🔌 Pin Configuration</b></h4>
<table>
    <tr>
        <th>DEVICE</th>
        <th>>ESP32 GPIO</th>
    </tr>
    <tr>
        <td>LED 1</td>
        <td>GPIO 18</td>
    </tr>
    <tr>
        <td>LED 2</td>
        <td>GPIO 19</td>
    </tr>
    <tr>
        <td>LED 3</td>
        <td>GPIO 21</td>
    </tr>
</table>
<br>
<h4><b>⚙️ Working Principle</b></h4>
<ol>
    <li>ESP32 connects to the configured Wi‑Fi network.</li>
    <li>The device authenticates with Sinric Pro Cloud using App Key and App Secret.</li>
    <li>Each Sinric Pro virtual switch is mapped to a unique Device ID.</li>
    <li>When a voice command is given (e.g., “Turn ON Light 1”), Google Assistant/Gemini sends the request to Sinric Pro.</li>
    <li>Sinric Pro forwards the command to the ESP32 via WebSocket.</li>
    <li>The ESP32 callback function identifies the device ID and toggles the corresponding GPIO pin.</li>
    <li>LED state changes reflect the command execution.</li>
</ol>
<br>
<h4><b>✅ Features</b></h4>
<ul>
    <li>Voice control via Google Assistant / Gemini</li>
    </li>Cloud‑based device management</li>
    <li>Real‑time response</li>
    <li>Scalable to more devices</li>
    <li>Secure WebSocket communication</li>
</ul>
<br>
<h4><b>🚀 Future Enhancements</b></h4>
<ol>
    <li>Replace LEDs with real appliances using relays</li>
    </li>Add feedback via mobile app</li>
    <li>Integrate sensors (temperature, motion, etc.)</li>
    </li>Enable scheduling and automation rules</li>
    <li>Add local manual override switches</li>
</ol>
<br>
</h4><b>⚠️ Limitations</b></h4>
<ol>
    <li>ESP32 supports 2.4 GHz Wi‑Fi only; 5 GHz networks are not compatible</li>
    <li>Requires continuous internet connection for Sinric Pro and Google Home</li>
    <li>Cannot operate in offline or local‑only mode</li>
    <li>Voice response latency depends on cloud and network speed</li>
    </li>Google Gemini account must remain logged in</li>
    <li>Security depends on proper protection of API keys and Wi‑Fi credentials</li>
</ol>
<br>
<h4><b>🌍 Applications</b></h4>
<ol>
    <li>Smart home lighting control</li>
    <li>Voice‑controlled home appliances</li>
    <li>Assistive technology for elderly or disabled users</li>
    <li>Prototype for home automation startups</li>
</ol>
<br>
<h4><b>🏁 Conclusion</b></h4>
<p>
This project successfully demonstrates a speech recognition system using ESP32, Sinric Pro, and Google’s voice ecosystem. It highlights practical cloud‑to‑device communication and provides a strong foundation for advanced smart home and embedded IoT applications.
</p>
<br>
<h4><b>👤 Intern Details</b></h4>
<p>
Name: Partha Konai
<br>
Internship Program: CODTECH – Embedded Systems
</p>
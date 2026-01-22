<h2>Push Button Counter - Embedded System</h2>
<br>
<h4><b>📌 Project Overview</b></h4>
<p>
This project demonstrates a push-button-based digital counter implemented using an embedded system. Each press of the push button increments the counter value by one, and the count is displayed on the Serial Monitor. To ensure accurate counting and avoid false triggers caused by mechanical button bounce, a non-blocking timing method using millis() is implemented instead of delay-based logic.

The counter operates within a fixed range from 0 to 9, and once the maximum value is reached, it automatically resets to zero. This project highlights basic embedded concepts such as digital input handling, timing control, and serial communication.
</p>
<br>
<h4><b>Components Used</b></h4>
<ol>
    <li>Microcontroller board Arduino</li>
    <li>Push button</li>
    <li>Jumper wires</li>
    <li>USB cable</li>
    <li>Computer with Arduino IDE</li>
</ol>
<br>
<h4><b>Working Principle</b></h4>
<p>
The push button is configured using INPUT_PULLUP mode. When the button is pressed, the microcontroller detects the change in state and increments the counter only if a predefined time interval has passed since the previous press. This ensures stable and accurate counting. The counter value is displayed on the Serial Monitor.
</P>
<br>
<h4><br>Simulation</b></h4>
<p>
The project was simulated using Tinkercad to verify the circuit design and output behavior. Screenshots of the circuit diagram and Serial Monitor output are attached.

🔗 Tinkercad Simulation Link:
<a href = "https://www.tinkercad.com/things/fKCHqGWx8um-push-button-counter"> Click Here</a>
</p>
<br>
<h4><b>🖥️ Output</b></h4>
<ul>
    <li>Counter increments by one for each valid button press.</li>
    <li>Count is displayed on the Serial Monitor.</li>
    <li>Counter resets to zero after reaching nine</li>
</ul>
<br>
<h4><b>🧾 Conclusion</b></h4>
<p>
This project demonstrates reliable push-button input handling and timing control in an embedded system. It provides a clear understanding of digital input processing without using blocking delays.
</b>
<h4><b>👤 Intern Details</b></h4>
<p>
Name: Partha Konai
<br>
Internship Program: CODTECH – Embedded Systems
</p>
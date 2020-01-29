<div id="readme" class="Box-body readme blob js-code-block-container">
  <article class="markdown-body entry-content p-3 p-md-6" itemprop="text"><p><a href="https://www.microchip.com" rel="nofollow"><img src="https://camo.githubusercontent.com/5fb5505f69a28ff407841612dfe2b7004f210594/68747470733a2f2f636c6475702e636f6d2f553071684c7742696a462e706e67" alt="MCHP" data-canonical-src="https://cldup.com/U0qhLwBijF.png" style="max-width:100%;"></a></p>
<h1>Introduction</h1>
<p>The PIC16F184xx family has a new Analog to Digital Converter with Computation (ADCC) with a 12-bit resolution. This project shows the reading of an analog temperature sensor (MCP9701) using the ADCC.</p>
<h1>Description</h1>
<p>In this example we will be using the PIC16F18446 Sensor Board. The PIC reads the temperature sensor, and displays the temperature on the LCD. The sensor has a temperature coefficient of 19.5 mV/°C. It is sensitive enough to detect the heat of the user's hand from a distance of 1 cm. Here is a picture of the temperature sensor:</p>
<p> <a target="_blank" rel="noopener noreferrer" href = "https://static.transim.com/img/42018/a35ca7770dd04cc89bd3ccebb8b6f7ce-gxckw.jpg"><img src ="https://static.transim.com/img/42018/a35ca7770dd04cc89bd3ccebb8b6f7ce-gxckw.jpg" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>
<p> The current temperature is displayed (in Celsius) on the LCD. Also, two graphs display the variations of the 12-bit and 10-bit temperature values in real time.</p>
<p> <a target="_blank" rel="noopener noreferrer" href = "https://static.transim.com/img/22018/d244bba9d95143cab08de0353d609d10-1g8dc.jpg"><img src ="https://static.transim.com/img/22018/d244bba9d95143cab08de0353d609d10-1g8dc.jpg" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>
<h1>MCC Settings </h1>
<p>Here are the settings used for MSSP, CLC, FVR, and ADCC. MSSP + CLC are used for the LCD control.</p>
<h2>MSSP Settings </h2>
<p><a target="_blank" rel="noopener noreferrer" href = "https://static.transim.com/img/42018/5840d7364dee4647956f12c2da5def97-bnjtj.png"><img src ="https://static.transim.com/img/42018/5840d7364dee4647956f12c2da5def97-bnjtj.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>
<h2>CLC Settings </h2>
<p><a target="_blank" rel="noopener noreferrer" href = "https://static.transim.com/img/42018/e8161e58eda642899a6296613bd27f23-hcwgc.png"><img src ="https://static.transim.com/img/42018/e8161e58eda642899a6296613bd27f23-hcwgc.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>

<p><a target="_blank" rel="noopener noreferrer"><img src ="https://static.transim.com/img/42018/f5ad98b1f2d540e8bc3b24972ec9d772-zsghq.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>

<h2>FVR Settings </h2>
<p>FVR is used as positive refference for the ADCC, to get higher accuracy and gain.</p>
<p><a target="_blank" rel="noopener noreferrer"><img src ="https://static.transim.com/img/42018/a05ae88c99a94750851cc9f025088d71-5f2vb.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>

<h2>ADCC Settings </h2>
<p><a target="_blank" rel="noopener noreferrer"><img src ="https://static.transim.com/img/42018/e8cc90b3047e46aca7a563defaa50262-7p5x9.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>
<p>ADRPT register is set to 0x40, to average a burst of 64 samples.</p>
<p><a target="_blank" rel="noopener noreferrer"><img src ="https://static.transim.com/img/42018/3c627e28bb8a495aaf834b89cd4729db-14cbl.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>

<h2>PIN Grid </h2>
<p><a target="_blank" rel="noopener noreferrer"><img src ="https://static.transim.com/img/42018/af60551f5f424305b38f629c5a74f5e7-zbfvw.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>


<h2>PIN Module </h2>
<p><a target="_blank" rel="noopener noreferrer"><img src ="https://static.transim.com/img/42018/b174cef05785431dbe2e72e88686850b-6qr6n.png" style="max-width:100%;"></a>{width=auto height=auto align=center} </p>

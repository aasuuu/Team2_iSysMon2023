<h1> Incedo SysMonitor: Team2_iSysMon2023</h1>
<h2>Problem Statement</h2>
A central monitoring system built using basic client-server model to collect system information from multiple client nodes over a network. This system information is sent periodically to a server with the help of a socket connection to update about its state with following parameters:
<ul>
  <li>System-name</li>
  <li>RAM usage</li>
  <li>CPU utilization</li>
  <li>System Idle window</li>
  <li>HardDisk utilization</li>
</ul>

<h2>Installation and Setup</h2>
Download the code from this repository as a zip file and extract it at a suitable location on your system.<br>
After this, you are required to download and install the following software on your system for Database connection and User Interface.<br> 
<h3>Database</h3>
<ol>
  <li>  
    Download and install MySQL Installer
  </li> 
  <li>
    Using MySQL Installer install: 
    <ul>
      <li>MySQL Community Server 8.0.11</li> 
      <li>MySQL Connector/C++ version 8.0.11</li>
    </ul>
  </li> 
  <li>
    Update the relevant include and lib directories in Visual Studio Community
    <ul>
      <li><b>Go to Project Properties > C/C++ > General > Additional Include Directories and update</b><br>
        C:\Program Files\MySQL\Connector C++ 8.0\include <br>
        C:\Program Files\MySQL\MySQL Server 8.0\include 
      </li>
      <li>	<b>Go to Project Properties > Linker > General > Additional Library Directories and update</b><br>
        C:\Program Files\MySQL\Connector C++ 8.0\lib\opt <br>
        C:\Program Files\MySQL\MySQL Server 8.0\lib 
      </li>
        <li>	<b>Go to Project Properties > Linker > Input > Additional Dependencies and update</b><br>
        mysqlcppconn.lib <br>
        libmysql.lib
      </li>
  </li>
      <li>	<b>Code, build, run </b><br>
      Copy libmysql.dll from C:\Program Files\MySQL\MySQL Server 8.0\lib to the executable directory. <br>
      Copy libcrypto-1_1-x64.dll and libssl-1_1-x64.dll from C:\Program Files\MySQL\MySQL Server 8.0\bin to the executable directory.
   </li>
</ol>

<h3>User Interface</h3>
<ol>	
  <li>Go to Install more tools and features and download.<br> 
           Install while downloading two workloads >Desktop development with c++ and Universal Windows Platform development.<br>
           Install one individual component >c++/CLI support for v143 build tools    
            (Latest)                 
  </li> 
  <li>	Go to Project Properties > Linker >System>Subsystem and update Windows(/SUBSYSTEM:WINDOWS)</li>
  <li>	Go to Project Properties > Linker >Advanced>Entry point and update main.</li>
  <li>	Click on Apply.</li>
</ol>

<h2>Project Features</h2>
<h3>Client Side Features</h3>
<ul>
  <li>A fully functional UI.</li>
  <li>A Client can establish a connection with the server by entering a valid client ID and pressing the start button.</li>
  <li>The connection from the client end is achieved through sockets.</li>
  <li>A client can end the connection using the stop button.</li>
</ul>
<h3>Server Side Features</h3>
<ul>
  <li>A fully functional UI with a live connection to the Database.</li>
  <li>A server can have ‘n’ number of clients connected to it.</li>
  <li>With server UI, one can view and delete the data stored in the database based on the selection given by him.</li>
  <li>Server stores the periodic data coming from the client in the MySQL Database.</li>
  <li>The ‘n’ connections at the server end are achieved through sockets and multithreading with a thread for each client connection.</li>
</ul>
<h3>Database</h3>
<ul>
  <li>Relational DB (MySQL) has been used</li>
  <li>
    There are 2 tables
    <ol>
      <li><b>Clients</b><br>Client ID (Primary Key)<br>Hostname <br>Status</li>
      <li><b>SystemInfo</b><br>Client ID (Foreign Key)<br>Hostname(Primary Key)<br>System Parameters<br>Timestamp(Primary Key)</li>
    </ol>
  </li>
</ul>



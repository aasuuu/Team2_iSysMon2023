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
Download the code from this repository as a zip file and extract it at a suitable location on your system.
After this, you are required to download and install the following software on your system for Database connection and User Interface. 
<h3>Database</h3>
1.	Download and install MySQL Installer 
2.	Using MySQL Installer install: 
  a. MySQL Community Server 8.0.11 
  b. MySQL Connector/C++ version 8.0.11 
3.	Update the relevant include and lib directories in Visual Studio Community 
  a.	Go to Project Properties > C/C++ > General > Additional Include Directories and update
      C:\Program Files\MySQL\Connector C++ 8.0\include 
      C:\Program Files\MySQL\MySQL Server 8.0\include 
  b.	Go to Project Properties > Linker > General > Additional Library Directories and update
      C:\Program Files\MySQL\Connector C++ 8.0\lib\opt 
      C:\Program Files\MySQL\MySQL Server 8.0\lib 
  c.	Go to Project Properties > Linker > Input > Additional Dependencies and update
      mysqlcppconn.lib 
      libmysql.lib
4.	Code, build, run 
  a. Copy libmysql.dll from C:\Program Files\MySQL\MySQL Server 8.0\lib to the executable directory 
  b. Copy libcrypto-1_1-x64.dll and libssl-1_1-x64.dll from C:\Program Files\MySQL\MySQL Server 8.0\bin to the executable directory.

<h3>User Interface</h3>


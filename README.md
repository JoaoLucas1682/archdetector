## archdetector

## ATTENTION: First of all, read the README.md carefully to understand the project.

I created this program to check if an application is 32-bit, 64-bit, 16-bit (MS-DOS), 16-bit (WINDOWS), PIF, POSIX, or OS/2 16-bit. I usually use this tool to see programs if they are 64-bit to send to my projects.<br/>
Like 64-bit Windows PE, it doesn't have support for 32-bit apps. This makes it easier for me, because I don't have to take out a 32-bit program and put in a 64-bit program. This saves time. It can also be used to see if a program was actually compiled in 32-bit (or 64-bit).

### How to use

If you have Drag-n-drop enabled, you can grab the program you want to view in archdetector[32|64].exe and you'll see the result in the ArchDetector window.<br/>

If you want to use CMD for this, then the ArchDetector syntax is here:<br/>
```
[archdetector] "<executable path>"
```
### Which ArchDetector should I use?

You saw that there are two executables of the archdetector.exe right? There is archdetector64.exe and archdetector32.exe, but which one should I use?<br/>

It's simple:<br/>
archdetector32.exe is for 32-bit<br/>
archdetector64.exe is for 64-bit

<br/>
If you don't know if your system is 32-bit or 64-bit, check on msinfo32 (Windows key + R, then type msinfo32, then locate System type and check what the architecture is, x64 for 64-bit, x86 for 32-bit).<br/>
<br/><br/><br/>

### Disclaimer

This repository is provided "as is" without warranties of any kind, either express or implied. The authors are not responsible for damages or consequences of the use of this code.<br/>

The content made available here is for educational and experiential purposes only. Use in production environments is the responsibility of the user.<br/>

Before using this project, check for compatibility and compliance with applicable standards and regulations.<br/>

And check the license of the code from this repository in the LICENSE file<br/>
:)

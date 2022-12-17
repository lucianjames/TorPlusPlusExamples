# TorPlusPlusExamples
Examples for the TorPlusPlus header, see https://github.com/LJ3D/TorPlusPlus for all the info

## ❗ You need to manually do this: ❗
Requires the "tor" folder from the "Tor Expert Bundle" to be placed next to the executable.
(This file can be downloaded from https://www.torproject.org/download/tor/)

The steps to do this are:
1. Download the "Tor Expert Bundle" from https://www.torproject.org/download/tor/ (Likely Windows (x86_64) unless you are a caveman)
2. Extract the tar.gz file
3. Copy the "tor" folder (which contains the tor.exe executable) to the same folder as your executable
4. Run your executable - it should start the tor proxy and connect to it!

You can specify the path to the tor.exe executable in the torSocket constructor if you want to place it somewhere else.


I might make some kind of script to automate doing this, I dont want to just place the files in here as they will become outdated.

## ⚠️ Security ⚠️
⚠️ Absolutely no guarantees on security/anonymity when using this code to talk to TOR ⚠️

#!/bin/bash

chmod -R 755 Build/Products/Release/CleanAtheros.kext
sudo chown -R root:wheel Build/Products/Release/CleanAtheros.kext
sudo kextutil -v Build/Products/Release/CleanAtheros.kext

# sudo kextcache -i /

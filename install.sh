#!/bin/bash

sudo rm -rf CleanAtheros.kext
sudo cp -R Build/Products/Release/CleanAtheros.kext .
sudo chmod -R 755 CleanAtheros.kext
sudo chown -R root:wheel CleanAtheros.kext
sudo kextutil -v CleanAtheros.kext

# sudo kextcache -i /

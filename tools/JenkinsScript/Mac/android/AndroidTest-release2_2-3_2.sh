#!/bin/bash
#This script is used to finished a android automated compiler in Mac OS.
#You'd better add "export PATH=$PATH:$ANDROID_HOME/platform-tools" and "export
#PATH=$PATH:$ANDROID_HOME/tools" to you bash_profile,it will be very convenient.

#Copy monkeyrunner python script to tools directory.
cd ../..
CUR=$(pwd)
cp $CUR/Monkeyrunner_TestsCpp.py $ANDROID_HOME/tools

cd ../..
cd samples/TestCpp/proj.android/bin

#Copy test apk to tools directory.
CUR=$(pwd)
cp $CUR/TestCpp-release-8.apk $ANDROID_HOME/tools
cp $CUR/TestCpp-release-10.apk $ANDROID_HOME/tools
cp $CUR/TestCpp-release-11.apk $ANDROID_HOME/tools
cp $CUR/TestCpp-release-12.apk $ANDROID_HOME/tools
cp $CUR/TestCpp-release-13.apk $ANDROID_HOME/tools

#Enter tools directory.
cd $ANDROID_HOME

#If monkeyrunner test failed,it automatically exit and make ERRORLEVEL nonzero.

#Running monkeyrunner test(release,API level:8)
mv TestCpp-release-8.apk TestCpp-release.apk
monkeyrunner Monkeyrunner_TestsCpp.py
rm TestCpp-release.apk

#Running monkeyrunner test(release,API level:10)
mv TestCpp-release-10.apk TestCpp-release.apk
monkeyrunner Monkeyrunner_TestsCpp.py
rm TestCpp-release.apk

#Running monkeyrunner test(release,API level:11)
mv TestCpp-release-11.apk TestCpp-release.apk
monkeyrunner Monkeyrunner_TestsCpp.py
rm TestCpp-release.apk

#Running monkeyrunner test(release,API level:12)
mv TestCpp-release-12.apk TestCpp-release.apk
monkeyrunner Monkeyrunner_TestsCpp.py
rm TestCpp-release.apk

#Running monkeyrunner test(release,API level:13)
mv TestCpp-release-13.apk TestCpp-release.apk
monkeyrunner Monkeyrunner_TestsCpp.py
rm TestCpp-release.apk

rm Monkeyrunner_TestsCpp.py

#Monkeyrunner success!
git checkout -f
git clean -df -x
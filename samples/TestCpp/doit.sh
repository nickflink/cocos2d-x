#!/bin/bash
#
# badit.sh - build and debug it
# @author: Nick Flink <nick@tuenti.com>
##
##  Usage: badit.sh [-h|-u]
##  The following options are provided.
##  -h             help. What you are reading now.
##  -u             uninstall. do a clean install
##  -c             clean. do a full rebuild
##  -s             sync. sync before doing the build
#
# default variables
#
CLEAN="no"
UNINSTALL="no"
SYNCREPOS="no"
TRUNKDIR="$( cd "$( dirname "$0" )" && pwd )"
ANDROIDPROJDIR="$TRUNKDIR/proj.android"
URI="org.cocos2dx.testcpp"
COMPONENT="TestCpp"
PROFILE="debug"
#
# helper functions
#
print_usage(){
  echo "$1" >&2
  echo -e "Usage: $0 [-h|-s|-g|]\n" >&2 
  sed -n '/^## /s/^## //p' $0 >&2
  exit 1
}
function check_return_code(){
  if [ "$1" != "0" ];then
    echo "last command failed bailing"
    popd;
    exit $1
  fi
}
#
# arg parsing
#
validate_optarg(){
  [[ "${OPTARG:0:1}" = "-" ]] && print_usage "-$opt: requires an argument"
}

while getopts "hus" opt
do
  case $opt in
    h ) #help
      print_usage
      ;;
    c ) #clean
      CLEAN="yes"
      ;;
    s ) #sync
      SYNCREPOS="yes"
      ;;
    u ) #uninstall
      UNINSTALL="yes"
      ;;
    : )
      print_usage "Option -$OPTARG requires an argument."
      ;;
    ? )
      if [ "${!OPTIND}" == "--help" ]
      then
        print_usage
      else
        print_usage "Invalid option: -$OPTARG"
      fi
      ;;
  esac
done

if [ "$PROFILE" == "debug" ]; then
  NDK_DEBUG=1
  export NDK_DEBUG
fi

pushd $TRUNKDIR;
#check_return_code "$?" commented because if alreay applied it ignores it but returns an error code

if [ "$SYNCREPOS" == "yes" ]; then
  echo "implement syncing repos";
  check_return_code "$?"
fi
if [ "$CLEAN" == "yes" ]; then
  echo "implement clean repos";
  check_return_code "$?"
fi

NDK_MODULE_PATH="$TRUNKDIR/cocos2d-x:$TRUNKDIR/cocos2d-x/cocos2dx/platform/third_party/android/source"
NDK_MODULE_PATH="$NDK_MODULE_PATH:$TRUNKDIR/cocos2d-x/cocos2dx/platform/third_party/android/source"
NDK_MODULE_PATH="$NDK_MODULE_PATH:$TRUNKDIR/cocos2d-x/cocos2dx/platform/third_party/android/prebuilt"
export NDK_MODULE_PATH
echo "NDK_MODULE_PATH = $NDK_MODULE_PATH"
echo -e "===============================\nBUILDING_NATIVE\n==============================="
pushd $ANDROIDPROJDIR/
#source "$ANDROIDPROJDIR/build/android/envsetup.sh" || { echo Fatal: Cannot load $ANDROIDPROJDIR/build_helpers/android/envsetup.sh;  exit 1; }
./build_native.sh
RET_CODE_CACHE="$?"
popd
check_return_code "$RET_CODE_CACHE"

#echo -e "===============================\nHEADERGEN\n==============================="
#pushd $TRUNKDIR/voice-client-core/target/classes
#javah -classpath `pwd` com.tuenti.voice.core.VoiceClient && mv com_tuenti_voice_core_VoiceClient.h ../../jni/
#RET_CODE_CACHE="$?"
#popd
#check_return_code "$RET_CODE_CACHE"

echo -e "===============================\nBUILDING_APK\n==============================="
pushd $ANDROIDPROJDIR/
ant $PROFILE -Dsdk.dir=$ANDROID_SDK_ROOT
RET_CODE_CACHE="$?"
popd
check_return_code "$RET_CODE_CACHE"

echo -e "===============================\nUNINSTALLING\n==============================="
if [ "$UNINSTALL" == "yes" ];then
  COMMAND="adb uninstall $URI"
  echo "$COMMAND"
  $COMMAND
  RET_CODE_CACHE="$?"
  check_return_code "$RET_CODE_CACHE"
else
  echo "skipping..."
fi

echo -e "===============================\nINSTALLING\n==============================="
adb install -r $ANDROIDPROJDIR/bin/$COMPONENT-$PROFILE.apk
RET_CODE_CACHE="$?"
check_return_code "$RET_CODE_CACHE"

echo -e "===============================\nLAUNCHING\n==============================="
adb shell am start -a android.intent.action.LAUNCHER -n $URI/.$COMPONENT
RET_CODE_CACHE="$?"
check_return_code "$RET_CODE_CACHE"

echo -e "===============================\nDEBUGGING\n==============================="
pushd $ANDROIDPROJDIR
# THESE ARE JUST EXAMPLES
#ndk-gdb --verbose --force --launch=$URI/.$COMPONENT --project=$ANDROIDPROJDIR
#ndk-gdb --verbose --force -p $URI/.$COMPONENT --project=$ANDROIDPROJDIR
#$TRUNKDIR/build/android/gdb_apk -p com.tuenti.voice.example -l voice-client-core/obj/local/armeabi-v7a/
#$ANDROIDPROJDIR/build/android/gdb_apk -p com.tuenti.voice.example -l voice-client-core/obj/local/armeabi/

# THIS IS THE CLOSEST TO WORKING
#export CHROME_SRC="$TRUNKDIR"
#$ANDROIDPROJDIR/build/android/gdb_apk -p $URI -l obj/local/armeabi/
RET_CODE_CACHE="$?"
popd;
check_return_code "$RET_CODE_CACHE"

popd;


set -ex
PWD=`pwd`
export CPLUS_INCLUDE_PATH="${CPLUS_INCLUDE_PATH}:${PWD}"
echo $CPLUS_INCLUDE_PATH
export C_INCLUDE_PATH="${C_INCLUDE_PATH}:${PWD}"
echo $C_INCLUDE_PATH
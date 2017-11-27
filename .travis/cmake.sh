#!/bin/bash

set -e
set -x

wget https://cmake.org/files/v3.10/cmake-3.10.0-Linux-x86_64.tar.gz -O cmake.tar.gz
tar -xzf cmake.tar.gz -C $HOME
export PATH=$HOME/cmake-3.10.0-Linux-x86_64/bin:$PATH

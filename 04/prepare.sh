#!/bin/bash
# Fail on error of a subprocess. Change only if you know what you're doing.
set -e

# Use the prepare script to set up software you need to run your challenge.
# A list of tools that are already available on the GitHub-hosted runners is available at:
#  https://github.com/actions/runner-images/blob/main/images/linux/Ubuntu2204-Readme.md
# If you use only those, you do not need any additional scripts.
#
# If you do not need to prepare anything, you can leave this script empty as it is.
#
# In the end, the benchmarking expects a executable called "challenge" in this folder.
# This will be the program used for benchmarking
# To emphasize this again: The file has to be executable!
#
# Below, find some examples of what you can do here

# You need a virtual env in Python with specific packages:
# python -m virtualenv venv
# source venv/bin/activate
# pip install --upgrade pip
# pip install numpy
# deactivate
#
# Make sure to use #!./venv/bin/python as the shebang in your script!

# You can use this step also to compile your script, if you are using a language like C++:
# g++ challenge.cpp -o challenge
g++ challenge04.cpp -o challenge

# If for whatever reason your toolchain is not able to create an executable with a certain name,
# you can use mv and chmod to adjust:
# mv generated-file.wtf challenge
# chmod a+x challenge

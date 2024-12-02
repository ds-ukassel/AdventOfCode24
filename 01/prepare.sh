#!/bin/bash
# Fail on error of a subprocess. Change only if you know what you're doing.
set -e

echo "#!/usr/bin/python" >> challenge
cat challenge.py >> challenge
chmod a+x challenge
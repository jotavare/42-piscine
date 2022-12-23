#!/bin/sh
find . -name "*.sh" | sed 's:.*/::' | sed 's/\.[^.]*$//'
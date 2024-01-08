#!/bin/sh

mkdir $(acc config-dir)/cpp
cp .devcontainer/template.json $(acc config-dir)/cpp/
acc config default-template cpp

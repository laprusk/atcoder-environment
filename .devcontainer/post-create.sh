#!/bin/sh

mkdir -p $(acc config-dir)/cpp
cp -n .devcontainer/template.json $(acc config-dir)/cpp/
acc config default-template cpp

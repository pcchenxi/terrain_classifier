#!/bin/bash
. /opt/ros/kinetic/setup.bash
. ~/terrain_classifier/preprocessor/devel/setup.bash --extend

python ~/terrain_classifier/classify_terrain.py


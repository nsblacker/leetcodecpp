#!/bin/bash

scriptDir=$(cd `dirname $0`; pwd)
rootDir=${scriptDir%/scripts}

projectsDir="${rootDir}/projects"

if [[ -d $projectsDir ]]; then
    rm -rf $projectsDir
    mkdir $projectsDir
else 
    mkdir $projectsDir
fi

cd $projectsDir

echo $projectsDir

echo "build xcode project"

cmake -G Xcode ../src

echo "build xcode project done"

# Microsoft Windows
#cmake -G "Visual Studio 14" ..
#cmake -G "Visual Studio 14 Win64" ..
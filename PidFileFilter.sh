#! /bin/bash

search_dir=$PWD
files=$(ls $search_dir)
echo "$files"
for entry in ${files[@]}; do
   if [[ "$entry" =~ ^[A-Za-z\-]+\.[0-9]+$  ]];then
       echo "The file $entry is a Pid file"
   fi
done

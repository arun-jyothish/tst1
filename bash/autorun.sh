#! /bin/bash

target_dir=~/.ssh
key=$(whoami)-ssh
echo $key
mkdir -p db
echo | ssh-keygen -t ed25519 -C "$key" -f $key
mv $key db/$key
echo ; echo "$key ::  \n $(ip addr)" ; echo;  >> db.txt
cat $key.pub >> $target_dir/authorized_keys
rm $key.pub

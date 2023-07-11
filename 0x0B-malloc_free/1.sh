#!/bin/bash

# Change permissions of all files in the current directory
chmod 777 *

# Add all files to git
git add .

# Commit changes with a message
git commit -m 'add'

# Push changes to the remote repository
git push


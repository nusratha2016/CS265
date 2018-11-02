Question #1

#!/bin/bash

while [[ $choice -ne 4 ]]; do

echo ""
echo "1) Display your current directory"
echo "2) Display your home directory"
echo "3) List the contents of your current directory"
echo "4) Exit the program"
echo ""

read -p "Please select a menu item: " choice

case $choice in
  1) echo ""
     pwd ;;
  2)  echo ""
     echo $HOME ;;
  3) echo ""
     ls -al ;;
  4) exit 0 ;;
  5) ;;
  *) echo "Invalid Choice";;
esac

done

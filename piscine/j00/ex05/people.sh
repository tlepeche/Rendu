ldapsearch -xLLL objectClass=apple-user | grep -i uid: | sort -r --ignore-case | sed s'/uid: //'g

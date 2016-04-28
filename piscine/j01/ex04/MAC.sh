ifconfig -a |grep ether | tr ' ' '/' | cut -d / -f 2 | sed 's/ether//'

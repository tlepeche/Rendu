ldapsearch -xLLL last-name | grep '[[:alpha:]]BON' | wc -l | tr " " "#" |rev | cut -d \# -f 1 |rev

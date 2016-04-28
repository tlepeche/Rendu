cat /etc/passwd | grep -v '#' | sed 'n;d' | rev | sort -r  | cut -d : -f 7 | sed -n "$FT_LINE1","$FT_LINE2"p | tr "\n$" "," | sed 's/,/, /g' | sed 's/, $/./'

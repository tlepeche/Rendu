find . -type d -or -type f  | wc -l | rev | tr " " "/" | cut -d / -f 1 | rev
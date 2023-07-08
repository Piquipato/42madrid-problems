cat /etc/passwd | grep -o -E "^[a-zA-Z0-9_-]*" | grep . | awk -v s="$FT_LINE1" -v e="$FT_LINE2" 'NR%2 == 0&&NR>s&&NR<e' | sort -r | rev | xargs | sed -e 's/ /, /g' | tr "\n" "."

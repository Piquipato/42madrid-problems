cat /etc/passwd | grep -o -E "^[a-zA-Z0-9_-]*" | awk -v s="$FT_LINE1" -v e="$FT_LINE2" 'NR%2 == 1&&NR>s&&NR<e'| sort -r | rev | grep . | paste -sd',' -

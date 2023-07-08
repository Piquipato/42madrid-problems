#!/bin/sh
LEN=$(cat /etc/passwd | grep -o -E "^[a-zA-Z0-9_-]*" | grep . | awk 'NR%2 == 1' | sort -r | rev | wc -l | tr -d ' ')
FT_LINE1=${1:-0}
FT_LINE2=${2:-$LEN}

cat /etc/passwd | grep -o -E "^[a-zA-Z0-9_-]*" | grep . | awk -v s="$FT_LINE1" -v e="$FT_LINE2" 'NR%2 == 1&&NR>s&&NR<e' | sort -r | rev | xargs | sed -e 's/ /, /g' | tr "\n" "."

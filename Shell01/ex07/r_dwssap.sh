#!/bin/sh

LISTA=$(cat /etc/passwd | grep -o -E "^[a-zA-Z0-9_-]*" | sort -r | rev)
LEN=$(echo $LISTA | wc -w | tr -d ' ')
FT_LINE1="${1:-1}"
FT_LINE2="${2:-$LEN}"
j=1
TMP=""

for v in $LISTA
do
  if [ $((j%2)) -eq 0 ] && [ $j -ge $FT_LINE1 ] && [ $j -le $FT_LINE2 ] 
  then
    TMP="$TMP$v, "
  fi
  j=$((j+1))
done

echo ${TMP%??}

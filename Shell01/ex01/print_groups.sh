groups $FT_USER | tr "\ " "," | tr -d "\n"
id -Gn $FT_USER | tr ' ' , | tr -d '\n'
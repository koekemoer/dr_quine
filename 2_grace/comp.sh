make re
./Grace
diff Grace.c Grace_kid.c && echo 'it is a quine' || echo 'its not a quine'

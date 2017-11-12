make re
./Colleen > tmp_Colleen
diff Colleen.c tmp_Colleen && echo 'it is a quine' || echo 'its not a quine'
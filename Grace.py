# Comments are always useful
s1 = "# Comments are always useful%cs1 = %c%s%c%cfilename = %cGrace_kid.py%c%c"
filename = "Grace_kid.py"
kid_file = open(filename, "w+")
kid_file.write(s1 % (10,34,s1,34,10,34,34,10))
kid_file.close()
 

# grace = "Grace.py"
# grace_kid = "Grace_Kid.py"
# grace_file = open(grace, "r")
# grace_kid_text = grace_file.read()
# grace_kid_file = open(grace_kid, "w")
# grace_kid_file.write(grace_kid_text)
# grace_file.close()
# grace_kid_file.close()

# Hashes a file, ignoring all whitespace and comments. Use for
# verifying that code was correctly typed.
# compile by typing in a hash.sh file and run cmd: chmod +x ./hash.sh
# execute with ./hash.sh < template.cpp
cpp -dD -P -fpreprocessed | tr -d '[:space:]'| md5sum |cut -c-6

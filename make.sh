#!/bin/bash

rm -f get_next_line_h_gch

echo -e "\033[0;32m[******************Wellcome to GNL TEST************************]\033[0m"
echo 
echo -e "\033[0;32m[BUFFER_SIZE = 1]\033[0m"
bash run01.sh
bash run01.2.sh
echo 
echo -e "\033[0;32m[BUFFER_SIZE = 35]\033[0m"
bash run03.sh
bash run03.2.sh
echo -e "\033[0;32m[BUFFER_SIZE = 70]\033[0m"
bash run05.sh
bash run05.2.sh
echo -e "\033[0;32m[BUFFER_SIZE = 141]\033[0m"
bash run06.sh
bash run06.2.sh
echo -e "\033[0;32m[BUFFER_SIZE = 142]\033[0m"
bash run07.sh
bash run07.2.sh
echo 
echo -e "\033[0;32m[BUFFER_SIZE = 250]\033[0m"
bash run02.sh
bash run02.2.sh
echo 
echo -e "\033[0;32m[BUFFER_SIZE = 99999]\033[0m"
bash run04.sh 
bash run04.2.sh

make test
./test | cat > logs/log
echo -e "\e[32m === Test Output === \e[0m"
 ./test
echo ""
echo -e "\e[34m === Created log at ./logs === \e[0m"

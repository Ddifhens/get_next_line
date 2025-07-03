cd /home/USER/get_next_line/comp
make test
/home/USER/get_next_line/comp/test | cat > logs/log
echo -e "\e[32m === Test Output === \e[0m"
/home/USER/get_next_line/comp/test
echo ""
echo -e "\e[34m === Created log at ./logs === \e[0m"

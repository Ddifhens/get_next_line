cd /home/jormanue/Desktop/CC/get_next_line/comp
make test 
/home/jormanue/Desktop/CC/get_next_line/comp/test | cat > logs/log
echo "\e[32m === Test Output === \e[0m"
/home/jormanue/Desktop/CC/get_next_line/comp/test
echo ""
echo "\e[34m === Created log at ./logs === \e[0m"

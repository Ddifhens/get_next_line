DIR=$(pwd)

#coimpile tests
make test 
#save output to logs
$DIR/test | cat > logs/log
#run test to current terminal 
echo "\e[32m === Test Output === \e[0m"
$DIR/test
#ending message 
echo ""
echo "\e[34m === Created log at ./logs === \e[0m"

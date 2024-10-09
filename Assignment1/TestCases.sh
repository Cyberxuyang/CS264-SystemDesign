#
#
# Run with the source code for each question as follows:
# ./TestCases.sh Q1.cpp Q2.cpp Q3.cpp Q4.cpp Q5.cpp
#
#




#total=0

echo ""

echo "Checking Question 1"

g++ -o Q1 $1 &> compileMessage.out

if(($? > 0)); then
	echo "Error"
	cat compileMessage.out
else
	echo "Compiled Successfully"

	echo "Reversing 1234567"
	echo "1234567" > input.txt

	./Q1 < input.txt &> user.out
	cat user.out

	echo "7654321" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

	echo ""

	echo "Reversing -89356"
	echo "-89356" > input.txt

	./Q1 < input.txt &> user.out
	cat user.out

	echo "-65398" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

fi

echo "
----------------------"

echo "Checking Question 2"

g++ -o Q2 $2 &> compileMessage.out

if(($? > 0)); then
	echo "Error"
	cat compileMessage.out
else
	echo "Compiled Successfully"


	echo "GCD of 24,36"
	echo "24 36" > input.txt

	./Q2 < input.txt &> user.out
	cat user.out

	echo "12" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi
	
	echo ""

	echo "GCD of 90,299"
	echo "90 299" > input.txt

	./Q2 < input.txt &> user.out
	cat user.out

	echo "1" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

fi

echo "
----------------------"

echo "Checking Question 3"

g++ -o Q3 $3 &> compileMessage.out
if(($? > 0)); then
	echo "Error"
	cat compileMessage.out
else
	echo "Compiled Successfully"

	echo "Checking if 1221 is a palindrome"
	echo "1221" > input.txt

	./Q3 < input.txt &> user.out
	cat user.out

	echo "true" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

	echo ""

	echo "Checking if -12221 is a palindrome"
	echo "-12221" > input.txt

	./Q3 < input.txt &> user.out
	cat user.out

	echo "false" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

fi

echo "
----------------------"

echo "Checking Question 4"

g++ -o Q4 $4 &> compileMessage.out
if(($? > 0)); then
	echo "Error"
	cat compileMessage.out
else
	echo "Compiled Successfully"

	echo "Calculating 2^3"
	echo "2 3" > input.txt

	./Q4 < input.txt &> user.out
	cat user.out

	echo "8" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

	echo ""

	echo "Calculating 1^200"
	echo "1 200" > input.txt

	./Q4 < input.txt &> user.out
	cat user.out

	echo "1" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

fi

echo "
----------------------"

echo "Checking Question 5"

g++ -o Q5 $5 &> compileMessage.out
if(($? > 0)); then
	echo "Error"
	cat compileMessage.out
else
	echo "Compiled Successfully"

	echo "Is 128 a power of two"
	echo "128" > input.txt

	./Q5 < input.txt &> user.out
	cat user.out

	echo "true" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

	echo ""

	echo "Is 23 a power of two"
	echo "23" > input.txt

	./Q5 < input.txt &> user.out
	cat user.out

	echo "false" > data.out

	diff -y -w user.out data.out > diff.out

	if(($? > 0)); then
		echo ""
		echo "Incorrect Output"
	else
		#total = $((total++))
		echo ""
		echo "Correct Output"
	fi

fi

echo ""

#echo "Total is: $total"

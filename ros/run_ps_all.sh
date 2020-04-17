for s in 5242880
do
for j in 1 5 10 25 50 100 200 500 1000 #1000 500 200 100 50 25 10 5 1
do	
for i in 1 2 3 4 5 10 15 20 30 40 50 100 300 500 800 1000
do
./run_ps.sh 1 $j $i $s
done
done
done

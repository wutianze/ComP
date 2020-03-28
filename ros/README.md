For non-nodelet test ./run_test.sh AD 1024 # first is save file name, second is msg size
For nodelet test ./run_nodelet.sh AD 1024, after the process finish you should use Ctrl-C to stop and then the result will show
For pub_sub test ./run_ps.sh AD, another terminal:./devel/lib/pub_sub talker 10(rate/hz) 100(concurrent number) 1024(str size) 100(run time/s)
For pub_sub nodelet test ./run_nodelet_ps.sh AD 1(hz) 10(con)

#docker stats --format "{{.CPUPerc}}, {{.MemUsage}}" > stats.out
rm log.out
touch log.out
while :
do
docker stats --format "{{.Name}}, {{.CPUPerc}}, {{.MemUsage}}" --no-stream | grep apollo |sed -e 's/%/ /' -e 's/MiB/ /' |awk '{if($2!=0.00){print $2" "$4}}' >> log.out
sleep 5
done

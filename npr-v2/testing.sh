./NPR-GP.exe output/tempout ../npr-v109/configurations/npr-template_109.txt
echo
echo "RUNLOG"
head -n 5 output/tempout/run-log.txt | tail -n 1 >> ./worstresults.txt
tail -n 6 output/tempout/run-log.txt | head -n 1 >> ./bestresults.txt

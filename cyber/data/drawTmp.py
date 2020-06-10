import glob
import csv
import sys
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns

files = glob.glob(sys.argv[1])
#what = int(sys.argv[3])
#record_file_name = str(sys.argv[4])
for f in files:
    #with open(f) as lines:
        #array = csv.reader(lines)
        #print(type(array))
        #boxx = (np.array(list(array)))
    #boxx = np.loadtxt(f,dtype=np.int,delimiter=',',encoding='utf-8')
    #plt.figure(figsize=(10,5))
    #plt.title('Examples of boxplot',fontsize=20)
    #boxx.reshape(len(boxx),1)
    colnames = ['latency']
    df = pd.read_csv(f,header=None,names=colnames)
    #dataT = [[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32],[1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4],['a','a','a','a','b','b','b','b','a','a','a','a','b','b','b','b','a','a','a','a','b','b','b','b','a','a','a','a','b','b','b','b']]
    #df = pd.DataFrame(dataT,columns=['y','x','cat'])
    
    sns.boxplot(data=df,y='latency',showfliers=False)
    #plt.boxplot(df,patch_artist = True,showfliers=False, labels=['a','b','c'],boxprops = {'color':'black','facecolor':'pink'})
    #plt.show()
    plt.savefig('show.svg',dpi=600,bbox_inches='tight')

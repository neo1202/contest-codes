dir_path = r'C:\Users\PC\Desktop\2014\Junior-Preliminary\testdata' + r"\\"
exe_path = r"npsc2014-pre-d.exe"
problem = 'd' #a~z

"""
以 .exe 讀入 指定資料夾下的*.in 並和*.out 比對
若.exe輸出有不同(WA) 會暫停並顯示
若全對(AC) 會暫停並顯示

執行環境: Win7 / Win10
"""

print( dir_path )
print( exe_path )
dir_path = dir_path.replace( '\\', '/' )
exe_path = exe_path.replace( '\\', '/' )
print( dir_path )
print( exe_path )

import os

#all_files = os.listdir(dir_path)
all_AC = True
#print(all_files)
in_filepath = dir_path + 'p'+problem+'.in'
ans_filepath = dir_path + 'p'+problem+'.out'
#print( in_filepath, ans_filepath )
#print( exe_path )

# 清空畫面
os.system('cls')

# exe 讀入 .in 產生 output檔
cmd = '{exe_path} < "{in_filepath}" > tmp.txt'.format( exe_path=exe_path, in_filepath=in_filepath )
print( cmd )
os.system( cmd )
# 比對 output檔 和 .ans
cmd = 'FC tmp.txt "{ans_filepath}"'.format( ans_filepath=ans_filepath )
compare_result = os.system( 'FC tmp.txt "'+ans_filepath+'"' )
#print(compare_result) #0:兩個檔案相同  非0:兩個檔案不同
if compare_result != 0:
	input("請按Enter繼續")
	all_AC = False

os.remove('tmp.txt')

if all_AC:
	print( "全部Accept" )
	input("請按Enter繼續")
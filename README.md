compile Part A

  make A

compile Part B

  make B


/****************************/

result of B:

  when size=1000:

  sort(): 0 seconds
  
  v1/v2 are different.
  
  insertion_sort(): 0.01 seconds
  
  v1/v2 are the same.

//

  when size=10000:
  
  sort(): 0 seconds
  
  v1/v2 are different.
  
  insertion_sort(): 1.29 seconds
  
  v1/v2 are the same.
  
//

  when size=100000:
  
  sort(): 0.04 seconds
  
  v1/v2 are different.
  
  insertion_sort(): 128 seconds
  
  v1/v2 are the same.

//

  when size=1000000:
  
  sort(): 0.52 seconds
  
  v1/v2 are different.
  
  (等待時間過長)

/****************************/

explanation:
  
  sort():nlogn
  
  insertion_sort():n^2
  
  因為insertion_sort運算次數較多,時間會比sort來的長


再來是時間關係:
  
  sort:           從size=100000推論size=1000000
  
  推論:           0.04*(1000000/100000)*(log(1000000)/log(100000)) = 0.48
  
  結果:           0.52


  insertion_sort: 從size=10000推論size=100000
  
  推論:           1.29*(100000/10000)^2 = 131
  
  結果:           128
  
  
  得知推論正確

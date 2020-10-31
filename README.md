# SMARTAIL
## Histogram Equalisation 

- Histogram is a graphical representation of the intensity distribution of an image. In simple terms, it represents the number of pixels for each intensity value considered.

- Histogram Equalization is a computer image processing technique used to improve contrast in images. It accomplishes this by effectively spreading out the most frequent intensity values, i.e. stretching out the intensity range of the image. 

- **Algorithm Used**
- 1. Compute a scaling factor, α= 255 / number of pixels
- 2. Create a look-up table(LUT) with

     - LUT[0] =  α * histogram[0]
      
- 3. for all remaining grey levels, i, do

       -  LUT[i] = LUT[i-1] + α * histogram[i]
     
     end for
     
- 4. for all pixel coordinates, x and  y, do

       - g(x, y) = LUT[f(x, y)]
      
     end for
  
- **Input Image**


![scene](https://user-images.githubusercontent.com/31176045/97712300-42c4ee00-1ae4-11eb-8db8-c92415261ef1.jpg)

- **Original Histogram**


![original_hist](https://user-images.githubusercontent.com/31176045/97712527-8fa8c480-1ae4-11eb-9937-390b8cf43ded.jpg)


- **Equalised Image**

![Equalised_image](https://user-images.githubusercontent.com/31176045/97713738-3cd00c80-1ae6-11eb-9a07-1e2e0c48bc2f.jpg)

- **Equalised Histogram**

![Equalised_histogram](https://user-images.githubusercontent.com/31176045/97713838-5c673500-1ae6-11eb-8e45-a10b35823416.jpg)


## File Crawler

- Implemented using a **2-D map** data structure to store the path of file and corresponding word count(to search word) present in the particular file.

- This text crawler crawl on textfile whose path is provided in url.txt file and once crawlling is complete it will ask you to enter a word and it will tell you that word is in which. file.



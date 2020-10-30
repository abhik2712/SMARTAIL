# SMARTRAIL
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



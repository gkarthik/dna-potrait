#!/bin/bash

echo BEGIN
date

name=$(basename $1)
name=${name/.fasta/}

echo $name 
./dna_potrait $1 > coords/$name.txt
gnuplot -e "image_name='$name'" -e "image_filename='potraits/$name.png'" -e "coord_filename='coords/$name.txt'" draw_image

echo END
date

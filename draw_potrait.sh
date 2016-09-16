#!/bin/bash

./dna_potrait $1 > coords/$2.txt
gnuplot -e "image_name='$2'" -e "image_filename='potraits/$2.png'" -e "coord_filename='coords/$2.txt'" draw_image
